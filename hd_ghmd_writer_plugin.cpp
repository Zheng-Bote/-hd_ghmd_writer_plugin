/**
 * @file hd_ghmd_writer_plugin.cpp
 * @author ZHENG Robert (www.robert.hase-zheng.net)
 * @brief Github markdown writer plugin for header_docu
 * @details write Github Markdown header
 * @version 1.1.0
 * @date 2023-04-25
 *
 * @copyright Copyright (c) ZHENG Robert 2023
 *
 */

#include "hd_ghmd_writer_plugin.h"

const QString PLUGIN_SHORTNAME = "gh_markdown";
const QString PLUGIN_NAME ="Github Markdown writer";
const QString PLUGIN_VERSION = "1.1.0";

Hd_ghmd_writer_plugin::Hd_ghmd_writer_plugin(QObject *parent)
{
    Q_UNUSED(parent);
    //qDebug() << "Plugin Constructor";
}

Hd_ghmd_writer_plugin::~Hd_ghmd_writer_plugin()
{
    //qDebug() << "Plugin Deconstructed";
}

void Hd_ghmd_writer_plugin::test(QString name)
{
    qInfo() << "Test from " << PLUGIN_SHORTNAME << " Plugin: " << name;
}

QString Hd_ghmd_writer_plugin::getName()
{
    return PLUGIN_SHORTNAME;
}

QString Hd_ghmd_writer_plugin::getVersion()
{
    return PLUGIN_NAME + "-v" + PLUGIN_VERSION;
}

void Hd_ghmd_writer_plugin::parseFile(QMap<QString, QString> &mapParseKeys, QString pathToFile)
{

}

void Hd_ghmd_writer_plugin::writeFile(QMap<QString, QString> mapParseKeys, QMap<QString, QString> mapFileAttribs, QString pathToFile)
{
    QFile file(pathToFile);
    if(! file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Cannot open file: " << file.fileName() << "\n" << file.errorString();
        exit(1);
    }

    QTextStream stream(&file);

    stream << "## TITLE: " << mapParseKeys["TITLE"] << "\n";
    stream << "### BRIEF:\n" << mapParseKeys["BRIEF"] << "\n";
    stream << "### VERSION: " << mapParseKeys["VERSION"] << "\n";

    for (auto [key, val] : mapParseKeys.asKeyValueRange()) {
        if(key.compare("TITLE") != 0 and key.compare("BRIEF") != 0 and key.compare("VERSION") != 0) {
            stream << "### " << key << ":\n" << val << "\n";
        }
    }

    stream << "## File Details\n\n";
    for (auto [key, val] : mapFileAttribs.asKeyValueRange()) {
        if((QString::compare(key, "FILE_absolutePath") != 0) and (QString::compare(key, "FILE_baseDirName") != 0)) {
            stream << "### " << key << ": " << val << "\n";
        }
    }

    file.close();
}

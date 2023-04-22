<div id="top"></div>
<br />
<div align="center">
<h2 align="center">hd_ghmd_writer_plugin</h2>

  <p align="center">
      Github Markdown writer plugin for header_docu_qt
    <br />
    <br />
    <a href="https://github.com/Zheng-Bote/hd_ghmd_writer_plugin/issues">Report Bug</a>
    ·
    <a href="https://github.com/Zheng-Bote/hd_ghmd_writer_plugin/issues">Request Feature</a>
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#screenshots-and-samples">Screenshots and Samples</a></li>

  </ol>
</details>

<!-- ABOUT THE PROJECT -->

### About the Project 

**Github Markdown writer plugin for header_docu_qt (e.g. \*.c[pp], \*.h[pp], ...)**

:arrow_right: <mark>:warning: still under construction :warning:</mark> :arrow_left:

*short description:*

_still in progress_

### built with

Build on GNU/Linux with QT 6.5 C++17 


## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTACT -->

## Contact

ZHENG Robert Zhèng Bó Tè 郑 伯特

Project Link: [https://github.com/Zheng-Bote/header_docu_qt/](https://github.com/Zheng-Bote/header_docu_qt/)


## Screenshots and Samples

**sample Github markdown output**

```
## TITLE: start.cpp

### BRIEF:
header_docu_cpp (main.cpp)

### VERSION: 0.4.0

### AUTHOR:
ZHENG Robert

### COMMENT:
keinen

### COPYRIGHT:
ZHENG Robert

### DATE:

### DEPENDENCIES:
cxxopts
a lightweight C++ option parser library, supporting the standard GNU
style syntax for options. https//github.com/jarro2783/cxxopts License gpl2

### DESC:
header_docu_cpp is a small nafty C++ commandline tool to read the first
comment block of a textfile and outputs it as HTML5- or markdown- snippet

### DESCRIPTION:

### FILE:

### HISTORY:
Version | Date       | Developer | Comments
--------|------------|-----------|------------------------------------
0.1.0   | 2023-03-24 | RZheng    | created                            |
0.2.0   | 2023-03-31 | RZheng    | file permission added              |
0.2.0   | 2023-03-31 | RZheng    | SHA2-256 filehash added            |
0.3.0   | 2023-04-02 | RZheng    | separated to MacOS                 |
0.4.0   | 2023-04-02 | RZheng    | Linux threads added to file output |

### LICENSE:

### SOURCE:
https//github.com/Zheng-Bote/header_docu

### SYNTAX:
header_docu -h | header_docu --help
-d, --dir arg     parse directory (default .)
-e, --ext arg     file extension (default .h)
-f, --file arg    1 single textfile path/file
-o, --out arg     output type md | html | json | csv | adoc (default
html)
-s, --single arg  single output files yes | no (default yes)
-t, --target arg  target output dir (default ./header_docu_cpp/)
-h, --help        Print usage
-v, --version     Version
EXAMPLES
/usr/local/bin/header_docu --dir . --ext h --out md // read/parse all *.h
files in the current directory /usr/local/bin/header_docu --file
~/DEV/CPP/header_docu/main.cpp --out html // read/parse single file and output
as HTML5 snippet
RETURN
output.md | output.html void

## File Details

### FILE_LastModified_localtime: 2023-04-21 18:16:54
### FILE_Name: header_docu_cpp.cpp
### FILE_Perm_AlphaNumeric: -rwxr-xr-x
### FILE_Perm_Numeric: 755
### FILE_SHA256_Hash: ca6005c228c409b643b47335b6de1f53efc8bb190b41d5d15c2665b517ceb690
### FILE_Scan_UTCcurrent: 2023-04-22 11:13:51
### FILE_Scan_localTime: 2023-04-22 13:13:51
### FILE_Size: 6773
### FILE_baseFileName: header_docu_cpp
### FILE_completeSuffix: cpp
### FILE_created_localtime: 2023-04-10 08:49:22
### FILE_lastModified_humanUTC: 2023-04-21 16:16:54
### FILE_lastModified_stringUTC: 2023-04-21_16-16-54
### FILE_lastModified_timeUTC: 2023-04-21T16:16:54Z
### FILE_lastModified_timeUtcOffset: UTC+02:00
### FILE_lastModified_timeZAbbreviation: CEST
```


### the end

:vulcan_salute:

<p align="right">(<a href="#top">back to top</a>)</p>

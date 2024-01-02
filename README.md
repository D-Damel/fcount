# How to use fcount

*fcount* program wrote on C++ for counting files in target directory.
It's returns total quantity of files. You can correct total quantity by argument for taking off some files from counting process. 

> ** This version of *fcount* works just with Linux based OS **
>
> For Windows OS use *wfcount* (see repository /wfcount)
>
{style="note"}

## Before you start

Compile this project in C++ IDE and put file with name *fcount* from project directory to some directory if needed. 

Make sure that:
- Your C++ IDE have all needed external libraries
- Compilation went without any errors

## How to run fcount and use arguments

Some introductory information.

1. You can run *fcount* by CLI

   ```bash
    ~/../PATH_TO_DIRECTORY_WITH/fcount arg1 arg2
   ```
   where:

      *arg1* - (required) path to directory.

      *arg2* - (non required) number of files for take away from total count.

   For example:

   ```bash
    ~/../test/fcount /backups 2
   ```

   Here *fcount* (located in */test* directory) counted filed in */backups* directory and takeoff 2 files (sometimes it happen if in target directory located files which no needed for counting).

2. Output 

   ```bash
    ~/../test/fcount /backups 2
   3
   ~/
   ```
   3 (number) - Total qty of files in target */backups* directory (counted qty = *5*)  and takeoff *2* files.

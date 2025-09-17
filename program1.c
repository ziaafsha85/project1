this is my program 1 file
this is second statment of program
this line i have written from feature branch
this  is third statement of program
rm: cannot remove '/etc/post-install/01-devices.post': Permission denied
rm: cannot remove '/etc/post-install/03-mtab.post': Permission denied
rm: cannot remove '/etc/post-install/06-windows-files.post': Permission denied
rm: cannot remove '/etc/post-install/99-post-install-cleanup.post': Permission denied

cseds@DSLAB MINGW64 ~
$ git -v
git version 2.51.0.windows.1

cseds@DSLAB MINGW64 ~
$ ls
 AppData/             Documents/  'Local Settings'@   NTUSER.DAT{03f36cf0-1c5f-11ef-9efc-00155d925047}.TxR.0.regtrans-ms   NTUSER.DAT{03f36cf1-1c5f-11ef-9efc-00155d925047}.TM.blf                                        OneDrive/       Searches/      Videos/
'Application Data'@   Downloads/   Music/             NTUSER.DAT{03f36cf0-1c5f-11ef-9efc-00155d925047}.TxR.1.regtrans-ms   NTUSER.DAT{03f36cf1-1c5f-11ef-9efc-00155d925047}.TMContainer00000000000000000001.regtrans-ms   PrintHood@      SendTo@        ntuser.dat.LOG1
 Contacts/            Favorites/  'My Documents'@     NTUSER.DAT{03f36cf0-1c5f-11ef-9efc-00155d925047}.TxR.2.regtrans-ms   NTUSER.DAT{03f36cf1-1c5f-11ef-9efc-00155d925047}.TMContainer00000000000000000002.regtrans-ms   Recent@        'Start Menu'@   ntuser.dat.LOG2
 Cookies@             Links/       NTUSER.DAT         NTUSER.DAT{03f36cf0-1c5f-11ef-9efc-00155d925047}.TxR.blf             NetHood@                                                                                      'Saved Games'/   Templates@     ntuser.ini

cseds@DSLAB MINGW64 ~
$ cd..
bash: cd..: command not found

cseds@DSLAB MINGW64 ~
$ cd ..

cseds@DSLAB MINGW64 /c/Users
$ cd ..

cseds@DSLAB MINGW64 /c
$ cd ..

cseds@DSLAB MINGW64 /
$ cd d:

cseds@DSLAB MINGW64 /d
$ ls
'$RECYCLE.BIN'/  'Backup Files'/  'System Volume Information'/

cseds@DSLAB MINGW64 /d
$ mkdir myproject1

cseds@DSLAB MINGW64 /d
$ ls
'$RECYCLE.BIN'/  'Backup Files'/  'System Volume Information'/   myproject1/

cseds@DSLAB MINGW64 /d
$ cd myproject1

cseds@DSLAB MINGW64 /d/myproject1
$ git init
Initialized empty Git repository in D:/myproject1/.git/

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git config--list
git: 'config--list' is not a git command. See 'git --help'.

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git config --
error: no action specified

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git config --list
diff.astextplain.textconv=astextplain
filter.lfs.clean=git-lfs clean -- %f
filter.lfs.smudge=git-lfs smudge -- %f
filter.lfs.process=git-lfs filter-process
filter.lfs.required=true
http.sslbackend=schannel
core.autocrlf=true
core.fscache=true
core.symlinks=false
pull.rebase=false
credential.helper=manager
credential.https://dev.azure.com.usehttppath=true
init.defaultbranch=master
core.repositoryformatversion=0
core.filemode=false
core.bare=false
core.logallrefupdates=true
core.symlinks=false
core.ignorecase=true

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git config --username 'ziaafsha85'
error: unknown option `username'
usage: git config list [<file-option>] [<display-option>] [--includes]
   or: git config get [<file-option>] [<display-option>] [--includes] [--all] [--regexp] [--value=<pattern>] [--fixed-value] [--default=<default>] [--url=<url>] <name>
   or: git config set [<file-option>] [--type=<type>] [--all] [--value=<pattern>] [--fixed-value] <name> <value>
   or: git config unset [<file-option>] [--all] [--value=<pattern>] [--fixed-value] <name>
   or: git config rename-section [<file-option>] <old-name> <new-name>
   or: git config remove-section [<file-option>] <name>
   or: git config edit [<file-option>]
   or: git config [<file-option>] --get-colorbool <name> [<stdout-is-tty>]

Config file location
    --[no-]global         use global config file
    --[no-]system         use system config file
    --[no-]local          use repository config file
    --[no-]worktree       use per-worktree config file
    -f, --[no-]file <file>
                          use given config file
    --[no-]blob <blob-id> read config from given blob object

Action
    --get                 get value: name [<value-pattern>]
    --get-all             get all values: key [<value-pattern>]
    --get-regexp          get values for regexp: name-regex [<value-pattern>]
    --get-urlmatch        get value specific for the URL: section[.var] URL
    --replace-all         replace all matching variables: name value [<value-pattern>]
    --add                 add a new variable: name value
    --unset               remove a variable: name [<value-pattern>]
    --unset-all           remove all matches: name [<value-pattern>]
    --rename-section      rename section: old-name new-name
    --remove-section      remove a section: name
    -l, --list            list all
    -e, --edit            open an editor
    --get-color           find the color configured: slot [<default>]
    --get-colorbool       find the color setting: slot [<stdout-is-tty>]

Display options
    -z, --[no-]null       terminate values with NUL byte
    --[no-]name-only      show variable names only
    --[no-]show-origin    show origin of config (file, standard input, blob, command line)
    --[no-]show-scope     show scope of config (worktree, local, global, system, command)
    --[no-]show-names     show config keys in addition to their values

Type
    -t, --[no-]type <type>
                          value is given this type
    --bool                value is "true" or "false"
    --int                 value is decimal number
    --bool-or-int         value is --bool or --int
    --bool-or-str         value is --bool or string
    --path                value is a path (file or directory name)
    --expiry-date         value is an expiry date

Other
    --[no-]default <value>
                          with --get, use default value when missing entry
    --[no-]comment <value>
                          human-readable comment string (# will be prepended as needed)
    --[no-]fixed-value    use string equality when comparing values to value pattern
    --[no-]includes       respect include directives on lookup


cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git config --global user.name "ziaafsha85"

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git config --global user.email "ziyaafshamakandar@gmail.com"

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git config --list
diff.astextplain.textconv=astextplain
filter.lfs.clean=git-lfs clean -- %f
filter.lfs.smudge=git-lfs smudge -- %f
filter.lfs.process=git-lfs filter-process
filter.lfs.required=true
http.sslbackend=schannel
core.autocrlf=true
core.fscache=true
core.symlinks=false
pull.rebase=false
credential.helper=manager
credential.https://dev.azure.com.usehttppath=true
init.defaultbranch=master
user.name=ziaafsha85
user.email=ziyaafshamakandar@gmail.com
core.repositoryformatversion=0
core.filemode=false
core.bare=false
core.logallrefupdates=true
core.symlinks=false
core.ignorecase=true

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ nano program1.c

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git add program1.c
warning: in the working copy of 'program1.c', LF will be replaced by CRLF the next time Git touches it

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git commit -m "this is my first commit"
[master (root-commit) bb98f71] this is my first commit
 1 file changed, 1 insertion(+)
 create mode 100644 program1.c

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git log
commit bb98f718c68f95cbb886fed31be394a4d1661694 (HEAD -> master)
Author: ziaafsha85 <ziyaafshamakandar@gmail.com>
Date:   Mon Sep 15 16:33:46 2025 +0530

    this is my first commit

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git show
commit bb98f718c68f95cbb886fed31be394a4d1661694 (HEAD -> master)
Author: ziaafsha85 <ziyaafshamakandar@gmail.com>
Date:   Mon Sep 15 16:33:46 2025 +0530

    this is my first commit

diff --git a/program1.c b/program1.c
new file mode 100644
index 0000000..76eeff3
--- /dev/null
+++ b/program1.c
@@ -0,0 +1 @@
+this is my program 1 file

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ nano program1.c

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git add program1.c
warning: in the working copy of 'program1.c', LF will be replaced by CRLF the next time Git touches it

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git log
commit bb98f718c68f95cbb886fed31be394a4d1661694 (HEAD -> master)
Author: ziaafsha85 <ziyaafshamakandar@gmail.com>
Date:   Mon Sep 15 16:33:46 2025 +0530

    this is my first commit

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git add program1.c

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git commit -m "this is my second statment of program"
[master 101342f] this is my second statment of program
 1 file changed, 1 insertion(+)

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git log
commit 101342f67a9794eb6a3863528b75fc0e70caa9be (HEAD -> master)
Author: ziaafsha85 <ziyaafshamakandar@gmail.com>
Date:   Mon Sep 15 16:48:39 2025 +0530

    this is my second statment of program

commit bb98f718c68f95cbb886fed31be394a4d1661694
Author: ziaafsha85 <ziyaafshamakandar@gmail.com>
Date:   Mon Sep 15 16:33:46 2025 +0530

    this is my first commit

cseds@DSLAB MINGW64 /d/myproject1 (master)
$ git show
commit 101342f67a9794eb6a3863528b75fc0e70caa9be (HEAD -> master)
Author: ziaafsha85 <ziyaafshamakandar@gmail.com>
Date:   Mon Sep 15 16:48:39 2025 +0530

    this is my second statment of program

diff --git a/program1.c b/program1.c
index 76eeff3..8d41f53 100644
--- a/program1.c
+++ b/program1.c
@@ -1 +1,2 @@
 this is my program 1 file
+this is second statment of program

cseds@DSLAB MINGW64 /d/myproject1 (master)
$


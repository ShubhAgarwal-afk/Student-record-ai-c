
Setting up environment for using MinGW with GCC from C:\TDM-GCC-64\.

C:\TDM-GCC-64>pwd
'pwd' is not recognized as an internal or external command,
operable program or batch file.

C:\TDM-GCC-64>cd ..

C:\>cd C_programming

C:\C_programming>cd 100 days of code

C:\C_programming\100 days of code>ls
'ls' is not recognized as an internal or external command,
operable program or batch file.

C:\C_programming\100 days of code>git add .
fatal: not a git repository (or any of the parent directories): .git

C:\C_programming\100 days of code>cd ..

C:\C_programming>git clone https://github.com/ShubhAgarwal-afk/100-days-of-code.git
Cloning into '100-days-of-code'...
remote: Enumerating objects: 12, done.
remote: Counting objects: 100% (12/12), done.
remote: Compressing objects: 100% (12/12), done.
remote: Total 12 (delta 4), reused 0 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (12/12), 245.03 KiB | 1.01 MiB/s, done.
Resolving deltas: 100% (4/4), done.

C:\C_programming>cd 100-days-of-code

C:\C_programming\100-days-of-code>git add .

C:\C_programming\100-days-of-code>git commit
Author identity unknown

*** Please tell me who you are.

Run

  git config --global user.email "you@example.com"
  git config --global user.name "Your Name"

to set your account's default identity.
Omit --global to set the identity only in this repository.

fatal: unable to auto-detect email address (got 'tarun@LAPTOP-16OJGFIJ.(none)')

C:\C_programming\100-days-of-code>git commit -m "push the code"
Author identity unknown

*** Please tell me who you are.

Run

  git config --global user.email "you@example.com"
  git config --global user.name "Your Name"

to set your account's default identity.
Omit --global to set the identity only in this repository.

fatal: unable to auto-detect email address (got 'tarun@LAPTOP-16OJGFIJ.(none)')

C:\C_programming\100-days-of-code>git config --global user.email "shubhagarwal4934@gmail.com"

C:\C_programming\100-days-of-code>git config --global user.name "Shubh Agarwal afk"

C:\C_programming\100-days-of-code>git commit -m "push the code"
[main 833a1c5] push the code
 47 files changed, 606 insertions(+)
 create mode 100644 10.c
 create mode 100644 10.exe
 create mode 100644 11.c
 create mode 100644 12.c
 create mode 100644 13.c
 create mode 100644 14.c
 create mode 100644 14.exe
 create mode 100644 16.c
 create mode 100644 17.c
 create mode 100644 17.exe
 create mode 100644 18.c
 create mode 100644 19.c
 create mode 100644 19.exe
 create mode 100644 20.c
 create mode 100644 21.c
 create mode 100644 22.c
 create mode 100644 22.exe
 create mode 100644 23.c
 create mode 100644 24.c
 create mode 100644 25.c
 create mode 100644 26.c
 create mode 100644 26.exe
 create mode 100644 27.c
 create mode 100644 27.exe
 create mode 100644 28.c
 create mode 100644 28.exe
 create mode 100644 29.c
 create mode 100644 29.exe
 create mode 100644 30.c
 create mode 100644 31.c
 create mode 100644 34.c
 create mode 100644 35.c
 create mode 100644 35.exe
 create mode 100644 36.c
 create mode 100644 36.exe
 create mode 100644 42.c
 create mode 100644 42.exe
 create mode 100644 5.c
 create mode 100644 5.exe
 create mode 100644 6.c
 create mode 100644 6.exe
 create mode 100644 7.c
 create mode 100644 7.exe
 create mode 100644 8.c
 create mode 100644 8.exe
 create mode 100644 9.c
 create mode 100644 9.exe

C:\C_programming\100-days-of-code>git config --global user.name "ShubhAgarwal-afk"

C:\C_programming\100-days-of-code>git commit -m "push the code"
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean

C:\C_programming\100-days-of-code>git push
info: please complete authentication in your browser...
Enumerating objects: 50, done.
Counting objects: 100% (50/50), done.
Delta compression using up to 8 threads
Compressing objects: 100% (49/49), done.
Writing objects: 100% (49/49), 524.29 KiB | 1.74 MiB/s, done.
Total 49 (delta 18), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (18/18), done.
To https://github.com/ShubhAgarwal-afk/100-days-of-code.git
   6b8311f..833a1c5  main -> main

C:\C_programming\100-days-of-code>git push
Everything up-to-date

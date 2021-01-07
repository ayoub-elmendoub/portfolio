# Basic linux commands

- [man](#man)

- [ls](#ls)

- [pwd](#pwd)

- [cd](#cd)

- [practice](#practice)


## man

### Stands for manual,used to show you the manual of a command

- *man*

- *man ls*
    + Navigating the man pages
        
    
        <pre>"space" Go forword one window.</pre>
        <pre>"enter" Go forword one line.</pre>

        <pre>G"b" Go backword one window.</pre>

        <pre>"/" Search for something in the man.
        Eg./space : search for "space" in man</pre>

        <pre>"n" Repeat previous search,"next".</pre>

        <pre>"q" Exit the man page</pre>
        </br>

    * *manls*
        <pre>This command will not work because "manls" deferent than "man ls"</pre>
        </br>

    * *man 3 ls*
        <pre>This also will not work because "man 3" used to store <em>C Standard library</em></pre>
        </br>

## ls

### Used to list the content of a directory (files & directories)

- *ls* 
    <pre>List the content of the current directory</pre>
- *ls -l*
    <pre>Show more details,like permissions & size</pre>
- *ls -h*
    <pre>Make the result human readable but not in this case we need to combined it with -l and -s, print sizes like 1K 234M 2G etc.</pre>
- *ls -l -h* ....vs.... *ls -lh*
    <pre>This two commands are the same, because -h & -l can be combined into one option -lh</pre>
- *ls -lct*
    <pre>List the content sorted by the last time of modification</pre>
- *ls -a*
    <pre>Show the hidden content as well</pre>     
- *ls /etc/*
    <pre>List the content of /etc directory
    - /etc: contains system configuration</pre> 
- *lsusb*
    <pre> List informations about USB buses in the system and the devices connected to them. /pre>  
- *ls --color*
    <pre>
    --color=auto : give each file type deferent color
    --color=never : this is the default(show all file types with the same color)</pre>            

## pwd

### Print the Working Directory (print the full path of where you are)

## cd

### Change the Directory (cd PATH)
- *cd* *"or"* *cd ~* 
    <pre>Go to user home directory</pre>   
- *cd /*
    <pre>Go to root directory</pre>   
- *pwd*
    <pre>this will print "/" beacause we are in the root directory</pre> 
- *cd ..*
    <pre>Go back one level up from the current directory</pre> 
- *cd /usr/bin*
    <pre>
    Go to /usr/bin directory
    - /usr/bin: contains most of the executable files</pre> 
- *cd -*
    <pre>Change to the previous working directory & the writes its name</pre>
## Practice
- Setting up a new user to practice in a clear environment
```
    $ sudo useradd coco
    $ su - coco
```
- 10. Return to the User directory, create a new direc
tory using the command 
"mkdir", delete this directory with "rmdir" then return to the root directory.
```
    $ cd
    $ mkdir myDir
    $ rmdir myDir
    $ cd /
```
- 11. Create the directory again in the same location without changing the current directory 
(until further notice). 
```
    $ mkdir ~/myDir
```
- 12. Create a file with the “touch” command in the user folder. 
```
    $ touch ~/myFile
```
- 13. Copy the file to the directory previously created using the "cp" command, 
then delete the original file using the "rm" command. 
```
    $ cp ~/myFile ~/myDir/myFile
    $ rm ~/myFile
```
- 14. Move the remaining copy to the user directory using "mv", move
now to the directory you created and bring the file back there again.
```
    $ mv ~/myDir/myFile ~
    $ cd ~/myDir
    $ mv ../ .
```
- 15. Make a copy of your directory and its file, in a new directory, using
of "cp" using the appropriate option, what do you notice?
```
    Running just "cp" will not work for copying directories,
    We need to add "-r" option.
        $ cp -r . ../myDir2
```
- 16. Again make a copy of the source directory and its contents inside the last
directory created.
```
    $ cp -r . ../myDir2/myDir3
```
- 17. Create a symbolic link (shortcut) of the file with the longest tree structure to
the first directory with the command "ln", then delete everything with a single command
without asking for confirmation
``` 
    $ cd ; tree

    $ ln -s myDir/myDir2/myDir3/myFile .

    $ rm -r ~/*
```
- 18. Create a text file containing a few lines without having to use an editor using the
command "cat> file" use the Ctrl-C combination to terminate
```
    $ cat > myFile 
```
- 19. Display the contents of the file using the "cat" command while numbering the files.
lines.
```
    $ cat -n myFile
```
- 20. Display myFile page by page by concatenating the empty lines without breaking the lines
long using "more"
```
    $ more -s myFile
```
- 21. Display your file page by page with a long prompt (display of the percentage of
browsed file) by displaying special characters without filling empty lines with ~
using "less"
    *  First methode
```
    $ grep '\S' jj | cat -e | less -M +Gg
```
*  Secound methode

```
    $ awk NF jj | cat -e | less -M +Gg
```
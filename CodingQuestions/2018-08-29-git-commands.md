---
layout: post
category: blog_tech
title: Useful Git Commands
tags: [tech, git, cmd]

---

This blog is basically a cheatsheet of cmd prompt and Git commands. For a more thorough instruction, please go to the [Git Basics](https://git-scm.com/book/en/v2/Git-Basics-Recording-Changes-to-the-Repository) page.


### Directory
```
cd // goes to default folder
cd .. // goes up one folder
cd dir1/subdir3/subsubdir2 // goes to designated folder
pwd // show path of current folder
ls // show contents of current folder
cd 
```

### Virtual Environment
```
python -m virtualenv <env_name>
virtualenv <env_name> // create a virtual environment under the current folder
source <env_name>/Scripts/activate // enter a virtual environment
```

### Python
```cpp
winpty python // activate a Python environment
>>> quit() // quit the current Python environment
export PYTHONPATH=/c/dir1/subdir3/subsubdir2 // "import" Python files in a folder
```

## Git
_Create or clone a repository_
```cpp
git init // creat a repo
git clone <url> // clone a repo
git clone <url> myRepoName // clone a repo and give a local name
```

_Check, Stage and Commit_
```cpp
git status // check what tracked files are modified, untracked files (are created),
           // and if they are staged
git status -s // or --short, show a shorter status summary

echo "My Project" > README // create a file
git add README // stage a file or directory
git add . // stage everything under current directory

git stash //archive changes
git stash pop // recover archived changes

git commit -m "Commit message" // commit to repo
/* first time only */
git remote add origin <remote repository URL> // Sets the new remote
git remote -v // Verifies the new remote URL
/* first time only */
git push origin master // push to Github
```

```cpp
bash -c "python code.py > out.txt" // use this when stdout is not working

```

_Get Newest Version from repo_
```cpp
git fetch origin
git status
git add .
git commit -m ‘Commit msg’
git pull
// will report error like : Pull is not possible
// because you have unmerged files.
// Now fix conflicts and run below
git add .
git commit -m ‘Fix conflicts’
git pull
// Already up-to-date
```

still editing...



Reference
> [Adding an existing project to GitHub using the command line](https://help.github.com/articles/adding-an-existing-project-to-github-using-the-command-line/)  
> [git: How do I get the latest version of my code?](https://stackoverflow.com/questions/6335681/git-how-do-i-get-the-latest-version-of-my-code)


<form>
<input type="button" value="Return to blogs" onclick="window.location.href='{{site.url}}/blog_indices/index_tech'">
</form>

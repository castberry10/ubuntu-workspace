#!/bin/bash

grepstring= grep "${LOGNAME}" /etc/sudoers 

if [ -n "$1" ]
then 
    if [ "$1" = '-h' || "$1" = '--help' ]  
    then
        echo "usage: $0 [option]"
        echo "-h  --help         print this usage and exit"
    else
        echo "$0: invalid option -- '$1'"
        echo "usage: $0 [option]"
        echo "-h  --help         print this usage and exit"
    fi
else
    if [ "1" == "1" ]
    then
        echo "you're one of sudoers"
        echo "${grepstring}"
    else 
        echo "you're NOT one of sudoer"
    fi
fi

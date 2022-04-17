#!/bin/bash

#grepstring= grep "${LOGNAME}" /etc/sudoers 
helpstring(){
    echo "usage: $0 [option]"
    echo "-h  --help            print this usage and exit"
}

while getopts h opt;do
        case $opt in 
        h) helpstring
            exit 0;;
        
        --help) 
            helpstring
            exit 0;;

        \*)  echo "$0: invalid option -- '$1'"
            helpstring
            exit 1;;
        esac    
done

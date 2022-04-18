#!/bin/bash

#grepstring= grep "${LOGNAME}" /etc/sudoers 
helpstring(){
    echo "usage: $0 [option]"
    echo "-h  --help            print this usage and exit"
}

OPT_BOOL=False
while (("$#")); do
        case "$1" in 
                -h|--help)
                    helpstring
                    exit 0;;
                *|-*|--*)
                    "$0: invalid option -- '$1'"
                    helpstring
                    exit 1;;
        esac
done




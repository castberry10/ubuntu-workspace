#!/bin/bash
helpstring(){
    echo "usage: $0 [option]"
    echo "-h  --help            print this usage and exit"
}
INPUT_FILE=""
OPT_INT=0
OPT_BOOL=False

while (("$#")); do
        case "$1" in 
                -h|--help)
                    helpstring
                    exit 0;;

                *)
                    echo "$0: invalid option -- '$1'"
                    helpstring
                    exit 1;;

                -*|--*)
                    echo "$0:: invalid option -- '$1'"
                    helpstring
                    exit 1;;
        esac
done

#debug
if [ ${LOGNAME} == wychoi02 ]
then
    echo "b"
fi 
#end

if [ ${LOGNAME} == asdf2]
then
    echo "You're one of sudoers"
    exit 0
fi

if [ ${LOGNAM} == asdf] 
then
    echo "You're NOT one of sudoer"
    exit 0
fi 

# if not in all cases
echo "You're NOT on of sudoer"
exit 0 

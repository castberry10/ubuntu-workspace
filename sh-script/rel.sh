#!/bin/bash
if [ $# -eq 1 ] || [ $# -eq 2 ] || [ $# -gt 3 ]
then
        echo "[Error] Insufficient number of arguments"
        echo "USAGE: $ $0 operand1 operator oprand2"

elif [ $2 == "==" ]
then
        if [ $1 -eq $3 ]
        then
                echo "TRUE"
        else
                echo "FALSE"
        fi
elif [ $2 == "!=" ]
then
        if [ $1 -ne $3 ]
        then
                echo "TRUE"
        else
                echo "FALSE"
        fi

else
        echo "not valid operater"
fi

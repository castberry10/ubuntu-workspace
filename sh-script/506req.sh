#!/bin/bash
error(){
        echo "[Error] Insufficient number of arguments"
        echo "USAGE: $ $0 operand1 operator operand2"
}
addition(){
        re=`expr $1 + $2`
        echo $re
}
subtraction(){
        re=`expr $1 - $2`
        echo $re
}
multiplication(){
        re=`expr $1 \* $2`
        echo $re
}
division(){
        re=`expr $1 / $2`
        echo $re
}
modulo(){
        re=`expr $1 % $2`  
        echo $re
}

if [ $# -ne 3 ]
then
        error 
elif [ $2 == "+" ] 
then
        addition $1 $3
elif [ $2 == "-" ]
then
        subtraction $1 $3

elif [ $2 == "x" ]
then
        multiplication $1 $3

elif [ $2 == "/" ]
then
        division $1 $3

elif [ $2 == "%" ]
then
        modulo $1 $3
else
        error
fi

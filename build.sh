#/bin/sh

UNDO=0

for i in "$@"
do
case $i in
    -u)
    UNDO=1
    ;;
    *)
        # unknown option
    ;;
esac
done


BASH_FILE=".bashrc"
if [[ "$OSTYPE" == "darwin"* ]]; then
    BASH_FILE=".bash_profile"
fi


if [ $UNDO -eq 1 ]; then
    echo "Revert .bashrc to original state before build, check .bashrc.newbak if you have made other changes after build."
	cp ~/$BASH_FILE $BASH_FILE.newbak
    cp $BASH_FILE.bak ~/$BASH_FILE 
    source ~/$BASH_FILE

    rm -rf ~/Templates/c_template
    rm -rf ~/Templates/cpp_template
    rm -rf ~/Templates/python_template
    rm -rf ~/Templates/java_template
else
	cp ~/$BASH_FILE $BASH_FILE.bak
	cat bashrc.sh >> ~/$BASH_FILE
    source ~/$BASH_FILE

    mkdir ~/Templates
    cp -r c_template ~/Templates
    cp -r cpp_template ~/Templates
    cp -r python_template ~/Templates
    cp -r java_template ~/Templates

fi


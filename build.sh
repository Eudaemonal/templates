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

if [ $UNDO -eq 1 ]; then
    echo "Revert .bashrc to original state before build, check .bashrc.newbak if you have made other changes after build."
	cp ~/.bashrc .bashrc.newbak
    cp .bashrc.bak ~/.bashrc
    source ~/.bashrc

    rm -rf ~/Templates/c_template
    rm -rf ~/Templates/cpp_template
    rm -rf ~/Templates/python_template
else
	cp ~/.bashrc .bashrc.bak
	cat bashrc.sh >> ~/.bashrc
    source ~/.bashrc

    mkdir ~/Templates
    cp -r c_template ~/Templates
    cp -r cpp_template ~/Templates
    cp -r python_template ~/Templates
fi


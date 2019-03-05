

# new template projects
newCProj(){
    cp -r ~/Templates/c_template .
    mv c_template $1
    cd $1
    gvim test01.c
}
alias mkc=newCProj

newCppProj(){
if [ $1 = "-1dv" ]; then
	echo "Create cpp 1D vector"
	cp -r ~/Templates/cpp_template/cpp_template_1dv .
	mv cpp_template_1dv $2
	cd $2
	gvim *.cpp *.txt

elif [ $1 = "-2dv" ]; then
	echo "Create cpp 2D vector"
	cp -r ~/Templates/cpp_template/cpp_template_2dv .
	mv cpp_template_2dv $2
	cd $2
	gvim *.cpp *.txt

elif [ $1 = "-ll" ]; then
	echo "Create cpp LinkedList"
	cp -r ~/Templates/cpp_template/cpp_template_ll .
	mv cpp_template_ll $2
	cd $2
	gvim *.cpp *.txt

elif [ $1 = "-bst" ]; then
	echo "Create cpp btree"
	cp -r ~/Templates/cpp_template/cpp_template_bst .
	mv cpp_template_bst $2
	cd $2
	gvim *.cpp *.txt

elif [ $1 = "-gp" ]; then
	echo "Create cpp graph"
	cp -r ~/Templates/cpp_template/cpp_template_bst .
	mv cpp_template_bst $2
	cd $2
	gvim *.cpp *.txt

else
	echo "Create cpp Project"
	cp -r ~/Templates/cpp_template/cpp_template_proj .
	mv cpp_template_proj $1
	cd $1
	gvim *.cpp *.txt
fi
}
alias mkcpp=newCppProj


newPythonProj(){
    cp -r ~/Templates/python_template .
    mv python_template $1
    cd $1
    gvim *.py *.txt
}
alias mkpy=newPythonProj


newJavaProj(){
    cp -r ~/Templates/java_template .
    mv java_template $1
    cd $1
    gvim *.java *.txt
}
alias mkja=newJavaProj


JFLAGS = -g
JC = javac
JVM= java 
FILE=

.SUFFIXES: .java .class

.java.class:
	$(JC) $(JFLAGS) $*.java

CLASSES = \
        Test01.java \

MAIN = Test01 
default: classes

classes: $(CLASSES:.java=.class)

run: $(MAIN).class
	$(JVM) $(MAIN)

clean:
	$(RM) *.class


# run the program as: java Test01 < input01.txt

b: 
	gcc -g -Wall -Wextra -pedantic -Werror $(f).c -o $(f).out 

br: 
	make b f=$(f)
	./$(f).out

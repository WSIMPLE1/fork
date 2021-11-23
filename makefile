src=$(wildcard *.c)
spa=$(patsubst %.c,%, $(src))

ALL:$(spa)
%:%.c
	gcc $< -o$@	
clear:
	-rm-rf$(spa)

.PHONY:clear ALL





















 

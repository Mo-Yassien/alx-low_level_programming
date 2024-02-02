section .data
	hello db "Hello, Holberton", 0xa

section .text
	global main

main:
	; Call printf
	mov rdi, hello
	call printf

	; Exit the program
	mov rdi, 0
	call exit


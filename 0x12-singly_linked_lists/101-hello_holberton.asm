section .data
	msg db "Hello, Holberton", 0xa, 0

section .text
	extern printf
	global main

main:
	mov eax, 0
	mov edi, msg
	call printf


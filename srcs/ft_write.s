section.text:
	global ft_write
	extern error
; rdi rsi rdx arg 1 2 3
ft_write:
	mov rax, 1
	syscall
	mov eax, 1
	call error
	ret

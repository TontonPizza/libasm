section.text:
	global ft_read
	extern error

ft_read:
	mov rax, 0
	syscall
	ret

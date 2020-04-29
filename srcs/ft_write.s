section.text:
	global ft_write
	extern error
; rdi rsi rdx arg 1 2 3
ft_write:
	mov rax, 1
	syscall
	; si rax est négatif, -rax est le code d'erreur
	; si rax est positif, le code d'erreur est zero²
	ret

section.text:
	global ft_strcmp

ft_strcmp:
	push rcx
	mov rcx, 0x0
	compare:
		mov byte dl, [rdi + rcx]
		cmp byte dl, [rsi + rcx]
			jg positive
			jb negative
		cmp byte dl, 0x0
			je zero
			inc rcx
			jmp compare
	positive:
		mov rax, 1
		pop rcx
		ret
	negative:
		mov rax, -1
		pop rcx
		ret
	zero:
		mov rax, 0
		pop rcx
		ret
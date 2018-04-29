
section	.text
	global	_ft_isdigit

_ft_isdigit:
	mov			rax, 0
	cmp			rdi, 48
	js			nok
	cmp			rdi, 58
	js			ok	
		
nok:
	ret

ok:
	mov			rax, 1
	ret

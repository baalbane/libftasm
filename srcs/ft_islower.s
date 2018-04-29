
section	.text
	global	_ft_islower

_ft_islower:
	mov			rax, 0
	cmp			rdi, 97
	js			nok
	cmp			rdi, 123
	js			ok	
		
nok:
	ret

ok:
	mov			rax, 1
	ret

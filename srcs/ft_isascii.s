
section	.text
	global	_ft_isascii

_ft_isascii:
	mov			rax, 0
	cmp			rdi, 0
	js			nok
	cmp			rdi, 128
	js			ok	
		
nok:
	ret

ok:
	mov			rax, 1
	ret

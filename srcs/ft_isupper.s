
section	.text
	global	_ft_isupper

_ft_isupper:
	mov			rax, 0
	cmp			rdi, 65
	js			nok
	cmp			rdi, 91
	js			ok	
		
nok:
	ret

ok:
	mov			rax, 1
	ret

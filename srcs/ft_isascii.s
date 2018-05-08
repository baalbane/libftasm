
section	.text
	global	_ft_isascii

_ft_isascii:
	mov			rax, 0
	;xor			rdi, dil
	mov			dil, 0
	cmp			rdi, 0
	jnz			nok
	mov			rax, 1
		
nok:
	ret


_ft_isascii2:
	mov			rax, 0
	cmp			rdi, 0
	jl			nok
	cmp			rdi, 128
	jg			nok
	mov			rax, 1	

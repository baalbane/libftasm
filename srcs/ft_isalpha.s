
section	.text
	global	_ft_isalpha
	extern	_ft_isupper
	extern	_ft_islower
	
_ft_isalpha:
	sub			rsp, 8
	call		_ft_isupper
	cmp			rax, 1
	jz			ok
	call		_ft_islower

ok:
	add			rsp, 8
	ret

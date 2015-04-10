	.file	"crt1.c"
	.text
	.globl	_start
	.type	_start, @function
_start:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, -12(%rbp)
#APP
# 11 "crt1.c" 1
	mov %rsp, %rax
# 0 "" 2
#NO_APP
	movq	%rax, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_start, .-_start
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits

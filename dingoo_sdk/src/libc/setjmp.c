#include "setjmp.h"

#ifdef MPU_JZ4740
int setjmp(jmp_buf env) {
	asm (
		"sw  $2,   4(%0);"
		"sw  $3,   8(%0);"
		"sw  $4,  12(%0);"
		"sw  $5,  16(%0);"
		"sw  $6,  20(%0);"
		"sw  $7,  24(%0);"
		"sw  $8,  28(%0);"
		"sw  $9,  32(%0);"
		"sw $10,  36(%0);"
		"sw $11,  40(%0);"
		"sw $12,  44(%0);"
		"sw $13,  48(%0);"
		"sw $14,  52(%0);"
		"sw $15,  56(%0);"
		"sw $16,  60(%0);"
		"sw $17,  64(%0);"
		"sw $18,  68(%0);"
		"sw $19,  72(%0);"
		"sw $20,  76(%0);"
		"sw $21,  80(%0);"
		"sw $22,  84(%0);"
		"sw $23,  88(%0);"
		"sw $24,  92(%0);"
		"sw $25,  96(%0);"
		"sw $26, 100(%0);"
		"sw $27, 104(%0);"
		"sw $28, 108(%0);"
		"sw $29, 112(%0);"
		"sw $30, 116(%0);"
		"sw $31, 120(%0)"
		: : "r"((uintptr_t*)env)
		);
	return 0;
}

void longjmp(jmp_buf env, int value) {
	asm (
		"or  $2, $0, %1;"
		"lw  $3,   8(%0);"
		"lw  $4,  12(%0);"
		"lw  $5,  16(%0);"
		"lw  $6,  20(%0);"
		"lw  $7,  24(%0);"
		"lw  $8,  28(%0);"
		"lw  $9,  32(%0);"
		"lw $10,  36(%0);"
		"lw $11,  40(%0);"
		"lw $12,  44(%0);"
		"lw $13,  48(%0);"
		"lw $14,  52(%0);"
		"lw $15,  56(%0);"
		"lw $16,  60(%0);"
		"lw $17,  64(%0);"
		"lw $18,  68(%0);"
		"lw $19,  72(%0);"
		"lw $20,  76(%0);"
		"lw $21,  80(%0);"
		"lw $22,  84(%0);"
		"lw $23,  88(%0);"
		"lw $24,  92(%0);"
		"lw $25,  96(%0);"
		"lw $26, 100(%0);"
		"lw $27, 104(%0);"
		"lw $28, 108(%0);"
		"lw $29, 112(%0);"
		"lw $30, 116(%0);"
		"lw $31, 120(%0);"
		"jr $ra;"
		"nop"
		: : "r"((uintptr_t*)env), "r"(value)
		);
}
#endif

#ifdef MPU_CC1800
int setjmp(jmp_buf env) {
	asm (
		"stmia   r0, {r4, r5, r6, r7, r8, r9, r10, fp, sp, lr};"
		"mov     r0, #0;"
        "mov     pc, lr;"
		);
}

void longjmp(jmp_buf env, int value) {
	asm (
		"ldmia   r0, {r4, r5, r6, r7, r8, r9, r10, fp, sp, lr};"
        "mov     r0, r1;"
        "mov     pc, lr;"
		);
}
#endif

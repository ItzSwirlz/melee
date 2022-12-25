.include "macros.inc"

.section .text

.global PADClamp
PADClamp:
/* 8034CC80 00349860  7C 08 02 A6 */	mflr r0
/* 8034CC84 00349864  90 01 00 04 */	stw r0, 4(r1)
/* 8034CC88 00349868  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8034CC8C 0034986C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8034CC90 00349870  3B E0 00 00 */	li r31, 0
/* 8034CC94 00349874  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8034CC98 00349878  3B C3 00 00 */	addi r30, r3, 0
/* 8034CC9C 0034987C  93 A1 00 14 */	stw r29, 0x14(r1)
lbl_8034CCA0:
/* 8034CCA0 00349880  88 1E 00 0A */	lbz r0, 0xa(r30)
/* 8034CCA4 00349884  7C 00 07 75 */	extsb. r0, r0
/* 8034CCA8 00349888  40 82 00 B4 */	bne lbl_8034CD5C
/* 8034CCAC 0034988C  3B AD A5 90 */	addi r29, r13, ClampRegion@sda21
/* 8034CCB0 00349890  88 BD 00 03 */	lbz r5, 3(r29)
/* 8034CCB4 00349894  38 7E 00 02 */	addi r3, r30, 2
/* 8034CCB8 00349898  88 DD 00 04 */	lbz r6, 4(r29)
/* 8034CCBC 0034989C  38 9E 00 03 */	addi r4, r30, 3
/* 8034CCC0 003498A0  88 FD 00 02 */	lbz r7, 2(r29)
/* 8034CCC4 003498A4  4B FF FE 8D */	bl ClampStick
/* 8034CCC8 003498A8  88 BD 00 06 */	lbz r5, 6(r29)
/* 8034CCCC 003498AC  38 7E 00 04 */	addi r3, r30, 4
/* 8034CCD0 003498B0  88 DD 00 07 */	lbz r6, 7(r29)
/* 8034CCD4 003498B4  38 9E 00 05 */	addi r4, r30, 5
/* 8034CCD8 003498B8  88 FD 00 05 */	lbz r7, 5(r29)
/* 8034CCDC 003498BC  4B FF FE 75 */	bl ClampStick
/* 8034CCE0 003498C0  88 7E 00 06 */	lbz r3, 6(r30)
/* 8034CCE4 003498C4  88 0D A5 90 */	lbz r0, ClampRegion@sda21(r13)
/* 8034CCE8 003498C8  7C 03 00 40 */	cmplw r3, r0
/* 8034CCEC 003498CC  41 81 00 10 */	bgt lbl_8034CCFC
/* 8034CCF0 003498D0  38 00 00 00 */	li r0, 0
/* 8034CCF4 003498D4  98 1E 00 06 */	stb r0, 6(r30)
/* 8034CCF8 003498D8  48 00 00 24 */	b lbl_8034CD1C
lbl_8034CCFC:
/* 8034CCFC 003498DC  88 1D 00 01 */	lbz r0, 1(r29)
/* 8034CD00 003498E0  7C 00 18 40 */	cmplw r0, r3
/* 8034CD04 003498E4  40 80 00 08 */	bge lbl_8034CD0C
/* 8034CD08 003498E8  98 1E 00 06 */	stb r0, 6(r30)
lbl_8034CD0C:
/* 8034CD0C 003498EC  88 6D A5 90 */	lbz r3, ClampRegion@sda21(r13)
/* 8034CD10 003498F0  88 1E 00 06 */	lbz r0, 6(r30)
/* 8034CD14 003498F4  7C 03 00 50 */	subf r0, r3, r0
/* 8034CD18 003498F8  98 1E 00 06 */	stb r0, 6(r30)
lbl_8034CD1C:
/* 8034CD1C 003498FC  88 9E 00 07 */	lbz r4, 7(r30)
/* 8034CD20 00349900  88 0D A5 90 */	lbz r0, ClampRegion@sda21(r13)
/* 8034CD24 00349904  7C 04 00 40 */	cmplw r4, r0
/* 8034CD28 00349908  41 81 00 10 */	bgt lbl_8034CD38
/* 8034CD2C 0034990C  38 00 00 00 */	li r0, 0
/* 8034CD30 00349910  98 1E 00 07 */	stb r0, 7(r30)
/* 8034CD34 00349914  48 00 00 28 */	b lbl_8034CD5C
lbl_8034CD38:
/* 8034CD38 00349918  38 6D A5 90 */	addi r3, r13, ClampRegion@sda21
/* 8034CD3C 0034991C  88 03 00 01 */	lbz r0, 1(r3)
/* 8034CD40 00349920  7C 00 20 40 */	cmplw r0, r4
/* 8034CD44 00349924  40 80 00 08 */	bge lbl_8034CD4C
/* 8034CD48 00349928  98 1E 00 07 */	stb r0, 7(r30)
lbl_8034CD4C:
/* 8034CD4C 0034992C  88 6D A5 90 */	lbz r3, ClampRegion@sda21(r13)
/* 8034CD50 00349930  88 1E 00 07 */	lbz r0, 7(r30)
/* 8034CD54 00349934  7C 03 00 50 */	subf r0, r3, r0
/* 8034CD58 00349938  98 1E 00 07 */	stb r0, 7(r30)
lbl_8034CD5C:
/* 8034CD5C 0034993C  3B FF 00 01 */	addi r31, r31, 1
/* 8034CD60 00349940  2C 1F 00 04 */	cmpwi r31, 4
/* 8034CD64 00349944  3B DE 00 0C */	addi r30, r30, 0xc
/* 8034CD68 00349948  41 80 FF 38 */	blt lbl_8034CCA0
/* 8034CD6C 0034994C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8034CD70 00349950  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8034CD74 00349954  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8034CD78 00349958  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8034CD7C 0034995C  38 21 00 20 */	addi r1, r1, 0x20
/* 8034CD80 00349960  7C 08 03 A6 */	mtlr r0
/* 8034CD84 00349964  4E 80 00 20 */	blr 

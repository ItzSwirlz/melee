.include "macros.inc"

.section .text  # 0x80005940 - 0x803B7240

.global lbl_8038815C
lbl_8038815C:
/* 8038815C 00384D3C  7C 08 02 A6 */	mflr r0
/* 80388160 00384D40  90 01 00 04 */	stw r0, 4(r1)
/* 80388164 00384D44  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 80388168 00384D48  93 E1 00 24 */	stw r31, 0x24(r1)
/* 8038816C 00384D4C  93 C1 00 20 */	stw r30, 0x20(r1)
/* 80388170 00384D50  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 80388174 00384D54  93 81 00 18 */	stw r28, 0x18(r1)
/* 80388178 00384D58  7C 7C 1B 78 */	mr r28, r3
/* 8038817C 00384D5C  7C 9D 23 78 */	mr r29, r4
/* 80388180 00384D60  7C BE 2B 78 */	mr r30, r5
/* 80388184 00384D64  7C DF 33 78 */	mr r31, r6
/* 80388188 00384D68  81 8D C0 70 */	lwz r12, lbl_804D7710@sda21(r13)
/* 8038818C 00384D6C  28 0C 00 00 */	cmplwi r12, 0
/* 80388190 00384D70  41 82 00 14 */	beq lbl_803881A4
/* 80388194 00384D74  80 9E 00 00 */	lwz r4, 0(r30)
/* 80388198 00384D78  7F A3 EB 78 */	mr r3, r29
/* 8038819C 00384D7C  7D 88 03 A6 */	mtlr r12
/* 803881A0 00384D80  4E 80 00 21 */	blrl 
lbl_803881A4:
/* 803881A4 00384D84  81 8D C0 78 */	lwz r12, lbl_804D7718@sda21(r13)
/* 803881A8 00384D88  7F 83 E3 78 */	mr r3, r28
/* 803881AC 00384D8C  7F A4 EB 78 */	mr r4, r29
/* 803881B0 00384D90  7F C5 F3 78 */	mr r5, r30
/* 803881B4 00384D94  7F E6 FB 78 */	mr r6, r31
/* 803881B8 00384D98  7D 88 03 A6 */	mtlr r12
/* 803881BC 00384D9C  4E 80 00 21 */	blrl 
/* 803881C0 00384DA0  38 60 00 00 */	li r3, 0
/* 803881C4 00384DA4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803881C8 00384DA8  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 803881CC 00384DAC  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 803881D0 00384DB0  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 803881D4 00384DB4  83 81 00 18 */	lwz r28, 0x18(r1)
/* 803881D8 00384DB8  38 21 00 28 */	addi r1, r1, 0x28
/* 803881DC 00384DBC  7C 08 03 A6 */	mtlr r0
/* 803881E0 00384DC0  4E 80 00 20 */	blr 

.global func_803881E4
func_803881E4:
/* 803881E4 00384DC4  80 0D C0 78 */	lwz r0, lbl_804D7718@sda21(r13)
/* 803881E8 00384DC8  28 00 00 00 */	cmplwi r0, 0
/* 803881EC 00384DCC  40 82 00 14 */	bne lbl_80388200
/* 803881F0 00384DD0  3C 60 80 40 */	lis r3, lbl_80400430@ha
/* 803881F4 00384DD4  38 63 04 30 */	addi r3, r3, lbl_80400430@l
/* 803881F8 00384DD8  80 03 00 84 */	lwz r0, 0x84(r3)
/* 803881FC 00384DDC  90 0D C0 78 */	stw r0, lbl_804D7718@sda21(r13)
lbl_80388200:
/* 80388200 00384DE0  3C 80 80 39 */	lis r4, lbl_8038815C@ha
/* 80388204 00384DE4  3C 60 80 40 */	lis r3, lbl_80400430@ha
/* 80388208 00384DE8  38 04 81 5C */	addi r0, r4, lbl_8038815C@l
/* 8038820C 00384DEC  38 63 04 30 */	addi r3, r3, lbl_80400430@l
/* 80388210 00384DF0  90 03 00 84 */	stw r0, 0x84(r3)
/* 80388214 00384DF4  38 00 00 00 */	li r0, 0
/* 80388218 00384DF8  98 03 00 52 */	stb r0, 0x52(r3)
/* 8038821C 00384DFC  4E 80 00 20 */	blr 

.global __assert
__assert:
/* 80388220 00384E00  7C 08 02 A6 */	mflr r0
/* 80388224 00384E04  90 01 00 04 */	stw r0, 4(r1)
/* 80388228 00384E08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8038822C 00384E0C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80388230 00384E10  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80388234 00384E14  7C 7E 1B 78 */	mr r30, r3
/* 80388238 00384E18  7C 9F 23 78 */	mr r31, r4
/* 8038823C 00384E1C  3C 60 80 40 */	lis r3, lbl_80407D60@ha
/* 80388240 00384E20  4C C6 31 82 */	crclr 6
/* 80388244 00384E24  38 63 7D 60 */	addi r3, r3, lbl_80407D60@l
/* 80388248 00384E28  7C A4 2B 78 */	mr r4, r5
/* 8038824C 00384E2C  4B FB D4 5D */	bl OSReport
/* 80388250 00384E30  7F C3 F3 78 */	mr r3, r30
/* 80388254 00384E34  7F E4 FB 78 */	mr r4, r31
/* 80388258 00384E38  38 AD A9 70 */	addi r5, r13, lbl_804D6010@sda21
/* 8038825C 00384E3C  48 00 00 1D */	bl HSD_Panic
/* 80388260 00384E40  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80388264 00384E44  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80388268 00384E48  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8038826C 00384E4C  38 21 00 20 */	addi r1, r1, 0x20
/* 80388270 00384E50  7C 08 03 A6 */	mtlr r0
/* 80388274 00384E54  4E 80 00 20 */	blr 

.global HSD_Panic
HSD_Panic:
/* 80388278 00384E58  7C 08 02 A6 */	mflr r0
/* 8038827C 00384E5C  90 01 00 04 */	stw r0, 4(r1)
/* 80388280 00384E60  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 80388284 00384E64  93 E1 00 24 */	stw r31, 0x24(r1)
/* 80388288 00384E68  93 C1 00 20 */	stw r30, 0x20(r1)
/* 8038828C 00384E6C  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 80388290 00384E70  93 81 00 18 */	stw r28, 0x18(r1)
/* 80388294 00384E74  7C 7C 1B 78 */	mr r28, r3
/* 80388298 00384E78  7C 9D 23 78 */	mr r29, r4
/* 8038829C 00384E7C  7C BE 2B 78 */	mr r30, r5
/* 803882A0 00384E80  80 0D C0 74 */	lwz r0, lbl_804D7714@sda21(r13)
/* 803882A4 00384E84  28 00 00 00 */	cmplwi r0, 0
/* 803882A8 00384E88  41 82 00 44 */	beq lbl_803882EC
/* 803882AC 00384E8C  3C 60 80 4C */	lis r3, lbl_804C2608@ha
/* 803882B0 00384E90  3B E3 26 08 */	addi r31, r3, lbl_804C2608@l
/* 803882B4 00384E94  7F E3 FB 78 */	mr r3, r31
/* 803882B8 00384E98  4B FB CE 3D */	bl OSSaveContext
/* 803882BC 00384E9C  3C 60 80 40 */	lis r3, lbl_80407D78@ha
/* 803882C0 00384EA0  4C C6 31 82 */	crclr 6
/* 803882C4 00384EA4  38 63 7D 78 */	addi r3, r3, lbl_80407D78@l
/* 803882C8 00384EA8  7F C4 F3 78 */	mr r4, r30
/* 803882CC 00384EAC  7F 85 E3 78 */	mr r5, r28
/* 803882D0 00384EB0  7F A6 EB 78 */	mr r6, r29
/* 803882D4 00384EB4  4B FB D3 D5 */	bl OSReport
/* 803882D8 00384EB8  81 8D C0 74 */	lwz r12, lbl_804D7714@sda21(r13)
/* 803882DC 00384EBC  7F E3 FB 78 */	mr r3, r31
/* 803882E0 00384EC0  4C C6 31 82 */	crclr 6
/* 803882E4 00384EC4  7D 88 03 A6 */	mtlr r12
/* 803882E8 00384EC8  4E 80 00 21 */	blrl 
lbl_803882EC:
/* 803882EC 00384ECC  7F 83 E3 78 */	mr r3, r28
/* 803882F0 00384ED0  4C C6 31 82 */	crclr 6
/* 803882F4 00384ED4  7F A4 EB 78 */	mr r4, r29
/* 803882F8 00384ED8  7F C5 F3 78 */	mr r5, r30
/* 803882FC 00384EDC  4B FB D4 2D */	bl OSPanic
/* 80388300 00384EE0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80388304 00384EE4  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 80388308 00384EE8  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 8038830C 00384EEC  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 80388310 00384EF0  83 81 00 18 */	lwz r28, 0x18(r1)
/* 80388314 00384EF4  38 21 00 28 */	addi r1, r1, 0x28
/* 80388318 00384EF8  7C 08 03 A6 */	mtlr r0
/* 8038831C 00384EFC  4E 80 00 20 */	blr 


.section .data
    .balign 8
.global lbl_80407D60
lbl_80407D60:
    .asciz "assertion \"%s\" failed"
    .balign 4
.global lbl_80407D78
lbl_80407D78:
    .asciz "%s in %s on line %d.\n"
    .balign 4


.section .bss, "wa"

.global lbl_804C2608
lbl_804C2608:
	.skip 0x2D8


.section .sdata

.global lbl_804D6010
lbl_804D6010:
    .4byte 0x00000000
    .4byte 0x00000000

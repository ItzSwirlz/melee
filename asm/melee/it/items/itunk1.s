.include "macros.inc"

.section .text

.global it_802ADA1C
it_802ADA1C:
/* 802ADA1C 002AA5FC  7C 08 02 A6 */	mflr r0
/* 802ADA20 002AA600  38 E0 00 00 */	li r7, 0
/* 802ADA24 002AA604  90 01 00 04 */	stw r0, 4(r1)
/* 802ADA28 002AA608  38 00 00 34 */	li r0, 0x34
/* 802ADA2C 002AA60C  38 A0 00 01 */	li r5, 1
/* 802ADA30 002AA610  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802ADA34 002AA614  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802ADA38 002AA618  90 01 00 24 */	stw r0, 0x24(r1)
/* 802ADA3C 002AA61C  80 C3 00 00 */	lwz r6, 0(r3)
/* 802ADA40 002AA620  80 03 00 04 */	lwz r0, 4(r3)
/* 802ADA44 002AA624  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 802ADA48 002AA628  90 01 00 40 */	stw r0, 0x40(r1)
/* 802ADA4C 002AA62C  80 03 00 08 */	lwz r0, 8(r3)
/* 802ADA50 002AA630  38 61 00 1C */	addi r3, r1, 0x1c
/* 802ADA54 002AA634  90 01 00 44 */	stw r0, 0x44(r1)
/* 802ADA58 002AA638  C0 02 D5 48 */	lfs f0, it_804DCF28@sda21(r2)
/* 802ADA5C 002AA63C  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 802ADA60 002AA640  80 C1 00 3C */	lwz r6, 0x3c(r1)
/* 802ADA64 002AA644  80 01 00 40 */	lwz r0, 0x40(r1)
/* 802ADA68 002AA648  90 C1 00 30 */	stw r6, 0x30(r1)
/* 802ADA6C 002AA64C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802ADA70 002AA650  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802ADA74 002AA654  90 01 00 38 */	stw r0, 0x38(r1)
/* 802ADA78 002AA658  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802ADA7C 002AA65C  B0 E1 00 58 */	sth r7, 0x58(r1)
/* 802ADA80 002AA660  80 C4 00 00 */	lwz r6, 0(r4)
/* 802ADA84 002AA664  80 04 00 04 */	lwz r0, 4(r4)
/* 802ADA88 002AA668  90 C1 00 48 */	stw r6, 0x48(r1)
/* 802ADA8C 002AA66C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 802ADA90 002AA670  80 04 00 08 */	lwz r0, 8(r4)
/* 802ADA94 002AA674  90 01 00 50 */	stw r0, 0x50(r1)
/* 802ADA98 002AA678  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 802ADA9C 002AA67C  90 E1 00 20 */	stw r7, 0x20(r1)
/* 802ADAA0 002AA680  88 01 00 60 */	lbz r0, 0x60(r1)
/* 802ADAA4 002AA684  50 A0 3E 30 */	rlwimi r0, r5, 7, 0x18, 0x18
/* 802ADAA8 002AA688  98 01 00 60 */	stb r0, 0x60(r1)
/* 802ADAAC 002AA68C  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 802ADAB0 002AA690  4B FB B0 69 */	bl Item_80268B18
/* 802ADAB4 002AA694  7C 7F 1B 79 */	or. r31, r3, r3
/* 802ADAB8 002AA698  41 82 00 24 */	beq .L_802ADADC
/* 802ADABC 002AA69C  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 802ADAC0 002AA6A0  7F E3 FB 78 */	mr r3, r31
/* 802ADAC4 002AA6A4  80 84 00 C4 */	lwz r4, 0xc4(r4)
/* 802ADAC8 002AA6A8  80 84 00 04 */	lwz r4, 4(r4)
/* 802ADACC 002AA6AC  C0 24 00 00 */	lfs f1, 0(r4)
/* 802ADAD0 002AA6B0  4B FC 76 89 */	bl it_80275158
/* 802ADAD4 002AA6B4  7F E3 FB 78 */	mr r3, r31
/* 802ADAD8 002AA6B8  48 00 00 19 */	bl it_802ADAF0
.L_802ADADC:
/* 802ADADC 002AA6BC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802ADAE0 002AA6C0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802ADAE4 002AA6C4  38 21 00 70 */	addi r1, r1, 0x70
/* 802ADAE8 002AA6C8  7C 08 03 A6 */	mtlr r0
/* 802ADAEC 002AA6CC  4E 80 00 20 */	blr

.global it_802ADAF0
it_802ADAF0:
/* 802ADAF0 002AA6D0  7C 08 02 A6 */	mflr r0
/* 802ADAF4 002AA6D4  90 01 00 04 */	stw r0, 4(r1)
/* 802ADAF8 002AA6D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802ADAFC 002AA6DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802ADB00 002AA6E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802ADB04 002AA6E4  7C 7E 1B 78 */	mr r30, r3
/* 802ADB08 002AA6E8  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 802ADB0C 002AA6EC  4B FB D8 9D */	bl it_8026B3A8
/* 802ADB10 002AA6F0  38 7E 00 00 */	addi r3, r30, 0
/* 802ADB14 002AA6F4  38 80 00 00 */	li r4, 0
/* 802ADB18 002AA6F8  38 A0 00 02 */	li r5, 2
/* 802ADB1C 002AA6FC  4B FB B3 41 */	bl Item_80268E5C
/* 802ADB20 002AA700  88 1F 0D CE */	lbz r0, 0xdce(r31)
/* 802ADB24 002AA704  38 60 00 00 */	li r3, 0
/* 802ADB28 002AA708  50 60 07 FE */	rlwimi r0, r3, 0, 0x1f, 0x1f
/* 802ADB2C 002AA70C  98 1F 0D CE */	stb r0, 0xdce(r31)
/* 802ADB30 002AA710  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802ADB34 002AA714  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802ADB38 002AA718  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802ADB3C 002AA71C  38 21 00 20 */	addi r1, r1, 0x20
/* 802ADB40 002AA720  7C 08 03 A6 */	mtlr r0
/* 802ADB44 002AA724  4E 80 00 20 */	blr

.global it_802ADB48
it_802ADB48:
/* 802ADB48 002AA728  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 802ADB4C 002AA72C  C0 02 D5 4C */	lfs f0, it_804DCF2C@sda21(r2)
/* 802ADB50 002AA730  C0 23 0D 44 */	lfs f1, 0xd44(r3)
/* 802ADB54 002AA734  EC 01 00 28 */	fsubs f0, f1, f0
/* 802ADB58 002AA738  D0 03 0D 44 */	stfs f0, 0xd44(r3)
/* 802ADB5C 002AA73C  C0 23 0D 44 */	lfs f1, 0xd44(r3)
/* 802ADB60 002AA740  C0 02 D5 48 */	lfs f0, it_804DCF28@sda21(r2)
/* 802ADB64 002AA744  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ADB68 002AA748  4C 40 13 82 */	cror 2, 0, 2
/* 802ADB6C 002AA74C  40 82 00 0C */	bne .L_802ADB78
/* 802ADB70 002AA750  38 60 00 01 */	li r3, 1
/* 802ADB74 002AA754  4E 80 00 20 */	blr
.L_802ADB78:
/* 802ADB78 002AA758  38 60 00 00 */	li r3, 0
/* 802ADB7C 002AA75C  4E 80 00 20 */	blr

.global it_802ADB80
it_802ADB80:
/* 802ADB80 002AA760  7C 08 02 A6 */	mflr r0
/* 802ADB84 002AA764  90 01 00 04 */	stw r0, 4(r1)
/* 802ADB88 002AA768  94 21 FF F8 */	stwu r1, -8(r1)
/* 802ADB8C 002AA76C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802ADB90 002AA770  80 84 00 CC */	lwz r4, 0xcc(r4)
/* 802ADB94 002AA774  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 802ADB98 002AA778  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 802ADB9C 002AA77C  4B FC 4C C5 */	bl it_80272860
/* 802ADBA0 002AA780  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802ADBA4 002AA784  38 21 00 08 */	addi r1, r1, 8
/* 802ADBA8 002AA788  7C 08 03 A6 */	mtlr r0
/* 802ADBAC 002AA78C  4E 80 00 20 */	blr

.global it_802ADBB0
it_802ADBB0:
/* 802ADBB0 002AA790  7C 08 02 A6 */	mflr r0
/* 802ADBB4 002AA794  90 01 00 04 */	stw r0, 4(r1)
/* 802ADBB8 002AA798  94 21 FF F8 */	stwu r1, -8(r1)
/* 802ADBBC 002AA79C  4B FC 03 F5 */	bl it_8026DFB0
/* 802ADBC0 002AA7A0  2C 03 00 00 */	cmpwi r3, 0
/* 802ADBC4 002AA7A4  41 82 00 0C */	beq .L_802ADBD0
/* 802ADBC8 002AA7A8  38 60 00 01 */	li r3, 1
/* 802ADBCC 002AA7AC  48 00 00 08 */	b .L_802ADBD4
.L_802ADBD0:
/* 802ADBD0 002AA7B0  38 60 00 00 */	li r3, 0
.L_802ADBD4:
/* 802ADBD4 002AA7B4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802ADBD8 002AA7B8  38 21 00 08 */	addi r1, r1, 8
/* 802ADBDC 002AA7BC  7C 08 03 A6 */	mtlr r0
/* 802ADBE0 002AA7C0  4E 80 00 20 */	blr

.global it_802ADBE4
it_802ADBE4:
/* 802ADBE4 002AA7C4  7C 08 02 A6 */	mflr r0
/* 802ADBE8 002AA7C8  90 01 00 04 */	stw r0, 4(r1)
/* 802ADBEC 002AA7CC  94 21 FF F8 */	stwu r1, -8(r1)
/* 802ADBF0 002AA7D0  4B FB DC A5 */	bl it_8026B894
/* 802ADBF4 002AA7D4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802ADBF8 002AA7D8  38 21 00 08 */	addi r1, r1, 8
/* 802ADBFC 002AA7DC  7C 08 03 A6 */	mtlr r0
/* 802ADC00 002AA7E0  4E 80 00 20 */	blr


.section .data
    .balign 8
.global it_803F6C88
it_803F6C88:
    .4byte 0
    .4byte it_802ADB48
    .4byte it_802ADB80
    .4byte it_802ADBB0


.section .sdata2
    .balign 8
.global it_804DCF28
it_804DCF28:
    .4byte 0x00000000
.global it_804DCF2C
it_804DCF2C:
    .4byte 0x3F800000

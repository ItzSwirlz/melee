.include "macros.inc"

.section .text

.global func_80014ABC
func_80014ABC:
/* 80014ABC 0001169C  80 63 00 04 */	lwz r3, 4(r3)
/* 80014AC0 000116A0  4E 80 00 20 */	blr

.global lbl_80014AC4
lbl_80014AC4:
/* 80014AC4 000116A4  7C 08 02 A6 */	mflr r0
/* 80014AC8 000116A8  3C 80 80 43 */	lis r4, lbl_804316C0@ha
/* 80014ACC 000116AC  90 01 00 04 */	stw r0, 4(r1)
/* 80014AD0 000116B0  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 80014AD4 000116B4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80014AD8 000116B8  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80014ADC 000116BC  3B C4 16 C0 */	addi r30, r4, lbl_804316C0@l
/* 80014AE0 000116C0  83 E3 00 04 */	lwz r31, 4(r3)
/* 80014AE4 000116C4  48 33 28 81 */	bl OSDisableInterrupts
/* 80014AE8 000116C8  80 1F 00 04 */	lwz r0, 4(r31)
/* 80014AEC 000116CC  54 04 10 3A */	slwi r4, r0, 2
/* 80014AF0 000116D0  38 84 01 E0 */	addi r4, r4, 0x1e0
/* 80014AF4 000116D4  7C 9E 22 14 */	add r4, r30, r4
/* 80014AF8 000116D8  48 00 00 08 */	b .L_80014B00
.L_80014AFC:
/* 80014AFC 000116DC  7C 04 03 78 */	mr r4, r0
.L_80014B00:
/* 80014B00 000116E0  80 04 00 00 */	lwz r0, 0(r4)
/* 80014B04 000116E4  7C 00 F8 40 */	cmplw r0, r31
/* 80014B08 000116E8  40 82 FF F4 */	bne .L_80014AFC
/* 80014B0C 000116EC  80 1F 00 00 */	lwz r0, 0(r31)
/* 80014B10 000116F0  38 BE 01 E8 */	addi r5, r30, 0x1e8
/* 80014B14 000116F4  90 04 00 00 */	stw r0, 0(r4)
/* 80014B18 000116F8  48 00 00 08 */	b .L_80014B20
.L_80014B1C:
/* 80014B1C 000116FC  7C 05 03 78 */	mr r5, r0
.L_80014B20:
/* 80014B20 00011700  80 05 00 00 */	lwz r0, 0(r5)
/* 80014B24 00011704  28 00 00 00 */	cmplwi r0, 0
/* 80014B28 00011708  40 82 FF F4 */	bne .L_80014B1C
/* 80014B2C 0001170C  93 E5 00 00 */	stw r31, 0(r5)
/* 80014B30 00011710  38 80 00 00 */	li r4, 0
/* 80014B34 00011714  38 00 00 02 */	li r0, 2
/* 80014B38 00011718  90 9F 00 00 */	stw r4, 0(r31)
/* 80014B3C 0001171C  90 1F 00 04 */	stw r0, 4(r31)
/* 80014B40 00011720  48 33 28 4D */	bl OSRestoreInterrupts
/* 80014B44 00011724  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 80014B48 00011728  28 0C 00 00 */	cmplwi r12, 0
/* 80014B4C 0001172C  41 82 00 6C */	beq .L_80014BB8
/* 80014B50 00011730  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 80014B54 00011734  7D 88 03 A6 */	mtlr r12
/* 80014B58 00011738  4E 80 00 21 */	blrl
/* 80014B5C 0001173C  48 33 28 09 */	bl OSDisableInterrupts
/* 80014B60 00011740  80 1F 00 04 */	lwz r0, 4(r31)
/* 80014B64 00011744  54 04 10 3A */	slwi r4, r0, 2
/* 80014B68 00011748  38 84 01 E0 */	addi r4, r4, 0x1e0
/* 80014B6C 0001174C  7C 9E 22 14 */	add r4, r30, r4
/* 80014B70 00011750  48 00 00 08 */	b .L_80014B78
.L_80014B74:
/* 80014B74 00011754  7C 04 03 78 */	mr r4, r0
.L_80014B78:
/* 80014B78 00011758  80 04 00 00 */	lwz r0, 0(r4)
/* 80014B7C 0001175C  7C 00 F8 40 */	cmplw r0, r31
/* 80014B80 00011760  40 82 FF F4 */	bne .L_80014B74
/* 80014B84 00011764  80 1F 00 00 */	lwz r0, 0(r31)
/* 80014B88 00011768  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 80014B8C 0001176C  90 04 00 00 */	stw r0, 0(r4)
/* 80014B90 00011770  48 00 00 08 */	b .L_80014B98
.L_80014B94:
/* 80014B94 00011774  7C 05 03 78 */	mr r5, r0
.L_80014B98:
/* 80014B98 00011778  80 05 00 00 */	lwz r0, 0(r5)
/* 80014B9C 0001177C  28 00 00 00 */	cmplwi r0, 0
/* 80014BA0 00011780  40 82 FF F4 */	bne .L_80014B94
/* 80014BA4 00011784  93 E5 00 00 */	stw r31, 0(r5)
/* 80014BA8 00011788  38 00 00 00 */	li r0, 0
/* 80014BAC 0001178C  90 1F 00 00 */	stw r0, 0(r31)
/* 80014BB0 00011790  90 1F 00 04 */	stw r0, 4(r31)
/* 80014BB4 00011794  48 33 27 D9 */	bl OSRestoreInterrupts
.L_80014BB8:
/* 80014BB8 00011798  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80014BBC 0001179C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80014BC0 000117A0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80014BC4 000117A4  38 21 00 18 */	addi r1, r1, 0x18
/* 80014BC8 000117A8  7C 08 03 A6 */	mtlr r0
/* 80014BCC 000117AC  4E 80 00 20 */	blr

.global func_80014BD0
func_80014BD0:
/* 80014BD0 000117B0  7C 08 02 A6 */	mflr r0
/* 80014BD4 000117B4  3D 00 80 43 */	lis r8, lbl_804316C0@ha
/* 80014BD8 000117B8  90 01 00 04 */	stw r0, 4(r1)
/* 80014BDC 000117BC  94 21 FF A8 */	stwu r1, -0x58(r1)
/* 80014BE0 000117C0  BE E1 00 34 */	stmw r23, 0x34(r1)
/* 80014BE4 000117C4  3B 44 00 00 */	addi r26, r4, 0
/* 80014BE8 000117C8  3B 65 00 00 */	addi r27, r5, 0
/* 80014BEC 000117CC  3B 23 00 00 */	addi r25, r3, 0
/* 80014BF0 000117D0  3A E6 00 00 */	addi r23, r6, 0
/* 80014BF4 000117D4  3B 07 00 00 */	addi r24, r7, 0
/* 80014BF8 000117D8  38 7A 00 00 */	addi r3, r26, 0
/* 80014BFC 000117DC  38 9B 00 00 */	addi r4, r27, 0
/* 80014C00 000117E0  3B E8 16 C0 */	addi r31, r8, lbl_804316C0@l
/* 80014C04 000117E4  48 32 FB D9 */	bl DCInvalidateRange
/* 80014C08 000117E8  48 33 27 5D */	bl OSDisableInterrupts
/* 80014C0C 000117EC  83 9F 01 E0 */	lwz r28, 0x1e0(r31)
/* 80014C10 000117F0  3B BF 01 E0 */	addi r29, r31, 0x1e0
/* 80014C14 000117F4  3B C3 00 00 */	addi r30, r3, 0
/* 80014C18 000117F8  28 1C 00 00 */	cmplwi r28, 0
/* 80014C1C 000117FC  40 82 00 14 */	bne .L_80014C30
/* 80014C20 00011800  38 6D 80 D8 */	addi r3, r13, lbl_804D3778@sda21
/* 80014C24 00011804  38 80 00 67 */	li r4, 0x67
/* 80014C28 00011808  38 AD 80 E0 */	addi r5, r13, lbl_804D3780@sda21
/* 80014C2C 0001180C  48 37 35 F5 */	bl __assert
.L_80014C30:
/* 80014C30 00011810  80 1C 00 00 */	lwz r0, 0(r28)
/* 80014C34 00011814  38 7F 01 E4 */	addi r3, r31, 0x1e4
/* 80014C38 00011818  90 1D 00 00 */	stw r0, 0(r29)
/* 80014C3C 0001181C  92 FC 00 28 */	stw r23, 0x28(r28)
/* 80014C40 00011820  93 1C 00 2C */	stw r24, 0x2c(r28)
/* 80014C44 00011824  48 00 00 08 */	b .L_80014C4C
.L_80014C48:
/* 80014C48 00011828  7C 03 03 78 */	mr r3, r0
.L_80014C4C:
/* 80014C4C 0001182C  80 03 00 00 */	lwz r0, 0(r3)
/* 80014C50 00011830  28 00 00 00 */	cmplwi r0, 0
/* 80014C54 00011834  40 82 FF F4 */	bne .L_80014C48
/* 80014C58 00011838  93 83 00 00 */	stw r28, 0(r3)
/* 80014C5C 0001183C  38 00 00 00 */	li r0, 0
/* 80014C60 00011840  3C 60 80 01 */	lis r3, lbl_80014AC4@ha
/* 80014C64 00011844  90 1C 00 00 */	stw r0, 0(r28)
/* 80014C68 00011848  38 00 00 01 */	li r0, 1
/* 80014C6C 0001184C  39 43 4A C4 */	addi r10, r3, lbl_80014AC4@l
/* 80014C70 00011850  90 1C 00 04 */	stw r0, 4(r28)
/* 80014C74 00011854  38 9C 00 00 */	addi r4, r28, 0
/* 80014C78 00011858  38 F9 00 00 */	addi r7, r25, 0
/* 80014C7C 0001185C  39 1A 00 00 */	addi r8, r26, 0
/* 80014C80 00011860  39 3B 00 00 */	addi r9, r27, 0
/* 80014C84 00011864  38 7C 00 08 */	addi r3, r28, 8
/* 80014C88 00011868  38 A0 00 01 */	li r5, 1
/* 80014C8C 0001186C  38 C0 00 00 */	li r6, 0
/* 80014C90 00011870  48 33 D4 85 */	bl ARQPostRequest
/* 80014C94 00011874  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 80014C98 00011878  28 00 00 00 */	cmplwi r0, 0
/* 80014C9C 0001187C  40 82 00 74 */	bne .L_80014D10
/* 80014CA0 00011880  7F C3 F3 78 */	mr r3, r30
/* 80014CA4 00011884  48 33 26 E9 */	bl OSRestoreInterrupts
.L_80014CA8:
/* 80014CA8 00011888  7F 83 E3 78 */	mr r3, r28
/* 80014CAC 0001188C  4B FF FE 11 */	bl func_80014ABC
/* 80014CB0 00011890  2C 03 00 02 */	cmpwi r3, 2
/* 80014CB4 00011894  40 82 FF F4 */	bne .L_80014CA8
/* 80014CB8 00011898  48 33 26 AD */	bl OSDisableInterrupts
/* 80014CBC 0001189C  80 1C 00 04 */	lwz r0, 4(r28)
/* 80014CC0 000118A0  3B C3 00 00 */	addi r30, r3, 0
/* 80014CC4 000118A4  54 03 10 3A */	slwi r3, r0, 2
/* 80014CC8 000118A8  38 63 01 E0 */	addi r3, r3, 0x1e0
/* 80014CCC 000118AC  7C 7F 1A 14 */	add r3, r31, r3
/* 80014CD0 000118B0  48 00 00 08 */	b .L_80014CD8
.L_80014CD4:
/* 80014CD4 000118B4  7C 03 03 78 */	mr r3, r0
.L_80014CD8:
/* 80014CD8 000118B8  80 03 00 00 */	lwz r0, 0(r3)
/* 80014CDC 000118BC  7C 00 E0 40 */	cmplw r0, r28
/* 80014CE0 000118C0  40 82 FF F4 */	bne .L_80014CD4
/* 80014CE4 000118C4  80 1C 00 00 */	lwz r0, 0(r28)
/* 80014CE8 000118C8  90 03 00 00 */	stw r0, 0(r3)
/* 80014CEC 000118CC  48 00 00 08 */	b .L_80014CF4
.L_80014CF0:
/* 80014CF0 000118D0  7C 1D 03 78 */	mr r29, r0
.L_80014CF4:
/* 80014CF4 000118D4  80 1D 00 00 */	lwz r0, 0(r29)
/* 80014CF8 000118D8  28 00 00 00 */	cmplwi r0, 0
/* 80014CFC 000118DC  40 82 FF F4 */	bne .L_80014CF0
/* 80014D00 000118E0  93 9D 00 00 */	stw r28, 0(r29)
/* 80014D04 000118E4  38 00 00 00 */	li r0, 0
/* 80014D08 000118E8  90 1C 00 00 */	stw r0, 0(r28)
/* 80014D0C 000118EC  90 1C 00 04 */	stw r0, 4(r28)
.L_80014D10:
/* 80014D10 000118F0  7F C3 F3 78 */	mr r3, r30
/* 80014D14 000118F4  48 33 26 79 */	bl OSRestoreInterrupts
/* 80014D18 000118F8  BA E1 00 34 */	lmw r23, 0x34(r1)
/* 80014D1C 000118FC  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 80014D20 00011900  38 21 00 58 */	addi r1, r1, 0x58
/* 80014D24 00011904  7C 08 03 A6 */	mtlr r0
/* 80014D28 00011908  4E 80 00 20 */	blr

.global func_80014D2C
func_80014D2C:
/* 80014D2C 0001190C  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 80014D30 00011910  3C 60 80 43 */	lis r3, lbl_804316C0@ha
/* 80014D34 00011914  39 43 16 C0 */	addi r10, r3, lbl_804316C0@l
/* 80014D38 00011918  93 E1 00 24 */	stw r31, 0x24(r1)
/* 80014D3C 0001191C  39 0A 00 30 */	addi r8, r10, 0x30
/* 80014D40 00011920  39 20 00 00 */	li r9, 0
/* 80014D44 00011924  93 C1 00 20 */	stw r30, 0x20(r1)
/* 80014D48 00011928  38 08 00 30 */	addi r0, r8, 0x30
/* 80014D4C 0001192C  38 EA 00 90 */	addi r7, r10, 0x90
/* 80014D50 00011930  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 80014D54 00011934  38 CA 00 C0 */	addi r6, r10, 0xc0
/* 80014D58 00011938  38 AA 00 F0 */	addi r5, r10, 0xf0
/* 80014D5C 0001193C  93 81 00 18 */	stw r28, 0x18(r1)
/* 80014D60 00011940  38 8A 01 20 */	addi r4, r10, 0x120
/* 80014D64 00011944  38 6A 01 50 */	addi r3, r10, 0x150
/* 80014D68 00011948  91 2A 01 E0 */	stw r9, 0x1e0(r10)
/* 80014D6C 0001194C  3B 8A 01 50 */	addi r28, r10, 0x150
/* 80014D70 00011950  91 2A 01 E4 */	stw r9, 0x1e4(r10)
/* 80014D74 00011954  91 2A 01 E8 */	stw r9, 0x1e8(r10)
/* 80014D78 00011958  91 4A 01 E0 */	stw r10, 0x1e0(r10)
/* 80014D7C 0001195C  91 0A 00 00 */	stw r8, 0(r10)
/* 80014D80 00011960  39 00 00 08 */	li r8, 8
/* 80014D84 00011964  91 2A 00 04 */	stw r9, 4(r10)
/* 80014D88 00011968  90 0A 00 30 */	stw r0, 0x30(r10)
/* 80014D8C 0001196C  38 1C 00 30 */	addi r0, r28, 0x30
/* 80014D90 00011970  91 2A 00 34 */	stw r9, 0x34(r10)
/* 80014D94 00011974  90 EA 00 60 */	stw r7, 0x60(r10)
/* 80014D98 00011978  91 2A 00 64 */	stw r9, 0x64(r10)
/* 80014D9C 0001197C  90 CA 00 90 */	stw r6, 0x90(r10)
/* 80014DA0 00011980  91 2A 00 94 */	stw r9, 0x94(r10)
/* 80014DA4 00011984  90 AA 00 C0 */	stw r5, 0xc0(r10)
/* 80014DA8 00011988  91 2A 00 C4 */	stw r9, 0xc4(r10)
/* 80014DAC 0001198C  90 8A 00 F0 */	stw r4, 0xf0(r10)
/* 80014DB0 00011990  91 2A 00 F4 */	stw r9, 0xf4(r10)
/* 80014DB4 00011994  90 6A 01 20 */	stw r3, 0x120(r10)
/* 80014DB8 00011998  91 2A 01 24 */	stw r9, 0x124(r10)
/* 80014DBC 0001199C  90 0A 01 50 */	stw r0, 0x150(r10)
/* 80014DC0 000119A0  91 2A 01 54 */	stw r9, 0x154(r10)
/* 80014DC4 000119A4  48 00 00 3C */	b .L_80014E00
.L_80014DC8:
/* 80014DC8 000119A8  20 08 00 09 */	subfic r0, r8, 9
/* 80014DCC 000119AC  2C 08 00 09 */	cmpwi r8, 9
/* 80014DD0 000119B0  7C 09 03 A6 */	mtctr r0
/* 80014DD4 000119B4  40 80 00 1C */	bge .L_80014DF0
.L_80014DD8:
/* 80014DD8 000119B8  38 03 00 30 */	addi r0, r3, 0x30
/* 80014DDC 000119BC  90 03 00 00 */	stw r0, 0(r3)
/* 80014DE0 000119C0  7C 7C 1B 78 */	mr r28, r3
/* 80014DE4 000119C4  91 23 00 04 */	stw r9, 4(r3)
/* 80014DE8 000119C8  38 63 00 30 */	addi r3, r3, 0x30
/* 80014DEC 000119CC  42 00 FF EC */	bdnz .L_80014DD8
.L_80014DF0:
/* 80014DF0 000119D0  38 00 00 00 */	li r0, 0
/* 80014DF4 000119D4  90 1C 00 00 */	stw r0, 0(r28)
/* 80014DF8 000119D8  90 1C 00 04 */	stw r0, 4(r28)
/* 80014DFC 000119DC  48 00 00 10 */	b .L_80014E0C
.L_80014E00:
/* 80014E00 000119E0  1C 08 00 30 */	mulli r0, r8, 0x30
/* 80014E04 000119E4  7C 6A 02 14 */	add r3, r10, r0
/* 80014E08 000119E8  4B FF FF C0 */	b .L_80014DC8
.L_80014E0C:
/* 80014E0C 000119EC  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 80014E10 000119F0  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 80014E14 000119F4  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 80014E18 000119F8  83 81 00 18 */	lwz r28, 0x18(r1)
/* 80014E1C 000119FC  38 21 00 28 */	addi r1, r1, 0x28
/* 80014E20 00011A00  4E 80 00 20 */	blr


.section .bss, "wa"
    .balign 8
.global lbl_804316C0
lbl_804316C0:
    .skip 0x1F0


.section .sdata
    .balign 8
.global lbl_804D3778
lbl_804D3778:
    .asciz "lbarq.c"
    .balign 4
.global lbl_804D3780
lbl_804D3780:
    .asciz "rp"

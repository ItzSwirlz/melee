.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches


glabel test
/* 000090 00400090 27BDFFF0 */  addiu $sp, $sp, -0x10
/* 000094 00400094 AFA0000C */  sw    $zero, 0xc($sp)
/* 000098 00400098 AFA00008 */  sw    $zero, 8($sp)
/* 00009C 0040009C 8FAE000C */  lw    $t6, 0xc($sp)
/* 0000A0 004000A0 01C4082A */  slt   $at, $t6, $a0
/* 0000A4 004000A4 1020001B */  beqz  $at, .L00400114
/* 0000A8 004000A8 00000000 */   nop
.L004000AC:
/* 0000AC 004000AC AFA00004 */  sw    $zero, 4($sp)
/* 0000B0 004000B0 8FAF0004 */  lw    $t7, 4($sp)
/* 0000B4 004000B4 01E4082A */  slt   $at, $t7, $a0
/* 0000B8 004000B8 1020000F */  beqz  $at, .L004000F8
/* 0000BC 004000BC 00000000 */   nop
.L004000C0:
/* 0000C0 004000C0 8FB8000C */  lw    $t8, 0xc($sp)
/* 0000C4 004000C4 8FB90004 */  lw    $t9, 4($sp)
/* 0000C8 004000C8 8FA90008 */  lw    $t1, 8($sp)
/* 0000CC 004000CC 03190019 */  multu $t8, $t9
/* 0000D0 004000D0 00004012 */  mflo  $t0
/* 0000D4 004000D4 01285021 */  addu  $t2, $t1, $t0
/* 0000D8 004000D8 AFAA0008 */  sw    $t2, 8($sp)
/* 0000DC 004000DC 8FAB0004 */  lw    $t3, 4($sp)
/* 0000E0 004000E0 256C0001 */  addiu $t4, $t3, 1
/* 0000E4 004000E4 AFAC0004 */  sw    $t4, 4($sp)
/* 0000E8 004000E8 8FAD0004 */  lw    $t5, 4($sp)
/* 0000EC 004000EC 01A4082A */  slt   $at, $t5, $a0
/* 0000F0 004000F0 1420FFF3 */  bnez  $at, .L004000C0
/* 0000F4 004000F4 00000000 */   nop
.L004000F8:
/* 0000F8 004000F8 8FAE000C */  lw    $t6, 0xc($sp)
/* 0000FC 004000FC 25CF0001 */  addiu $t7, $t6, 1
/* 000100 00400100 AFAF000C */  sw    $t7, 0xc($sp)
/* 000104 00400104 8FB8000C */  lw    $t8, 0xc($sp)
/* 000108 00400108 0304082A */  slt   $at, $t8, $a0
/* 00010C 0040010C 1420FFE7 */  bnez  $at, .L004000AC
/* 000110 00400110 00000000 */   nop
.L00400114:
/* 000114 00400114 10000003 */  b     .L00400124
/* 000118 00400118 8FA20008 */   lw    $v0, 8($sp)
/* 00011C 0040011C 10000001 */  b     .L00400124
/* 000120 00400120 00000000 */   nop
.L00400124:
/* 000124 00400124 03E00008 */  jr    $ra
/* 000128 00400128 27BD0010 */   addiu $sp, $sp, 0x10

/* 00012C 0040012C 00000000 */  nop

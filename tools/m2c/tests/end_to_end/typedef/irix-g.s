.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches


glabel func_00400090
/* 000090 00400090 8CAE0000 */  lw    $t6, ($a1)
/* 000094 00400094 03E00008 */  jr    $ra
/* 000098 00400098 01C41021 */   addu  $v0, $t6, $a0

/* 00009C 0040009C 03E00008 */  jr    $ra
/* 0000A0 004000A0 00000000 */   nop

/* 0000A4 004000A4 03E00008 */  jr    $ra
/* 0000A8 004000A8 00000000 */   nop

glabel test
/* 0000AC 004000AC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0000B0 004000B0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0000B4 004000B4 AFA40028 */  sw    $a0, 0x28($sp)
/* 0000B8 004000B8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0000BC 004000BC AFB10018 */  sw    $s1, 0x18($sp)
/* 0000C0 004000C0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0000C4 004000C4 8FA40028 */  lw    $a0, 0x28($sp)
/* 0000C8 004000C8 0C100024 */  jal   func_00400090
/* 0000CC 004000CC 8FA5002C */   lw    $a1, 0x2c($sp)
/* 0000D0 004000D0 00408825 */  move  $s1, $v0
/* 0000D4 004000D4 8FA40028 */  lw    $a0, 0x28($sp)
/* 0000D8 004000D8 0C100024 */  jal   func_00400090
/* 0000DC 004000DC 27A50028 */   addiu $a1, $sp, 0x28
/* 0000E0 004000E0 8FAE002C */  lw    $t6, 0x2c($sp)
/* 0000E4 004000E4 00408025 */  move  $s0, $v0
/* 0000E8 004000E8 8DC40000 */  lw    $a0, ($t6)
/* 0000EC 004000EC 0C100024 */  jal   func_00400090
/* 0000F0 004000F0 01C02825 */   move  $a1, $t6
/* 0000F4 004000F4 02117821 */  addu  $t7, $s0, $s1
/* 0000F8 004000F8 10000003 */  b     .L00400108
/* 0000FC 004000FC 004F1021 */   addu  $v0, $v0, $t7
/* 000100 00400100 10000001 */  b     .L00400108
/* 000104 00400104 00000000 */   nop
.L00400108:
/* 000108 00400108 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00010C 0040010C 8FB00014 */  lw    $s0, 0x14($sp)
/* 000110 00400110 8FB10018 */  lw    $s1, 0x18($sp)
/* 000114 00400114 03E00008 */  jr    $ra
/* 000118 00400118 27BD0028 */   addiu $sp, $sp, 0x28

/* 00011C 0040011C 00000000 */  nop
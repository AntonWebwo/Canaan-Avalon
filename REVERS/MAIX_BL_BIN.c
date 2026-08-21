#include "MAIX_BL_BIN.h"



/* WARNING: Removing unreachable block (ram,0x0000000c) */

void FUN_00000000(void)

{
  long lVar1;
  long in_mhartid;
  
  lVar1 = gp;
  gp = gp + 0x9c;
  tp = lVar1 + 0x203;
  tp = tp & 0xffffffffffffffc0;
  tp = tp + in_mhartid * 0x10000;
  FUN_0000025a();
  return;
}



void FUN_0000015e(void)

{
  return;
}



void FUN_0000016c(void)

{
  undefined4 *local_18;
  
  local_18 = (undefined4 *)(gp + -0x7d8);
  while (local_18 < (undefined4 *)(gp + 0x128)) {
    *local_18 = 0;
    local_18 = local_18 + 1;
  }
  return;
}



void FUN_000001a0(int param_1)

{
  do {
  } while (*(long *)((long)param_1 * 8 + gp + -0x7a8) == 0);
  return;
}



void FUN_000001c6(int param_1)

{
  *(undefined8 *)((long)param_1 * 8 + gp + -0x7a8) = 1;
  return;
}



undefined8 FUN_000001ea(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    *(long *)(gp + -0x798) = param_1;
    *(undefined8 *)(gp + -0x790) = param_2;
    FUN_000001c6(1);
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_0000022a(code *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*param_1)(0,0,param_1);
  return uVar1;
}



void FUN_0000025a(int param_1,code *param_2,code *param_3,long param_4)

{
  undefined8 in_register_00000480;
  char *pcVar1;
  undefined8 extraout_a1;
  int iVar2;
  char acStack_50 [8];
  int iStack_44;
  int local_18;
  int local_14;
  
  iVar2 = (int)param_2;
  if (param_1 == 0) {
    FUN_0000016c();
    FUN_00007364();
    FUN_0000410c();
    FUN_00004978();
    FUN_000049ba(0);
    for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
      FUN_00001538(200);
      FUN_000049ba(1);
      FUN_00001538(200);
      FUN_000049ba(0);
    }
    param_2 = (code *)0x1;
    *(undefined4 *)(gp + -0x7d8) = 1;
  }
  local_18 = 0;
  if (param_1 == 0) {
    *(undefined8 *)(gp + -0x798) = 0;
    *(undefined8 *)(gp + -0x790) = 0;
    param_2 = (code *)(long)iVar2;
    param_3 = FUN_00007dac;
    local_18 = FUN_0000022a(0,param_2);
  }
  else {
    do {
    } while (*(int *)(gp + -0x7d8) == 0);
    FUN_000001a0((long)param_1);
    if (*(long *)(gp + -0x798) != 0) {
      param_2 = *(code **)(gp + -0x798);
      local_18 = (*param_2)(*(undefined8 *)(gp + -0x790));
    }
  }
  pcVar1 = (char *)FUN_00001762((long)local_18);
  acStack_50[0] = s_unknown_000092a0[0];
  acStack_50[1] = s_unknown_000092a0[1];
  acStack_50[2] = s_unknown_000092a0[2];
  acStack_50[3] = s_unknown_000092a0[3];
  acStack_50[4] = s_unknown_000092a0[4];
  acStack_50[5] = s_unknown_000092a0[5];
  acStack_50[6] = s_unknown_000092a0[6];
  acStack_50[7] = s_unknown_000092a0[7];
  if (pcVar1 == (char *)0x0) {
    pcVar1 = acStack_50;
  }
  FUN_00001474(s_core_dump___s_000091f8,pcVar1);
  FUN_00001474(s_Cause_0x_016lx__EPC_0x_016lx_00009208,extraout_a1,param_3);
  for (iStack_44 = 0; iStack_44 < 0x10; iStack_44 = iStack_44 + 1) {
    FUN_00001474(s_reg__02d___s____0x_016lx__reg__0_00009228,(long)(iStack_44 << 1),
                 *(undefined8 *)(&DAT_00009640 + (long)(iStack_44 * 2) * 0x10),
                 *(undefined8 *)((long)(iStack_44 * 2) * 8 + param_4),(long)(iStack_44 * 2 + 1),
                 *(undefined8 *)(&DAT_00009640 + (long)(iStack_44 * 2 + 1) * 0x10),
                 *(undefined8 *)(((long)(iStack_44 * 2) + 1) * 8 + param_4));
  }
  for (iStack_44 = 0; iStack_44 < 0x10; iStack_44 = iStack_44 + 1) {
    FUN_00001474(s_freg__02d___s____0x_016lx__f___f_00009260,(long)(iStack_44 << 1),
                 *(undefined8 *)(&DAT_00009840 + (long)(iStack_44 * 2) * 0x10),
                 *(undefined8 *)(param_2 + (long)(iStack_44 * 2) * 8),in_register_00000480,
                 (long)(iStack_44 * 2 + 1),
                 *(undefined8 *)(&DAT_00009840 + (long)(iStack_44 * 2 + 1) * 0x10),
                 *(undefined8 *)(param_2 + ((long)(iStack_44 * 2) + 1) * 8));
  }
  return;
}



void FUN_0000034a(char *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 in_register_00000480;
  char *local_28;
  char local_20 [8];
  int local_14;
  
  local_20 = s_unknown_000092a0;
  local_28 = param_1;
  if (param_1 == (char *)0x0) {
    local_28 = local_20;
  }
  FUN_00001474(s_core_dump___s_000091f8,local_28);
  FUN_00001474(s_Cause_0x_016lx__EPC_0x_016lx_00009208,param_2,param_3);
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    FUN_00001474(s_reg__02d___s____0x_016lx__reg__0_00009228,(long)(local_14 << 1),
                 *(undefined8 *)(&DAT_00009640 + (long)(local_14 * 2) * 0x10),
                 *(undefined8 *)((long)(local_14 * 2) * 8 + param_4),(long)(local_14 * 2 + 1),
                 *(undefined8 *)(&DAT_00009640 + (long)(local_14 * 2 + 1) * 0x10),
                 *(undefined8 *)(((long)(local_14 * 2) + 1) * 8 + param_4));
  }
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    FUN_00001474(s_freg__02d___s____0x_016lx__f___f_00009260,(long)(local_14 << 1),
                 *(undefined8 *)(&DAT_00009840 + (long)(local_14 * 2) * 0x10),
                 *(undefined8 *)((long)(local_14 * 2) * 8 + param_5),in_register_00000480,
                 (long)(local_14 * 2 + 1),
                 *(undefined8 *)(&DAT_00009840 + (long)(local_14 * 2 + 1) * 0x10),
                 *(undefined8 *)(((long)(local_14 * 2) + 1) * 8 + param_5));
  }
  return;
}



undefined8 FUN_0000054a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_a1;
  
  FUN_0000034a(s_unhandled_interrupt_000092a8,param_1,param_4);
  lVar1 = FUN_00001762(0x539);
  uVar2 = (**(code **)(&DAT_00009a40 + lVar1 * 8))
                    (lVar1,extraout_a1,param_2,param_3,*(code **)(&DAT_00009a40 + lVar1 * 8));
  return uVar2;
}



void FUN_000005d4(ulong param_1,byte *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong local_38;
  char *local_20;
  ulong local_18;
  
  local_18 = 1;
  local_20 = *(char **)(param_2 + 0x18);
  if ((*(int *)(param_2 + 8) != 0) || (param_1 != 0)) {
    for (; local_38 = param_1, (ulong)*(uint *)(param_2 + 0x10) <= param_1 / local_18;
        local_18 = local_18 * *(uint *)(param_2 + 0x10)) {
    }
    while (local_18 != 0) {
      uVar2 = local_38 / local_18;
      local_38 = local_38 % local_18;
      local_18 = local_18 / *(uint *)(param_2 + 0x10);
      if ((int)uVar2 < 10) {
        cVar1 = '0';
      }
      else if ((*param_2 & 4) == 0) {
        cVar1 = 'W';
      }
      else {
        cVar1 = '7';
      }
      *local_20 = cVar1 + (char)uVar2;
      local_20 = local_20 + 1;
    }
    *(long *)(param_2 + 0x20) = (long)local_20 - *(long *)(param_2 + 0x18);
  }
  return;
}



void FUN_000006dc(long param_1,long param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  if (param_1 < 0) {
    local_18 = -param_1;
    *(undefined *)(param_2 + 0xc) = 0x2d;
  }
  FUN_000005d4(local_18,param_2);
  return;
}



void FUN_00000724(ulong param_1,byte *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong local_38;
  char *local_20;
  ulong local_18;
  
  local_18 = 1;
  local_20 = *(char **)(param_2 + 0x18);
  if ((*(int *)(param_2 + 8) != 0) || (param_1 != 0)) {
    for (; local_38 = param_1, (ulong)*(uint *)(param_2 + 0x10) <= param_1 / local_18;
        local_18 = local_18 * *(uint *)(param_2 + 0x10)) {
    }
    while (local_18 != 0) {
      uVar2 = local_38 / local_18;
      local_38 = local_38 % local_18;
      local_18 = local_18 / *(uint *)(param_2 + 0x10);
      if ((int)uVar2 < 10) {
        cVar1 = '0';
      }
      else if ((*param_2 & 4) == 0) {
        cVar1 = 'W';
      }
      else {
        cVar1 = '7';
      }
      *local_20 = cVar1 + (char)uVar2;
      local_20 = local_20 + 1;
    }
    *(long *)(param_2 + 0x20) = (long)local_20 - *(long *)(param_2 + 0x18);
  }
  return;
}



void FUN_0000082c(long param_1,long param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  if (param_1 < 0) {
    local_18 = -param_1;
    *(undefined *)(param_2 + 0xc) = 0x2d;
  }
  FUN_00000724(local_18,param_2);
  return;
}



void FUN_00000874(uint param_1,byte *param_2)

{
  uint uVar1;
  char cVar2;
  uint local_34;
  char *local_20;
  uint local_14;
  
  local_14 = 1;
  local_20 = *(char **)(param_2 + 0x18);
  if ((*(int *)(param_2 + 8) != 0) || (param_1 != 0)) {
    for (; local_34 = param_1, *(uint *)(param_2 + 0x10) <= param_1 / local_14;
        local_14 = local_14 * *(int *)(param_2 + 0x10)) {
    }
    while (local_14 != 0) {
      uVar1 = local_34 / local_14;
      local_34 = local_34 % local_14;
      local_14 = local_14 / *(uint *)(param_2 + 0x10);
      if ((int)uVar1 < 10) {
        cVar2 = '0';
      }
      else if ((*param_2 & 4) == 0) {
        cVar2 = 'W';
      }
      else {
        cVar2 = '7';
      }
      *local_20 = cVar2 + (char)uVar1;
      local_20 = local_20 + 1;
    }
    *(long *)(param_2 + 0x20) = (long)local_20 - *(long *)(param_2 + 0x18);
  }
  return;
}



void FUN_0000097c(int param_1,long param_2)

{
  undefined4 local_14;
  
  local_14 = param_1;
  if (param_1 < 0) {
    local_14 = -param_1;
    *(undefined *)(param_2 + 0xc) = 0x2d;
  }
  FUN_00000874((long)local_14,param_2);
  return;
}



long FUN_000009c8(byte param_1)

{
  long lVar1;
  
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    if ((param_1 < 0x61) || (0x66 < param_1)) {
      if ((param_1 < 0x41) || (0x46 < param_1)) {
        lVar1 = -1;
      }
      else {
        lVar1 = (long)(int)(param_1 - 0x37);
      }
    }
    else {
      lVar1 = (long)(int)(param_1 - 0x57);
    }
  }
  else {
    lVar1 = (long)(int)(param_1 - 0x30);
  }
  return lVar1;
}



undefined FUN_00000a68(undefined param_1,undefined8 *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined local_21;
  int local_1c;
  undefined *local_18;
  
  local_1c = 0;
  local_21 = param_1;
  local_18 = (undefined *)*param_2;
  while ((iVar1 = FUN_000009c8(local_21), -1 < iVar1 && (iVar1 <= param_3))) {
    local_1c = iVar1 + local_1c * param_3;
    local_21 = *local_18;
    local_18 = local_18 + 1;
  }
  *param_2 = local_18;
  *param_4 = local_1c;
  return local_21;
}



void FUN_00000b14(undefined8 param_1,code *param_2,byte *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  char *local_20;
  int local_18;
  int local_14;
  
  local_20 = *(char **)(param_3 + 0x18);
  local_28 = *(long *)(param_3 + 0x20);
  local_14 = *(int *)(param_3 + 4) - (int)local_28;
  local_18 = *(int *)(param_3 + 8) - (int)local_28;
  if (param_3[0xc] != 0) {
    local_14 = local_14 + -1;
  }
  if (((*param_3 & 2) == 0) || (*(int *)(param_3 + 0x10) != 0x10)) {
    if (((*param_3 & 2) != 0) && (*(int *)(param_3 + 0x10) == 8)) {
      local_14 = local_14 + -1;
    }
  }
  else {
    local_14 = local_14 + -2;
  }
  if (0 < local_18) {
    local_14 = local_14 - local_18;
  }
  if (((*param_3 & 1) == 0) && ((*param_3 & 8) == 0)) {
    while (iVar2 = local_14 + -1, bVar1 = 0 < local_14, local_14 = iVar2, bVar1) {
      (*param_2)(param_1,0x20,param_2);
    }
  }
  if (param_3[0xc] != 0) {
    (*param_2)(param_1,param_3[0xc],param_2);
  }
  if (((*param_3 & 2) == 0) || (*(int *)(param_3 + 0x10) != 0x10)) {
    if (((*param_3 & 2) != 0) && (*(int *)(param_3 + 0x10) == 8)) {
      (*param_2)(param_1,0x30,param_2);
    }
  }
  else {
    (*param_2)(param_1,0x30,param_2);
    if ((*param_3 & 4) == 0) {
      uVar3 = 0x78;
    }
    else {
      uVar3 = 0x58;
    }
    (*param_2)(param_1,uVar3,param_2);
  }
  while (0 < local_18) {
    (*param_2)(param_1,0x30,param_2);
    local_18 = local_18 + -1;
  }
  if ((*param_3 & 1) != 0) {
    while (iVar2 = local_14 + -1, bVar1 = 0 < local_14, local_14 = iVar2, bVar1) {
      (*param_2)(param_1,0x30,param_2);
    }
  }
  while (local_28 != 0) {
    if (*local_20 == '\0') break;
    (*param_2)(param_1,*local_20,param_2);
    local_28 = local_28 + -1;
    local_20 = local_20 + 1;
  }
  if (((*param_3 & 1) == 0) && ((*param_3 & 8) != 0)) {
    while (0 < local_14) {
      (*param_2)(param_1,0x20,param_2);
      local_14 = local_14 + -1;
    }
  }
  return;
}



void FUN_00000dae(undefined8 param_1,code *param_2,byte *param_3,uint *param_4)

{
  char cVar1;
  byte *pbVar2;
  uint *puVar3;
  char *pcVar4;
  uint *local_90;
  byte *local_88;
  code *local_80;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  char acStack_68 [24];
  byte local_50 [4];
  uint local_4c;
  uint local_48;
  undefined local_44;
  undefined4 local_40;
  char *local_38;
  long local_30;
  uint local_24;
  char *local_20;
  uint local_18;
  char local_12;
  byte local_11;
  
  local_90 = param_4;
  local_88 = param_3;
  local_80 = param_2;
  local_78 = param_1;
LAB_00001420:
  while( true ) {
    local_11 = *local_88;
    if (local_11 == 0) {
      return;
    }
    if (local_11 == 0x25) break;
    local_88 = local_88 + 1;
    (*local_80)(local_78,local_11,local_80);
  }
  local_12 = '\0';
  local_50[0] = local_50[0] & 0xf0;
  local_4c = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = acStack_68;
  local_30 = 0;
  local_88 = local_88 + 1;
  while( true ) {
    pbVar2 = local_88 + 1;
    local_11 = *local_88;
    if (local_11 == 0) break;
    if (local_11 == 0x2d) {
      local_50[0] = local_50[0] | 8;
      local_88 = pbVar2;
    }
    else if (local_11 == 0x30) {
      local_50[0] = local_50[0] | 1;
      local_88 = pbVar2;
    }
    else {
      if (local_11 != 0x23) break;
      local_50[0] = local_50[0] | 2;
      local_88 = pbVar2;
    }
  }
  if ((local_50[0] & 8) != 0) {
    local_50[0] = local_50[0] & 0xfe;
  }
  if (local_11 == 0x2a) {
    local_88 = local_88 + 2;
    local_11 = *pbVar2;
    puVar3 = local_90 + 2;
    local_4c = *local_90;
    local_90 = puVar3;
    if ((int)local_4c < 0) {
      local_50[0] = local_50[0] | 8;
      local_4c = -local_4c;
    }
  }
  else {
    local_88 = pbVar2;
    if ((0x2f < local_11) && (local_11 < 0x3a)) {
      local_11 = FUN_00000a68(local_11,&local_88,10,&local_6c);
      local_4c = local_6c;
    }
  }
  if (local_11 == 0x2e) {
    pbVar2 = local_88 + 1;
    local_11 = *local_88;
    if (local_11 == 0x2a) {
      local_88 = local_88 + 2;
      local_11 = *pbVar2;
      puVar3 = local_90 + 2;
      local_24 = *local_90;
      local_90 = puVar3;
      local_48 = local_24;
      if ((int)local_24 < 0) {
        local_48 = 0xffffffff;
      }
    }
    else {
      local_88 = pbVar2;
      if ((local_11 < 0x30) || (0x39 < local_11)) {
        local_48 = 0;
      }
      else {
        local_11 = FUN_00000a68(local_11,&local_88,10,&local_70);
        local_48 = local_70;
      }
    }
  }
  if (-1 < (int)local_48) {
    local_50[0] = local_50[0] & 0xfe;
  }
  if (local_11 == 0x7a) {
    local_11 = *local_88;
    local_12 = '\x01';
    pbVar2 = local_88 + 1;
  }
  else {
    pbVar2 = local_88;
    if (local_11 == 0x6c) {
      local_11 = *local_88;
      local_12 = '\x01';
      pbVar2 = local_88 + 1;
      if (local_11 == 0x6c) {
        local_11 = local_88[1];
        local_12 = '\x02';
        pbVar2 = local_88 + 2;
      }
    }
  }
  local_88 = pbVar2;
  if (local_11 == 0x69) {
LAB_000011d6:
    local_40 = 10;
    if ((int)local_48 < 0) {
      local_48 = 1;
    }
    if (local_12 == '\x02') {
      FUN_000006dc(*(undefined8 *)local_90,local_50);
    }
    else if (local_12 == '\x01') {
      FUN_0000082c(*(undefined8 *)local_90,local_50);
    }
    else {
      FUN_0000097c((long)(int)*local_90,local_50);
    }
    local_90 = local_90 + 2;
    FUN_00000b14(local_78,local_80,local_50);
    goto LAB_00001420;
  }
  if (local_11 < 0x6a) {
    if (local_11 != 0x58) {
      if (local_11 < 0x59) {
        if (local_11 == 0) {
          return;
        }
        if (local_11 == 0x25) {
          (*local_80)(local_78,0x25,local_80);
        }
      }
      else if (local_11 == 99) {
        (*local_80)(local_78,*local_90 & 0xff,local_80);
        local_90 = local_90 + 2;
      }
      else if (local_11 == 100) goto LAB_000011d6;
      goto LAB_00001420;
    }
  }
  else {
    if (local_11 == 0x73) {
      local_18 = local_48;
      local_38 = *(char **)local_90;
      local_20 = local_38;
      while ((local_18 != 0 &&
             (pcVar4 = local_20 + 1, cVar1 = *local_20, local_20 = pcVar4, cVar1 != '\0'))) {
        local_30 = local_30 + 1;
        local_18 = local_18 - 1;
      }
      local_48 = 0xffffffff;
      local_18 = local_18 - 1;
      FUN_00000b14(local_78,local_80,local_50);
      local_90 = local_90 + 2;
      goto LAB_00001420;
    }
    if (0x73 < local_11) {
      if (local_11 == 0x75) {
        local_40 = 10;
        if ((int)local_48 < 0) {
          local_48 = 1;
        }
        if (local_12 == '\x02') {
          FUN_000005d4(*(undefined8 *)local_90,local_50);
        }
        else if (local_12 == '\x01') {
          FUN_00000724(*(undefined8 *)local_90,local_50);
        }
        else {
          FUN_00000874((long)(int)*local_90,local_50);
        }
        local_90 = local_90 + 2;
        FUN_00000b14(local_78,local_80,local_50);
      }
      else if (local_11 == 0x78) goto LAB_0000127e;
      goto LAB_00001420;
    }
    if (local_11 == 0x6f) {
      local_40 = 8;
      if ((int)local_48 < 0) {
        local_48 = 1;
      }
      FUN_00000874((long)(int)*local_90,local_50);
      FUN_00000b14(local_78,local_80,local_50);
      local_90 = local_90 + 2;
      goto LAB_00001420;
    }
    if (local_11 != 0x70) goto LAB_00001420;
    local_50[0] = local_50[0] | 2;
    local_12 = '\x01';
  }
LAB_0000127e:
  local_40 = 0x10;
  local_50[0] = (local_11 == 0x58) << 2 | local_50[0] & 0xfb;
  if ((int)local_48 < 0) {
    local_48 = 1;
  }
  if (local_12 == '\x02') {
    FUN_000005d4(*(undefined8 *)local_90,local_50);
  }
  else if (local_12 == '\x01') {
    FUN_00000724(*(undefined8 *)local_90,local_50);
  }
  else {
    FUN_00000874((long)(int)*local_90,local_50);
  }
  local_90 = local_90 + 2;
  FUN_00000b14(local_78,local_80,local_50);
  goto LAB_00001420;
}



void FUN_0000144e(undefined param_1)

{
  FUN_00007340(param_1);
  return;
}



undefined8
FUN_00001474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_00000dae(*(undefined8 *)(gp + -2000),FUN_0000144e,param_1,&uStack_38);
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x000014d4) */
/* WARNING: Removing unreachable block (ram,0x0000150c) */

undefined8 FUN_000014c8(long param_1)

{
  uint uVar1;
  long in_mcycle;
  long lVar2;
  
  lVar2 = in_mcycle;
  uVar1 = FUN_00006d26(3);
  do {
  } while ((ulong)(lVar2 - in_mcycle) < ((ulong)uVar1 * param_1) / 1000000);
  return 0;
}



undefined8 FUN_00001538(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_000014c8(param_1 * 1000);
  return uVar1;
}



void FUN_00001562(char *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 in_register_00000480;
  char *local_28;
  char local_20 [8];
  int local_14;
  
  local_20 = s_unknown_00009b60;
  local_28 = param_1;
  if (param_1 == (char *)0x0) {
    local_28 = local_20;
  }
  FUN_00001474(s_core_dump___s_00009ab8,local_28);
  FUN_00001474(s_Cause_0x_016lx__EPC_0x_016lx_00009ac8,param_2,param_3);
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    FUN_00001474(s_reg__02d___s____0x_016lx__reg__0_00009ae8,(long)(local_14 << 1),
                 *(undefined8 *)(&DAT_0000a238 + (long)(local_14 * 2) * 0x10),
                 *(undefined8 *)((long)(local_14 * 2) * 8 + param_4),(long)(local_14 * 2 + 1),
                 *(undefined8 *)(&DAT_0000a238 + (long)(local_14 * 2 + 1) * 0x10),
                 *(undefined8 *)(((long)(local_14 * 2) + 1) * 8 + param_4));
  }
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    FUN_00001474(s_freg__02d___s____0x_016lx__f___f_00009b20,(long)(local_14 << 1),
                 *(undefined8 *)(&DAT_0000a438 + (long)(local_14 * 2) * 0x10),
                 *(undefined8 *)((long)(local_14 * 2) * 8 + param_5),in_register_00000480,
                 (long)(local_14 * 2 + 1),
                 *(undefined8 *)(&DAT_0000a438 + (long)(local_14 * 2 + 1) * 0x10),
                 *(undefined8 *)(((long)(local_14 * 2) + 1) * 8 + param_5));
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00001770) */
/* WARNING: Removing unreachable block (ram,0x00001786) */

void FUN_00001762(int param_1)

{
  undefined8 in_mcycle;
  undefined8 in_mhartid;
  
  FUN_00001474(s_W___lu___s__sys_exit_called_by_c_00009b70,in_mcycle,DAT_0000b898,in_mhartid,
               (long)param_1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x000017ca) */

void FUN_000017a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_mcycle;
  
  FUN_00001474(s_E___lu___s__Unsupported_syscall___00009ba8,in_mcycle,DAT_0000b898,param_4,param_1,
               param_2,param_3);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



undefined8 FUN_000017fe(void)

{
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00001834) */

ulong FUN_0000180e(ulong param_1)

{
  ulong uVar1;
  undefined8 in_mcycle;
  ulong local_18;
  
  if (param_1 == 0) {
    local_18 = 0x2c1c0;
    uVar1 = DAT_0000b8a0;
  }
  else {
    uVar1 = param_1;
    local_18 = param_1;
    if (0x7feff < param_1) {
      FUN_00001474(s_E___lu___s__Out_of_memory_00009be8,in_mcycle,DAT_0000b898);
      local_18 = 0xfffffffffffffff4;
      uVar1 = DAT_0000b8a0;
    }
  }
  DAT_0000b8a0 = uVar1;
  return local_18;
}



long FUN_0000189a(int param_1,char *param_2,long param_3)

{
  long lVar1;
  long local_28;
  
  lVar1 = param_3;
  if ((param_1 == 1) || (param_1 == 2)) {
    for (; (local_28 = param_3, lVar1 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
      FUN_00007340(*param_2);
      lVar1 = lVar1 + -1;
    }
  }
  else {
    local_28 = -0x58;
  }
  return local_28;
}



undefined8 FUN_00001922(long param_1)

{
  if (param_1 != 0) {
    FUN_0000818c(param_1,0,0x68);
  }
  return 0xffffffffffffffa8;
}



undefined8 FUN_00001964(void)

{
  return 0;
}



undefined8 FUN_00001986(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 != (ulong *)0x0) {
    uVar2 = *(ulong *)(DAT_0000b880 + 0xbff8);
    uVar1 = FUN_00006d26(3);
    uVar2 = uVar2 / (uVar1 / 50000000);
    *param_1 = uVar2 / 1000000;
    param_1[1] = uVar2 % 1000000;
  }
  return 0;
}



long FUN_00001a2a(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(&DAT_0000a1f8 +
                      (long)(int)(uint)(byte)(&DAT_0000a0f8)[*(ulong *)(param_2 + 0x88) & 0xff] * 8)
          )(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
            *(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),
            *(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78),
            *(undefined8 *)(param_2 + 0x88));
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  return param_1 + 4;
}



/* WARNING: Removing unreachable block (ram,0x00001e10) */

ulong FUN_00001aea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_a1;
  long extraout_a1_00;
  long extraout_a1_01;
  uint *extraout_a1_02;
  long lVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 in_mcycle;
  int iStack_e4;
  ulong uStack_e0;
  uint uStack_d8;
  
  FUN_00001562(s_misaligned_fetch_00009c08,param_1,param_4);
  uVar5 = FUN_00001762(0x539);
  uVar6 = extraout_a1;
  FUN_00001562(s_fault_fetch_00009c20,uVar5,param_3);
  uVar5 = FUN_00001762(0x539);
  lVar12 = extraout_a1_00;
  FUN_00001562(s_illegal_instruction_00009c30,uVar5,param_2);
  uVar5 = FUN_00001762(0x539);
  lVar7 = extraout_a1_01;
  FUN_00001562(s_breakpoint_00009c48,uVar5,uVar6);
  uVar6 = FUN_00001762(0x539);
  bVar1 = (*(ushort *)extraout_a1_02 & 3) != 3;
  bVar4 = false;
  uStack_e0 = 0;
  uVar10 = (ulong)bVar1;
  if (bVar1) {
LAB_00001e88:
    FUN_00001562(s_misaligned_load_00009cc8,uVar6,extraout_a1_02,lVar7,lVar12);
    FUN_00001762(0x539);
  }
  else {
    uVar3 = *extraout_a1_02;
    bVar8 = (byte)uVar3 & 0x7f;
    bVar9 = (byte)(uVar3 >> 7) & 0x1f;
    uStack_d8 = uVar3 >> 0x14;
    uVar2 = 1 << ((byte)(uVar3 >> 0xc) & 3);
    if (bVar8 != 3) {
      uVar10 = 7;
      if (bVar8 != 7) goto LAB_00001e88;
      bVar4 = true;
    }
    if ((int)uStack_d8 >> 0xb != 0) {
      uStack_d8 = ~(uStack_d8 & 0x3ff);
    }
    lVar11 = (long)(int)uStack_d8 + *(long *)((ulong)((byte)(uVar3 >> 0xf) & 0x1f) * 8 + lVar7);
    for (iStack_e4 = 0; iStack_e4 < (int)(uVar2 & 0xff); iStack_e4 = iStack_e4 + 1) {
      uStack_e0 = (ulong)*(byte *)(lVar11 + iStack_e4) << ((long)(iStack_e4 * 8) & 0x3fU) |
                  uStack_e0;
    }
    if ((bool)((bVar4 ^ 1U) & (uVar3 >> 0xe & 1) == 0)) {
      uVar3 = uVar2 & 0xff;
      if (uVar3 == 2) {
        uStack_e0 = (ulong)(int)(short)uStack_e0;
      }
      else if (uVar3 == 4) {
        uStack_e0 = (ulong)(int)uStack_e0;
      }
      else if (uVar3 == 1) {
        uStack_e0 = (ulong)(int)(char)uStack_e0;
      }
    }
    if (bVar4) {
      *(ulong *)((ulong)bVar9 * 8 + lVar12) = uStack_e0;
    }
    else {
      *(ulong *)((ulong)bVar9 * 8 + lVar7) = uStack_e0;
    }
    FUN_00001474(s_V___lu___s__misaligned_load_reco_00009c58,in_mcycle,DAT_0000b898,extraout_a1_02,
                 uVar2 & 0xff,lVar11,bVar9,uStack_e0);
    if (bVar1) {
      lVar12 = 2;
    }
    else {
      lVar12 = 4;
    }
    uVar10 = lVar12 + (long)extraout_a1_02;
  }
  return uVar10;
}



/* WARNING: Removing unreachable block (ram,0x000020b8) */

ulong FUN_00001eb6(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint *extraout_a1;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 in_mcycle;
  int iStack_54;
  ulong uStack_50;
  uint uStack_48;
  
  FUN_00001562(s_fault_load_00009cd8,param_1,param_4);
  uVar5 = FUN_00001762(0x539);
  bVar1 = (*(ushort *)extraout_a1 & 3) != 3;
  bVar4 = false;
  uVar9 = (ulong)bVar1;
  if (bVar1) {
LAB_0000211e:
    FUN_00001562(s_misaligned_store_00009d50,uVar5,extraout_a1,param_2,param_3);
    FUN_00001762(0x539);
  }
  else {
    uVar3 = *extraout_a1;
    bVar6 = (byte)uVar3 & 0x7f;
    bVar7 = (byte)(uVar3 >> 0x14) & 0x1f;
    uVar8 = uVar3 >> 7 & 0x1f;
    uStack_48 = uVar3 >> 0x14 & 0xfe0 | uVar8;
    uVar2 = 1 << ((byte)(uVar3 >> 0xc) & 7);
    if (bVar6 != 0x23) {
      uVar9 = 0x27;
      if (bVar6 != 0x27) goto LAB_0000211e;
      bVar4 = true;
    }
    if ((int)uStack_48 >> 0xb != 0) {
      uStack_48 = ~(uVar3 >> 0x14 & 0x3e0 | uVar8);
    }
    lVar10 = (long)(int)uStack_48 + *(long *)((ulong)((byte)(uVar3 >> 0xf) & 0x1f) * 8 + param_2);
    if (bVar4) {
      uStack_50 = *(ulong *)((ulong)bVar7 * 8 + param_3);
    }
    else {
      uStack_50 = *(ulong *)((ulong)bVar7 * 8 + param_2);
    }
    for (iStack_54 = 0; iStack_54 < (int)(uVar2 & 0xff); iStack_54 = iStack_54 + 1) {
      *(char *)(lVar10 + iStack_54) = (char)(uStack_50 >> ((long)(iStack_54 * 8) & 0x3fU));
    }
    FUN_00001474(s_V___lu___s__misaligned_store_rec_00009ce8,in_mcycle,DAT_0000b898,extraout_a1,
                 uVar2 & 0xff,lVar10,bVar7,uStack_50);
    if (bVar1) {
      lVar10 = 2;
    }
    else {
      lVar10 = 4;
    }
    uVar9 = lVar10 + (long)extraout_a1;
  }
  return uVar9;
}



undefined8 FUN_0000214c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_a1;
  
  FUN_00001562(s_fault_store_00009d68,param_1,param_4);
  lVar1 = FUN_00001762(0x539);
  uVar2 = (**(code **)(&DAT_0000a638 + lVar1 * 8))
                    (lVar1,extraout_a1,param_2,param_3,*(code **)(&DAT_0000a638 + lVar1 * 8));
  return uVar2;
}



undefined8 FUN_000021d0(uint param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_14;
  
  if ((param_1 & 0xfff) == 0) {
    if (param_2 == 0) {
      FUN_00001474(s____ERROR__length_must_be_larger_t_0000a770);
      uVar3 = 0xffffffffffffffff;
    }
    else {
      FUN_000036ac(1);
      FUN_00003a1e();
      iVar1 = (uint)((param_2 & 0xfff) != 0) + (param_2 >> 0xc);
      FUN_00003952();
      FUN_00001474(s____Erasing_flash_from_0x_08X_to_0_0000a7a0,(long)(int)param_1,
                   (long)(int)(iVar1 * 0x1000 + param_1 + -1));
      for (local_14 = 0; (int)local_14 < iVar1; local_14 = local_14 + 1) {
        FUN_00001474(&DAT_0000a7d0);
        if ((local_14 != 0) && ((local_14 & 0x3f) == 0)) {
          FUN_00001474(&DAT_0000a730);
        }
        FUN_000039ae((long)(int)(local_14 * 0x1000 + param_1));
        lVar2 = FUN_0000743c();
        if (lVar2 != 0) {
          FUN_00001474(s____Interrupted__0000a7d8);
          return 0xffffffffffffffff;
        }
      }
      FUN_00001474(&DAT_0000a730);
      uVar3 = 0;
    }
  }
  else {
    FUN_00001474(s____ERROR__floffset_must_be_align_0000a738);
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



undefined8 FUN_0000231a(int param_1,uint param_2,long param_3)

{
  uint uVar1;
  long local_30;
  uint local_28;
  int local_24;
  uint local_14;
  
  local_14 = 0;
  FUN_00001474(s____Writing_data_into_flash_from_0_0000a7f0,(long)param_1,
               (long)(int)(param_2 + param_1 + -1));
  FUN_000036ac(1);
  FUN_00003a1e();
  local_30 = param_3;
  local_28 = param_2;
  local_24 = param_1;
  while (local_28 != 0) {
    uVar1 = local_28;
    if (0x80 < local_28) {
      uVar1 = 0x80;
    }
    FUN_00003bc6((long)local_24,local_30,(long)(int)uVar1);
    local_24 = uVar1 + local_24;
    local_30 = (ulong)uVar1 + local_30;
    local_28 = local_28 - uVar1;
    local_14 = local_14 + 1;
    FUN_00001474(&DAT_0000a7d0);
    if ((local_14 & 0x3f) == 0) {
      FUN_00001474(&DAT_0000a730);
    }
  }
  FUN_00001474(&DAT_0000a730);
  return 0;
}



ushort FUN_00002410(ushort param_1,byte *param_2,int param_3)

{
  byte *local_30;
  ushort local_22;
  int local_14;
  
  local_30 = param_2;
  local_22 = param_1;
  for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 1) {
    local_22 = local_22 << 8 ^
               *(ushort *)(&DAT_0000ab10 + (long)(int)((uint)*local_30 ^ (uint)(local_22 >> 8)) * 2)
    ;
    local_30 = local_30 + 1;
  }
  return local_22;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_000024ba(uint3 *param_1,byte param_2,uint3 *param_3,byte param_4,long param_5,int param_6,
            undefined4 param_7,uint param_8)

{
  int iVar1;
  undefined3 uVar2;
  long lVar3;
  byte bVar4;
  uint in_stack_00000000;
  undefined4 local_28;
  int local_14;
  
  local_28 = 0;
  if ((param_6 == 0) || (param_6 == 1)) {
    in_stack_00000000 = in_stack_00000000 + 0xf & 0xfffffff0;
  }
  _DAT_50450028 = _DAT_50450028 | 1;
  for (local_14 = 0; local_14 < (int)(uint)(param_2 >> 2); local_14 = local_14 + 1) {
    *(undefined4 *)((long)local_14 * 4 + 0x50450000) =
         *(undefined4 *)((long)(int)((uint)param_2 + local_14 * -4) + -4 + (long)param_1);
  }
  bVar4 = param_2 & 3;
  if ((param_2 & 3) != 0) {
    if (bVar4 == 2) {
      local_28 = (uint)*(ushort *)param_1;
    }
    else if (bVar4 == 3) {
      local_28 = (uint)*param_1;
    }
    else if (bVar4 == 1) {
      local_28 = (uint)*(byte *)param_1;
    }
    *(uint *)((long)(int)(uint)(param_2 >> 2) * 4 + 0x50450000) = local_28;
  }
  for (local_14 = 0; local_14 < (int)(uint)(param_4 >> 2); local_14 = local_14 + 1) {
    *(undefined4 *)(((long)local_14 + 4) * 4 + 0x50450008) =
         *(undefined4 *)((long)(int)((uint)param_4 + local_14 * -4) + -4 + (long)param_3);
  }
  bVar4 = param_4 & 3;
  if ((param_4 & 3) != 0) {
    uVar2 = local_28._1_3_;
    if (bVar4 == 2) {
      local_28 = CONCAT22(local_28._2_2_,*(undefined2 *)param_3);
    }
    else if (bVar4 == 3) {
      local_28 = (uint)*param_3;
    }
    else if (bVar4 == 1) {
      local_28 = CONCAT31(uVar2,*(undefined *)param_3);
    }
    *(uint *)(((long)(int)(uint)(param_4 >> 2) + 4) * 4 + 0x50450008) = local_28;
  }
  _DAT_50450034 = param_8 - 1;
  _DAT_5045003c = in_stack_00000000 - 1;
  _DAT_50450064 = _DAT_50450064 | 1;
  _DAT_50450010 = param_7;
  _DAT_50450014 = param_6;
  if (param_6 == 3) {
    for (local_14 = 0; local_14 < (int)(param_8 >> 2); local_14 = local_14 + 1) {
      iVar1 = *(int *)(param_5 + local_14 * 4);
      do {
        lVar3 = FUN_00002912();
      } while (lVar3 == 0);
      FUN_000028d2((long)iVar1);
    }
    iVar1 = (param_8 >> 2) << 2;
    param_8 = param_8 & 3;
    if (param_8 != 0) {
      uVar2 = local_28._1_3_;
      if (param_8 == 2) {
        local_28._0_2_ =
             CONCAT11(*(undefined *)((long)iVar1 + 1 + param_5),*(undefined *)(iVar1 + param_5));
      }
      else if (param_8 == 3) {
        local_28._0_2_ =
             CONCAT11(*(undefined *)((long)iVar1 + 1 + param_5),*(undefined *)(iVar1 + param_5));
        local_28 = (uint)CONCAT12(*(undefined *)((long)iVar1 + 2 + param_5),(undefined2)local_28);
      }
      else {
        if (param_8 != 1) {
          return 0;
        }
        local_28 = CONCAT31(uVar2,*(undefined *)(iVar1 + param_5));
      }
      do {
        lVar3 = FUN_00002912();
      } while (lVar3 == 0);
      FUN_000028d2(local_28);
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000028d2(undefined4 param_1)

{
  _DAT_50450044 = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000028f2(undefined4 param_1)

{
  _DAT_50450040 = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00002912(void)

{
  return (long)_DAT_5045004c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0000292a(void)

{
  return (long)_DAT_50450068;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00002942(void)

{
  return (long)_DAT_50450060;
}



undefined8 FUN_00002958(long param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_40;
  int local_28;
  uint local_24;
  
  uVar4 = param_3 + 0xf & 0xfffffff0;
  local_24 = param_3 >> 2;
  for (local_28 = 0; local_28 < (int)local_24; local_28 = local_28 + 1) {
    iVar1 = *(int *)(param_1 + local_28 * 4);
    do {
      lVar3 = FUN_00002912();
    } while (lVar3 == 0);
    FUN_000028f2((long)iVar1);
  }
  iVar1 = local_24 << 2;
  uVar5 = param_3 & 3;
  if (uVar5 != 0) {
    if (uVar5 == 2) {
      local_40._0_2_ =
           CONCAT11(*(undefined *)((long)iVar1 + 1 + param_1),*(undefined *)(iVar1 + param_1));
      local_40 = (uint)(ushort)local_40;
    }
    else if (uVar5 == 3) {
      local_40._0_2_ =
           CONCAT11(*(undefined *)((long)iVar1 + 1 + param_1),*(undefined *)(iVar1 + param_1));
      local_40 = (uint)CONCAT12(*(undefined *)((long)iVar1 + 2 + param_1),(ushort)local_40);
    }
    else {
      if (uVar5 != 1) {
        return 0;
      }
      local_40 = (uint)*(byte *)(iVar1 + param_1);
    }
    do {
      lVar3 = FUN_00002912();
    } while (lVar3 == 0);
    FUN_000028f2(local_40);
  }
  if ((param_4 == 0) || (param_4 == 1)) {
    for (local_28 = 0; local_28 < (int)(uVar4 - param_3 >> 2); local_28 = local_28 + 1) {
      do {
        lVar3 = FUN_00002912();
      } while (lVar3 == 0);
      FUN_000028f2(0);
    }
    local_24 = (int)(uVar4 + ((uint)((int)(param_3 + 0xf) >> 0x1f) >> 0x1e)) >> 2;
  }
  for (local_28 = 0; local_28 < (int)local_24; local_28 = local_28 + 1) {
    do {
      lVar3 = FUN_0000292a();
    } while (lVar3 == 0);
    uVar2 = FUN_00002942();
    *(undefined4 *)(param_2 + local_28 * 4) = uVar2;
  }
  if ((param_4 == 3) && (uVar5 != 0)) {
    do {
      lVar3 = FUN_0000292a();
    } while (lVar3 == 0);
    uVar2 = FUN_00002942();
    local_40._0_1_ = (undefined)uVar2;
    local_40._1_1_ = (undefined)((uint)uVar2 >> 8);
    if (uVar5 == 2) {
      *(undefined *)(param_2 + (int)(local_24 * 4)) = (undefined)local_40;
      *(undefined *)((long)(local_28 * 4) + 1 + param_2) = local_40._1_1_;
    }
    else if (uVar5 == 3) {
      *(undefined *)(param_2 + (int)(local_24 * 4)) = (undefined)local_40;
      *(undefined *)((long)(local_28 * 4) + 1 + param_2) = local_40._1_1_;
      local_40._2_1_ = (undefined)((uint)uVar2 >> 0x10);
      *(undefined *)((long)(local_28 * 4) + 2 + param_2) = local_40._2_1_;
    }
    else {
      if (uVar5 != 1) {
        return 0;
      }
      *(undefined *)(param_2 + (int)(local_24 * 4)) = (undefined)local_40;
    }
  }
  return 1;
}



undefined8 FUN_00002c92(long param_1,long param_2,uint param_3,int param_4)

{
  undefined4 local_14;
  
  local_14 = 0;
  if (0x4f < param_3) {
    for (local_14 = 0; local_14 < param_3 / 0x50; local_14 = local_14 + 1) {
      FUN_00002958(param_1 + (ulong)(local_14 * 0x50),(ulong)(local_14 * 0x50) + param_2,0x50,
                   (long)param_4);
    }
  }
  if (param_3 % 0x50 != 0) {
    FUN_00002958(param_1 + (ulong)(local_14 * 0x50),(ulong)(local_14 * 0x50) + param_2,
                 param_3 % 0x50,(long)param_4);
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x00002dac) */

undefined8 FUN_00002da6(void)

{
  long in_mhartid;
  
  *(undefined8 *)(in_mhartid * 0x10 + gp + -0x738) = 0;
  *(undefined8 *)(in_mhartid * 0x10 + gp + -0x730) = 0;
  return 0;
}



undefined8 FUN_00002df6(void)

{
  return 0;
}



undefined8 FUN_00002e16(void)

{
  return 0;
}



undefined8 FUN_00002e36(ulong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    puVar1 = (uint *)(param_1 * 4 + 0x2000000);
    *puVar1 = *puVar1 | 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



undefined8 FUN_00002e6c(ulong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    if ((*(uint *)(param_1 * 4 + 0x2000000) & 1) == 0) {
      uVar2 = 0;
    }
    else {
      puVar1 = (uint *)(param_1 * 4 + 0x2000000);
      *puVar1 = *puVar1 & 0xfffffffe;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* WARNING: Removing unreachable block (ram,0x00002ec8) */

undefined8 FUN_00002eba(undefined8 param_1,undefined8 param_2)

{
  long in_mhartid;
  
  *(undefined8 *)(in_mhartid * 0x10 + gp + -0x738) = param_1;
  *(undefined8 *)(in_mhartid * 0x10 + gp + -0x730) = param_2;
  return 0;
}



undefined8 FUN_00002f06(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00002eba(0,0);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00002f32) */
/* WARNING: Removing unreachable block (ram,0x00002f42) */

undefined8 FUN_00002f22(undefined8 param_1)

{
  code *pcVar1;
  long in_mhartid;
  
  if (*(long *)(in_mhartid * 0x28 + gp + -0x770) != 0) {
    pcVar1 = *(code **)(in_mhartid * 0x28 + gp + -0x770);
    (*pcVar1)(*(undefined8 *)(in_mhartid * 0x28 + gp + -0x768),pcVar1);
  }
  if ((*(long *)(in_mhartid * 0x28 + gp + -0x778) == 0) &&
     (*(long *)(in_mhartid * 0x28 + gp + -0x780) != 0)) {
    *(long *)((in_mhartid + 0x800) * 8 + 0x2000000) =
         *(long *)((in_mhartid + 0x800) * 8 + 0x2000000) +
         *(long *)(in_mhartid * 0x28 + gp + -0x780);
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00003094) */

undefined8 FUN_00003084(undefined8 param_1)

{
  code *pcVar1;
  long in_mhartid;
  
  FUN_00002e6c(in_mhartid);
  if (*(long *)(in_mhartid * 0x10 + gp + -0x738) != 0) {
    pcVar1 = *(code **)(in_mhartid * 0x10 + gp + -0x738);
    (*pcVar1)(*(undefined8 *)(in_mhartid * 0x10 + gp + -0x730),pcVar1);
  }
  return param_1;
}



undefined8 FUN_00003118(byte *param_1,char param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *local_38;
  uint local_30;
  char local_29;
  byte *local_28;
  uint local_14;
  
  **(uint **)(gp + -0x7b8) =
       3 << ((long)(int)(uint)*(byte *)(gp + -0x7af) & 0x1fU) |
       7 << ((long)(int)(uint)*(byte *)(gp + -0x7b0) & 0x1fU);
  *(uint *)(*(long *)(gp + -0x7b8) + 4) = param_4 - 1;
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 8) = 1;
  local_29 = param_2;
  local_28 = param_1;
  while (local_29 != '\0') {
    *(uint *)(*(long *)(gp + -0x7b8) + 0x60) = (uint)*local_28;
    local_29 = local_29 + -1;
    local_28 = local_28 + 1;
  }
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x10) = 1;
  local_38 = param_3;
  for (local_30 = param_4; local_30 != 0; local_30 = local_30 - uVar2) {
    uVar1 = *(uint *)(*(long *)(gp + -0x7b8) + 0x24);
    uVar2 = local_30;
    if (uVar1 < local_30) {
      uVar2 = uVar1;
    }
    for (local_14 = 0; local_14 < uVar2; local_14 = local_14 + 1) {
      *local_38 = (char)*(undefined4 *)(*(long *)(gp + -0x7b8) + 0x60);
      local_38 = local_38 + 1;
    }
  }
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x10) = 0;
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 8) = 0;
  return 0;
}



undefined8 FUN_00003258(byte *param_1,char param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte *local_38;
  uint local_30;
  char local_29;
  byte *local_28;
  uint local_14;
  
  **(uint **)(gp + -0x7b8) =
       1 << ((long)(int)(uint)*(byte *)(gp + -0x7af) & 0x1fU) |
       7 << ((long)(int)(uint)*(byte *)(gp + -0x7b0) & 0x1fU);
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 8) = 1;
  local_29 = param_2;
  local_28 = param_1;
  while (local_29 != '\0') {
    *(uint *)(*(long *)(gp + -0x7b8) + 0x60) = (uint)*local_28;
    local_29 = local_29 + -1;
    local_28 = local_28 + 1;
  }
  uVar1 = 0x20 - *(int *)(*(long *)(gp + -0x7b8) + 0x20);
  local_30 = param_4;
  if (uVar1 < param_4) {
    local_30 = uVar1;
  }
  local_38 = param_3;
  for (local_14 = 0; local_14 < local_30; local_14 = local_14 + 1) {
    *(uint *)(*(long *)(gp + -0x7b8) + 0x60) = (uint)*local_38;
    local_38 = local_38 + 1;
  }
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x10) = 1;
  for (local_30 = param_4 - local_30; local_30 != 0; local_30 = local_30 - uVar2) {
    uVar1 = 0x20 - *(int *)(*(long *)(gp + -0x7b8) + 0x20);
    uVar2 = local_30;
    if (uVar1 < local_30) {
      uVar2 = uVar1;
    }
    for (local_14 = 0; local_14 < uVar2; local_14 = local_14 + 1) {
      *(uint *)(*(long *)(gp + -0x7b8) + 0x60) = (uint)*local_38;
      local_38 = local_38 + 1;
    }
  }
  do {
  } while ((*(uint *)(*(long *)(gp + -0x7b8) + 0x28) & 5) != 4);
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x10) = 0;
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 8) = 0;
  return 0;
}



undefined8 FUN_0000341c(undefined4 *param_1,char param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *local_38;
  uint local_30;
  char local_29;
  undefined4 *local_28;
  uint local_14;
  
  *(uint *)(*(long *)(gp + -0x7b8) + 4) = param_4 - 1;
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 8) = 1;
  local_29 = param_2;
  local_28 = param_1;
  while (local_29 != '\0') {
    *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x60) = *local_28;
    local_29 = local_29 + -1;
    local_28 = local_28 + 1;
  }
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x10) = 1;
  local_38 = param_3;
  for (local_30 = param_4; local_30 != 0; local_30 = local_30 - uVar2) {
    uVar1 = *(uint *)(*(long *)(gp + -0x7b8) + 0x24);
    uVar2 = local_30;
    if (uVar1 < local_30) {
      uVar2 = uVar1;
    }
    for (local_14 = 0; local_14 < uVar2; local_14 = local_14 + 1) {
      *local_38 = (char)*(undefined4 *)(*(long *)(gp + -0x7b8) + 0x60);
      local_38 = local_38 + 1;
    }
  }
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x10) = 0;
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 8) = 0;
  return 0;
}



undefined8 FUN_00003522(undefined4 *param_1,char param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte *local_38;
  uint local_30;
  char local_29;
  undefined4 *local_28;
  uint local_14;
  
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 8) = 1;
  local_29 = param_2;
  local_28 = param_1;
  while (local_29 != '\0') {
    *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x60) = *local_28;
    local_29 = local_29 + -1;
    local_28 = local_28 + 1;
  }
  uVar1 = 0x20 - *(int *)(*(long *)(gp + -0x7b8) + 0x20);
  local_30 = param_4;
  if (uVar1 < param_4) {
    local_30 = uVar1;
  }
  local_38 = param_3;
  for (local_14 = 0; local_14 < local_30; local_14 = local_14 + 1) {
    *(uint *)(*(long *)(gp + -0x7b8) + 0x60) = (uint)*local_38;
    local_38 = local_38 + 1;
  }
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x10) = 1;
  for (local_30 = param_4 - local_30; local_30 != 0; local_30 = local_30 - uVar2) {
    uVar1 = 0x20 - *(int *)(*(long *)(gp + -0x7b8) + 0x20);
    uVar2 = local_30;
    if (uVar1 < local_30) {
      uVar2 = uVar1;
    }
    for (local_14 = 0; local_14 < uVar2; local_14 = local_14 + 1) {
      *(uint *)(*(long *)(gp + -0x7b8) + 0x60) = (uint)*local_38;
      local_38 = local_38 + 1;
    }
  }
  do {
  } while ((*(uint *)(*(long *)(gp + -0x7b8) + 0x28) & 5) != 4);
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x10) = 0;
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 8) = 0;
  return 0;
}



undefined8 FUN_000036ac(char param_1)

{
  undefined local_18;
  undefined local_17;
  
  local_18 = 0xff;
  local_17 = 0xff;
  FUN_00005752(0x1d);
  if (param_1 == '\0') {
    FUN_0000534c(7);
    FUN_00005752(0xf);
    FUN_000057de(9,0);
    FUN_00004648(8,0xc);
    FUN_00004648(9,0x11);
    FUN_00004648(10,4);
    FUN_00004648(0xb,5);
    FUN_00004648(0xc,6);
    FUN_00004648(0xd,7);
    *(undefined8 *)(gp + -0x7b8) = 0x52000000;
    *(undefined *)(gp + -0x7b0) = 0x10;
    *(undefined *)(gp + -0x7af) = 8;
    *(undefined *)(gp + -0x7ae) = 0x15;
  }
  else {
    FUN_00005798(0x12);
    FUN_00005752(0x12);
    *(undefined8 *)(gp + -0x7b8) = 0x54000000;
    *(undefined *)(gp + -0x7b0) = 0;
    *(undefined *)(gp + -0x7af) = 10;
    *(undefined *)(gp + -0x7ae) = 0x16;
  }
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x14) = 2;
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x2c) = 0;
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0x10) = 0;
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 8) = 0;
  *(code **)(gp + -0x7c8) = FUN_00003a94;
  *(code **)(gp + -0x7c0) = FUN_00004090;
  FUN_00003258(&local_18,2,0,0);
  return 0;
}



undefined8 FUN_000037d6(void)

{
  undefined local_18 [8];
  
  local_18[0] = 6;
  FUN_00003258(local_18,1,0,0);
  return 0;
}



undefined8 FUN_00003800(undefined param_1,undefined param_2)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  local_18 = 1;
  local_17 = param_1;
  local_16 = param_2;
  FUN_000037d6();
  FUN_00003258(&local_18,3,0,0);
  return 0;
}



undefined8 FUN_0000384c(undefined *param_1)

{
  undefined local_20 [8];
  undefined local_18 [8];
  
  local_18[0] = 5;
  FUN_00003118(local_18,1,local_20,1);
  *param_1 = local_20[0];
  return 0;
}



undefined8 FUN_0000388a(undefined *param_1)

{
  undefined local_20 [8];
  undefined local_18 [8];
  
  local_18[0] = 0x35;
  FUN_00003118(local_18,1,local_20,1);
  *param_1 = local_20[0];
  return 0;
}



bool FUN_000038ca(void)

{
  byte local_18;
  undefined auStack_17 [3];
  uint local_14;
  
  FUN_0000384c(&local_18);
  FUN_0000388a(auStack_17);
  local_14 = 0;
  while ((local_14 < 0xffffff && (FUN_0000384c(&local_18), (local_18 & 1) != 0))) {
    local_14 = local_14 + 1;
  }
  FUN_0000388a(auStack_17);
  return 0xfffffe < local_14;
}



long FUN_00003952(void)

{
  int iVar1;
  byte local_12 [2];
  
  FUN_0000384c(local_12 + 1);
  FUN_0000388a(local_12);
  local_12[1] = 0;
  FUN_00003800(0,local_12[0] & 3);
  FUN_0000384c(local_12 + 1);
  FUN_0000388a(local_12);
  iVar1 = FUN_000038ca();
  return (long)iVar1;
}



long FUN_000039ae(undefined8 param_1)

{
  int iVar1;
  undefined local_18;
  undefined uStack_17;
  undefined uStack_16;
  undefined uStack_15;
  
  _local_18 = CONCAT13((char)param_1,
                       CONCAT12((char)((ulong)param_1 >> 8),
                                CONCAT11((char)((ulong)param_1 >> 0x10),0x20)));
  FUN_000037d6();
  FUN_00003258(&local_18,4,0,0);
  iVar1 = FUN_000038ca();
  return (long)iVar1;
}



long FUN_00003a1e(void)

{
  int iVar1;
  byte local_12;
  undefined local_11;
  
  FUN_0000388a(&local_12);
  if ((local_12 & 2) == 0) {
    local_12 = local_12 | 2;
    FUN_0000384c(&local_11);
    FUN_00003800(local_11,local_12);
  }
  *(code **)(gp + -0x7c8) = FUN_00003b14;
  *(code **)(gp + -0x7c0) = FUN_000040ce;
  iVar1 = FUN_000038ca();
  return (long)iVar1;
}



long FUN_00003a94(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined local_18;
  undefined uStack_17;
  undefined uStack_16;
  undefined uStack_15;
  
  _local_18 = CONCAT13((char)param_1,
                       CONCAT12((char)((ulong)param_1 >> 8),
                                CONCAT11((char)((ulong)param_1 >> 0x10),2)));
  FUN_000037d6();
  FUN_00003258(&local_18,4,param_2,(long)param_3);
  iVar1 = FUN_000038ca();
  return (long)iVar1;
}



long FUN_00003b14(undefined4 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0x32;
  local_14 = param_1;
  FUN_000037d6();
  **(uint **)(gp + -0x7b8) =
       2 << ((long)(int)(uint)*(byte *)(gp + -0x7ae) & 0x1fU) |
       7 << ((long)(int)(uint)*(byte *)(gp + -0x7b0) & 0x1fU) |
       1 << ((long)(int)(uint)*(byte *)(gp + -0x7af) & 0x1fU);
  *(undefined4 *)(*(long *)(gp + -0x7b8) + 0xf4) = 0x218;
  FUN_00003522(&local_18,2,param_2,(long)param_3);
  iVar1 = FUN_000038ca();
  return (long)iVar1;
}



long FUN_00003bc6(uint param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_14;
  
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_1;
  while (local_28 != 0) {
    local_14 = 0x100 - (local_24 & 0xff);
    if (local_28 < local_14) {
      local_14 = local_28;
    }
    local_28 = local_28 - local_14;
    for (; local_14 != 0; local_14 = local_14 - uVar2) {
      uVar2 = local_14;
      if (0x20 < local_14) {
        uVar2 = 0x20;
      }
      (**(code **)(gp + -0x7c8))
                ((long)(int)local_24,local_30,(long)(int)uVar2,*(code **)(gp + -0x7c8));
      local_24 = uVar2 + local_24;
      local_30 = (ulong)uVar2 + local_30;
    }
  }
  iVar1 = FUN_000038ca();
  return (long)iVar1;
}



undefined8 FUN_00003ca2(int param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined uVar1;
  undefined uVar2;
  undefined4 local_18;
  int local_14;
  
  uVar2 = (undefined)((uint)param_1 >> 8);
  uVar1 = (undefined)((uint)param_1 >> 0x10);
  switch(param_4) {
  case 0:
    local_18._0_2_ = CONCAT11(uVar1,3);
    local_18._0_3_ = CONCAT12(uVar2,(undefined2)local_18);
    local_18 = CONCAT13((char)param_1,(undefined3)local_18);
    FUN_00003118(&local_18,4,param_2,(long)param_3);
    break;
  case 1:
    local_18._0_2_ = CONCAT11(uVar1,0xb);
    local_18._0_3_ = CONCAT12(uVar2,(undefined2)local_18);
    local_18 = CONCAT13((char)param_1,(undefined3)local_18);
    local_14 = CONCAT31(local_14._1_3_,0xff);
    FUN_00003118(&local_18,5,param_2,(long)param_3);
    break;
  case 2:
    local_18 = 0x3b;
    **(uint **)(gp + -0x7b8) =
         1 << ((long)(int)(uint)*(byte *)(gp + -0x7ae) & 0x1fU) |
         7 << ((long)(int)(uint)*(byte *)(gp + -0x7b0) & 0x1fU) |
         2 << ((long)(int)(uint)*(byte *)(gp + -0x7af) & 0x1fU);
    *(undefined4 *)(*(long *)(gp + -0x7b8) + 0xf4) = 0x4218;
    local_14 = param_1;
    FUN_0000341c(&local_18,2,param_2,(long)param_3);
    break;
  case 3:
    local_18 = 0xbb;
    local_14 = param_1 * 0x100;
    **(uint **)(gp + -0x7b8) =
         1 << ((long)(int)(uint)*(byte *)(gp + -0x7ae) & 0x1fU) |
         7 << ((long)(int)(uint)*(byte *)(gp + -0x7b0) & 0x1fU) |
         2 << ((long)(int)(uint)*(byte *)(gp + -0x7af) & 0x1fU);
    *(undefined4 *)(*(long *)(gp + -0x7b8) + 0xf4) = 0x221;
    FUN_0000341c(&local_18,2,param_2,(long)param_3);
    break;
  case 4:
    local_18 = 0x6b;
    **(uint **)(gp + -0x7b8) =
         2 << ((long)(int)(uint)*(byte *)(gp + -0x7ae) & 0x1fU) |
         7 << ((long)(int)(uint)*(byte *)(gp + -0x7b0) & 0x1fU) |
         2 << ((long)(int)(uint)*(byte *)(gp + -0x7af) & 0x1fU);
    *(undefined4 *)(*(long *)(gp + -0x7b8) + 0xf4) = 0x4218;
    local_14 = param_1;
    FUN_0000341c(&local_18,2,param_2,(long)param_3);
    break;
  case 5:
    local_18 = 0xeb;
    local_14 = param_1 * 0x100;
    **(uint **)(gp + -0x7b8) =
         2 << ((long)(int)(uint)*(byte *)(gp + -0x7ae) & 0x1fU) |
         7 << ((long)(int)(uint)*(byte *)(gp + -0x7b0) & 0x1fU) |
         2 << ((long)(int)(uint)*(byte *)(gp + -0x7af) & 0x1fU);
    *(undefined4 *)(*(long *)(gp + -0x7b8) + 0xf4) = 0x2221;
    FUN_0000341c(&local_18,2,param_2,(long)param_3);
  }
  return 0;
}



undefined8 FUN_00003ffe(int param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = param_2;
  local_24 = param_1;
  for (local_28 = param_3; local_28 != 0; local_28 = local_28 - uVar1) {
    uVar1 = local_28;
    if (0x20 < local_28) {
      uVar1 = 0x20;
    }
    FUN_00003ca2((long)local_24,local_30,(long)(int)uVar1,(long)param_4);
    local_24 = uVar1 + local_24;
    local_30 = (ulong)uVar1 + local_30;
  }
  return 0;
}



long FUN_00004090(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00003ffe((long)param_1,param_2,(long)param_3,1);
  return (long)iVar1;
}



long FUN_000040ce(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00003ffe((long)param_1,param_2,(long)param_3,5);
  return (long)iVar1;
}



undefined8 FUN_0000410c(void)

{
  int iVar1;
  long lVar2;
  uint local_58 [17];
  int local_14;
  
  local_14 = 0;
  FUN_00005752(0x1d);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  local_58[0xf] = 0;
  for (local_14 = 0; local_14 < 0x100; local_14 = local_14 + 1) {
    iVar1 = (int)(local_14 + ((uint)(local_14 >> 0x1f) >> 0x1b)) >> 5;
    local_58[iVar1] =
         (*(uint *)(&DAT_0000ad28 + (long)local_14 * 4) >> 0x18 & 1) <<
         ((long)(local_14 % 0x20) & 0x1fU) | local_58[iVar1];
    lVar2 = (long)((int)(local_14 + ((uint)(local_14 >> 0x1f) >> 0x1b)) >> 5);
    local_58[lVar2 + 8] =
         (*(uint *)(&DAT_0000ad28 + (long)local_14 * 4) >> 0x19 & 1) <<
         ((long)(local_14 % 0x20) & 0x1fU) | local_58[lVar2 + 8];
  }
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    *(uint *)(((long)local_14 + 0x38) * 4 + 0x502b0000) = local_58[(long)local_14 + 8];
    *(uint *)(((long)local_14 + 0x30) * 4 + 0x502b0000) = local_58[local_14];
  }
  return 0;
}



undefined8 FUN_000042c2(int param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  
  if (((param_1 < 0) || (0x2f < param_1)) || (2 < param_2)) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    local_18 = *(uint *)((long)param_1 * 4 + 0x502b0000);
    if (param_2 == 1) {
      local_18 = local_18 & 0xfffeffff | 0x20000;
    }
    else if (param_2 == 0) {
      local_18 = local_18 & 0xfffcffff;
    }
    else if (param_2 == 2) {
      local_18 = local_18 & 0xfffdffff | 0x10000;
    }
    *(uint *)((long)param_1 * 4 + 0x502b0000) = local_18;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_000043ae(int param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (((param_1 < 0) || (0x2f < param_1)) || (0xff < param_2)) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    *(uint *)((long)param_1 * 4 + 0x502b0000) =
         (uint)(byte)(&DAT_0000ad28)[(ulong)param_2 * 4] |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 8 & 0xf) << 8 |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0xc & 1) << 0xc |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0xd & 1) << 0xd |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0xe & 1) << 0xe |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0xf & 1) << 0xf |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0x10 & 1) << 0x10 |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0x11 & 1) << 0x11 |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0x13 & 1) << 0x13 |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0x14 & 1) << 0x14 |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0x15 & 1) << 0x15 |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0x16 & 1) << 0x16 |
         (*(uint *)(&DAT_0000ad28 + (ulong)param_2 * 4) >> 0x17 & 1) << 0x17;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_00004648(uint param_1,uint param_2)

{
  undefined8 uVar1;
  undefined local_11;
  
  if ((((int)param_1 < 0) || (0x2f < (int)param_1)) || (0xff < param_2)) {
    uVar1 = 0xffffffffffffffff;
  }
  else if (param_2 == 0x78) {
    FUN_000043ae((long)(int)param_1,0x78);
    uVar1 = 0;
  }
  else {
    for (local_11 = 0; local_11 < 0x30; local_11 = local_11 + 1) {
      if ((param_2 == (*(uint *)((long)(int)(uint)local_11 * 4 + 0x502b0000) & 0xff)) &&
         (param_1 != local_11)) {
        FUN_000043ae(local_11,0x78);
      }
    }
    FUN_000043ae((long)(int)param_1,(long)(int)param_2);
    uVar1 = 0;
  }
  return uVar1;
}



long FUN_00004732(uint param_1)

{
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (0x2f < local_14) {
      return -1;
    }
    if (param_1 == (*(uint *)((long)local_14 * 4 + 0x502b0000) & 0xff)) break;
    local_14 = local_14 + 1;
  }
  return (long)local_14;
}



void FUN_00004792(byte param_1,int param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined4 local_14;
  
  if (0x1f < param_1) {
    FUN_00001474(s___s__d___s_0000b178,s__home_shibin_dev_maixloader_src__0000b140,0x24,
                 s_pin_<_GPIOHS_MAX_PINNO_0000b128);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar4 = FUN_00004732(param_1 + 0x18);
  if (iVar4 < 1) {
    FUN_00001474(s___s__d___s_0000b178,s__home_shibin_dev_maixloader_src__0000b140,0x26,
                 s_io_number_>_0_0000b188);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (param_2 == 1) {
    local_14 = 1;
    bVar3 = false;
  }
  else if (param_2 == 0) {
    local_14 = 0;
    bVar3 = false;
  }
  else if (param_2 == 2) {
    local_14 = 2;
    bVar3 = false;
  }
  else {
    if (param_2 != 3) {
      FUN_00001474(s___s__d___s_0000b178,s__home_shibin_dev_maixloader_src__0000b140,0x3d,
                   s___GPIO_drive_mode_is_not_support_0000b198);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    local_14 = 1;
    bVar3 = true;
  }
  FUN_000042c2((long)iVar4,local_14);
  if (bVar3) {
    lVar1 = 8;
  }
  else {
    lVar1 = 4;
  }
  if (bVar3) {
    lVar2 = 4;
  }
  else {
    lVar2 = 8;
  }
  FUN_00007522(lVar2 + 0x38001000,param_1,0);
  FUN_00007522(lVar1 + 0x38001000,param_1,1);
  return;
}



void FUN_00004910(byte param_1,int param_2)

{
  if (0x1f < param_1) {
    FUN_00001474(s___s__d___s_0000b178,s__home_shibin_dev_maixloader_src__0000b140,0x51,
                 s_pin_<_GPIOHS_MAX_PINNO_0000b128);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_00007522(0x3800100c,param_1,(long)param_2);
  return;
}



void FUN_00004978(void)

{
  FUN_00004648(0xf,0x1a);
  FUN_00004648(0xc,0x1b);
  FUN_00004648(0xe,0x1c);
  FUN_00004792(2,3);
  FUN_00004792(3,3);
  FUN_00004792(4,3);
  return;
}



void FUN_000049ba(byte param_1)

{
  if ((param_1 & 1) == 0) {
    FUN_00004910(2,1);
  }
  else {
    FUN_00004910(2,0);
  }
  if ((param_1 & 2) == 0) {
    FUN_00004910(4,1);
  }
  else {
    FUN_00004910(4,0);
  }
  if ((param_1 & 4) == 0) {
    FUN_00004910(3,1);
  }
  else {
    FUN_00004910(3,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004a2c(void)

{
  _DAT_5042000c = 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004a42(void)

{
  _DAT_5042000c = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00004a58(int param_1,undefined *param_2,int param_3)

{
  undefined *local_30;
  int local_28;
  int local_24;
  uint local_14;
  
  _DAT_50420058 = 0;
  _DAT_50420008 = 0;
  _DAT_50420060 = 0;
  _DAT_50420000 = 0;
  local_24 = param_1 << 3;
  local_30 = param_2;
  local_28 = param_3;
  while( true ) {
    if (local_28 == 0) {
      return 0;
    }
    local_14 = 0;
    while (_DAT_5042003c == 0) {
      local_14 = local_14 + 1;
      if (0xfffffe < local_14) {
        return 1;
      }
    }
    if (local_28 + -1 == 0) {
      _DAT_50420020 = 1;
    }
    _DAT_50420030 = local_24;
    local_14 = 0;
    while (_DAT_504200ac == 0) {
      local_14 = local_14 + 1;
      if (0xfffffe < local_14) {
        return 1;
      }
    }
    if (_DAT_50420060 == 1) break;
    *local_30 = (char)_DAT_50420024;
    local_24 = local_24 + 8;
    local_30 = local_30 + 1;
    local_28 = local_28 + -1;
  }
  return 2;
}



long FUN_00004b70(uint param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined4 local_14;
  
  if (param_1 < 0x3dd0) {
    if (0x3dd0 - param_1 < param_3) {
      param_3 = 0x3dd0 - param_1;
    }
    local_14 = FUN_00004a58((long)(int)param_1,param_2,(long)(int)param_3);
    if (local_14 == 2) {
      local_14 = 10;
    }
    lVar1 = (long)local_14;
  }
  else {
    lVar1 = 2;
  }
  return lVar1;
}



/* WARNING: Removing unreachable block (ram,0x00004c14) */
/* WARNING: Removing unreachable block (ram,0x00004c2c) */
/* WARNING: Removing unreachable block (ram,0x00004c3c) */

undefined8 FUN_00004c04(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong in_mip;
  long in_mhartid;
  
  if ((in_mip & 0x800) != 0) {
    uVar1 = *(uint *)((in_mhartid + 0x200) * 0x1000 + 0xc000004);
    uVar2 = *(undefined4 *)((in_mhartid + 0x200) * 0x1000 + 0xc000000);
    *(undefined4 *)((in_mhartid + 0x200) * 0x1000 + 0xc000000) =
         *(undefined4 *)((ulong)uVar1 * 4 + 0xc000000);
    if (*(long *)((in_mhartid * 0x42 + (ulong)uVar1) * 0x10 + 0xb980) != 0) {
      pcVar3 = *(code **)((in_mhartid * 0x42 + (ulong)uVar1) * 0x10 + 0xb980);
      (*pcVar3)(*(undefined8 *)((in_mhartid * 0x42 + (ulong)uVar1) * 0x10 + 0xb988),pcVar3);
    }
    *(uint *)((in_mhartid + 0x200) * 0x1000 + 0xc000004) = uVar1;
    *(undefined4 *)((in_mhartid + 0x200) * 0x1000 + 0xc000000) = uVar2;
  }
  return param_1;
}



ulong FUN_00004d6e(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  return (ulong)(uVar1 >> 0x18 | uVar1 << 8) & 0xff00ff |
         (ulong)(uVar1 << 0x18 | uVar1 >> 8) & 0xff00ff00 |
         ((ulong)(uVar2 >> 0x18 | uVar2 << 8) & 0xff00ff |
         (ulong)(uVar2 << 0x18 | uVar2 >> 8) & 0xff00ff00) << 0x20;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00004e20(char param_1,char param_2,int param_3,undefined8 *param_4)

{
  FUN_00005752(0x23);
  FUN_0000534c(0x1b);
  _DAT_502c0028 = param_3 + 0x40U >> 6;
  if (param_1 == '\0') {
    _DAT_502c0034 = 0;
  }
  else {
    _DAT_502c0034 = _DAT_502c0034 | 1;
  }
  if (param_2 != '\0') {
    _DAT_502c0030 = _DAT_502c0030 | 1;
  }
  _DAT_502c002c = _DAT_502c002c | 0x10001;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0x6a09e667;
  *(undefined4 *)((long)param_4 + 0xc) = 0xbb67ae85;
  *(undefined4 *)(param_4 + 2) = 0x3c6ef372;
  *(undefined4 *)((long)param_4 + 0x14) = 0xa54ff53a;
  *(undefined4 *)(param_4 + 3) = 0x510e527f;
  *(undefined4 *)((long)param_4 + 0x1c) = 0x9b05688c;
  *(undefined4 *)(param_4 + 4) = 0x1f83d9ab;
  *(undefined4 *)((long)param_4 + 0x24) = 0x5be0cd19;
  *(undefined4 *)(param_4 + 5) = 0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004f74(long *param_1,long param_2,uint param_3)

{
  uint local_44;
  uint local_20;
  uint local_1c;
  long local_18;
  
  local_44 = param_3;
  local_18 = param_2;
  while (local_44 != 0) {
    local_1c = 0x40 - *(int *)(param_1 + 5);
    if (local_44 < local_1c) {
      local_1c = local_44;
    }
    FUN_000080d6((long)param_1 + (ulong)*(uint *)(param_1 + 5) + 0x2c,local_18,local_1c);
    *param_1 = (ulong)local_1c * 8 + *param_1;
    *(uint *)(param_1 + 5) = *(int *)(param_1 + 5) + local_1c;
    local_18 = (ulong)local_1c + local_18;
    local_44 = local_44 - local_1c;
    if (*(int *)(param_1 + 5) == 0x40) {
      for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
        do {
        } while ((_DAT_502c0034 & 0x100) != 0);
        _DAT_502c0020 = *(undefined4 *)((long)param_1 + ((ulong)local_20 + 8) * 4 + 0xc);
      }
      *(undefined4 *)(param_1 + 5) = 0;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000050a6(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *local_30;
  undefined8 local_20;
  int local_18;
  uint local_14;
  
  local_14 = -*(int *)(param_1 + 5) + 0x78;
  if (0x40 < local_14) {
    local_14 = -*(int *)(param_1 + 5) + 0x38;
  }
  local_20 = FUN_00004d6e(*param_1);
  FUN_00004f74(param_1,&DAT_0000b1d8,(long)(int)local_14);
  FUN_00004f74(param_1,&local_20,8);
  do {
  } while ((_DAT_502c002c & 1) == 0);
  if (param_2 != (undefined4 *)0x0) {
    local_30 = param_2;
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      *local_30 = *(undefined4 *)((long)(7 - local_18) * 4 + 0x502c0000);
      local_30 = local_30 + 1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005184(undefined4 param_1,byte param_2)

{
  switch(param_1) {
  case 0:
    _DAT_50440030 = param_2 & 1 | _DAT_50440030 & 0xfffffffe;
    break;
  case 1:
    _DAT_50440034 = param_2 & 1 | _DAT_50440034 & 0xfffffffe;
    break;
  default:
    break;
  case 7:
    _DAT_50440034 = _DAT_50440034 & 0xffffffbf | (param_2 & 1) << 6;
    break;
  case 8:
    _DAT_50440034 = _DAT_50440034 & 0xffffff7f | (param_2 & 1) << 7;
    break;
  case 9:
    _DAT_50440034 = _DAT_50440034 & 0xfffffeff | (param_2 & 1) << 8;
    break;
  case 0x14:
    _DAT_50440034 = _DAT_50440034 & 0xfff7ffff | (param_2 & 1) << 0x13;
    break;
  case 0x15:
    _DAT_50440034 = _DAT_50440034 & 0xffefffff | (param_2 & 1) << 0x14;
    break;
  case 0x16:
    _DAT_50440034 = _DAT_50440034 & 0xffdfffff | (param_2 & 1) << 0x15;
    break;
  case 0x17:
    _DAT_50440034 = _DAT_50440034 & 0xffbfffff | (param_2 & 1) << 0x16;
    break;
  case 0x18:
    _DAT_50440034 = _DAT_50440034 & 0xff7fffff | (param_2 & 1) << 0x17;
    break;
  case 0x1b:
    _DAT_50440034 = _DAT_50440034 & 0xfbffffff | (param_2 & 1) << 0x1a;
  }
  return;
}



void FUN_0000534c(int param_1)

{
  FUN_00005184((long)param_1,1);
  FUN_00005184((long)param_1,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0000537c(undefined4 param_1,byte param_2)

{
  if (param_2 != 0) {
    switch(param_1) {
    case 0xf:
    case 0x10:
      _DAT_50440028 = _DAT_50440028 & 0xffffffdf | (param_2 & 1) << 5;
      break;
    case 0x11:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x23:
      _DAT_50440028 = _DAT_50440028 & 0xfffffff7 | (param_2 & 1) << 3;
      break;
    default:
      break;
    case 0x1c:
    case 0x24:
      _DAT_50440028 = _DAT_50440028 & 0xffffffef | (param_2 & 1) << 4;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0000543e(undefined4 param_1,byte param_2)

{
  switch(param_1) {
  case 0:
    _DAT_50440008 = _DAT_50440008 & 0xfdffffff | (param_2 & 1) << 0x19;
    break;
  case 1:
    _DAT_5044000c = _DAT_5044000c & 0xfdffffff | (param_2 & 1) << 0x19;
    break;
  case 2:
    _DAT_50440010 = _DAT_50440010 & 0xfdffffff | (param_2 & 1) << 0x19;
    break;
  case 3:
    _DAT_50440028 = param_2 & 1 | _DAT_50440028 & 0xfffffffe;
    break;
  case 4:
    _DAT_50440028 = _DAT_50440028 & 0xfffffffd | (param_2 & 1) << 1;
    break;
  case 5:
    _DAT_50440028 = _DAT_50440028 & 0xfffffffb | (param_2 & 1) << 2;
    break;
  case 6:
    _DAT_50440028 = _DAT_50440028 & 0xfffffff7 | (param_2 & 1) << 3;
    break;
  case 7:
    _DAT_50440028 = _DAT_50440028 & 0xffffffef | (param_2 & 1) << 4;
    break;
  case 8:
    _DAT_50440028 = _DAT_50440028 & 0xffffffdf | (param_2 & 1) << 5;
    break;
  case 9:
    _DAT_5044002c = param_2 & 1 | _DAT_5044002c & 0xfffffffe;
    break;
  default:
    break;
  case 0xf:
    _DAT_5044002c = _DAT_5044002c & 0xffffffbf | (param_2 & 1) << 6;
    break;
  case 0x10:
    _DAT_5044002c = _DAT_5044002c & 0xffffff7f | (param_2 & 1) << 7;
    break;
  case 0x11:
    _DAT_5044002c = _DAT_5044002c & 0xfffffeff | (param_2 & 1) << 8;
    break;
  case 0x12:
    _DAT_5044002c = _DAT_5044002c & 0xfffffdff | (param_2 & 1) << 9;
    break;
  case 0x1c:
    _DAT_5044002c = _DAT_5044002c & 0xfff7ffff | (param_2 & 1) << 0x13;
    break;
  case 0x1d:
    _DAT_5044002c = _DAT_5044002c & 0xffefffff | (param_2 & 1) << 0x14;
    break;
  case 0x1e:
    _DAT_5044002c = _DAT_5044002c & 0xffdfffff | (param_2 & 1) << 0x15;
    break;
  case 0x1f:
    _DAT_5044002c = _DAT_5044002c & 0xffbfffff | (param_2 & 1) << 0x16;
    break;
  case 0x20:
    _DAT_5044002c = _DAT_5044002c & 0xff7fffff | (param_2 & 1) << 0x17;
    break;
  case 0x23:
    _DAT_5044002c = _DAT_5044002c & 0xfbffffff | (param_2 & 1) << 0x1a;
    break;
  case 0x24:
    _DAT_5044002c = _DAT_5044002c & 0xf7ffffff | (param_2 & 1) << 0x1b;
  }
  return 0;
}



undefined8 FUN_00005752(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x2b) {
    FUN_0000537c((long)(int)param_1,1);
    FUN_0000543e((long)(int)param_1,1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



undefined8 FUN_00005798(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x2b) {
    FUN_0000537c((long)(int)param_1,0);
    FUN_0000543e((long)(int)param_1,0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_000057de(undefined4 param_1,uint param_2)

{
  int local_14;
  
  local_14 = 0;
  switch(param_1) {
  case 0:
    _DAT_50440020 = _DAT_50440020 & 0xfffffff9 | (param_2 & 3) << 1;
    break;
  case 1:
    _DAT_50440020 = _DAT_50440020 & 0xffffffc7 | (param_2 & 7) << 3;
    break;
  case 2:
    _DAT_50440020 = _DAT_50440020 & 0xfffffe3f | (param_2 & 7) << 6;
    break;
  case 3:
    _DAT_50440020 = _DAT_50440020 & 0xfffff1ff | (param_2 & 7) << 9;
    break;
  case 4:
    _DAT_50440038 = param_2 & 0xf | _DAT_50440038 & 0xfffffff0;
    break;
  case 5:
    _DAT_50440038 = _DAT_50440038 & 0xffffff0f | (param_2 & 0xf) << 4;
    break;
  default:
    local_14 = -1;
    break;
  case 8:
    _DAT_50440038 = _DAT_50440038 & 0xfff0ffff | (param_2 & 0xf) << 0x10;
    break;
  case 9:
    _DAT_5044003c = param_2 & 0xff | _DAT_5044003c & 0xffffff00;
    break;
  case 10:
    _DAT_5044003c = _DAT_5044003c & 0xffff00ff | (param_2 & 0xff) << 8;
    break;
  case 0xb:
    _DAT_5044003c = _DAT_5044003c & 0xff00ffff | (param_2 & 0xff) << 0x10;
    break;
  case 0xc:
    _DAT_5044003c = _DAT_5044003c & 0xffffff | param_2 << 0x18;
    break;
  case 0xd:
    _DAT_50440040 = param_2 & 0xff | _DAT_50440040 & 0xffffff00;
    break;
  case 0xe:
    _DAT_50440040 = _DAT_50440040 & 0xffff00ff | (param_2 & 0xff) << 8;
    break;
  case 0xf:
    _DAT_50440040 = _DAT_50440040 & 0xff00ffff | (param_2 & 0xff) << 0x10;
  }
  return (long)local_14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00005a12(undefined4 param_1)

{
  uint local_14;
  
  local_14 = 0;
  switch(param_1) {
  case 0:
    local_14 = _DAT_50440020 >> 1 & 3;
    break;
  case 1:
    local_14 = _DAT_50440020 >> 3 & 7;
    break;
  case 2:
    local_14 = _DAT_50440020 >> 6 & 7;
    break;
  case 3:
    local_14 = _DAT_50440020 >> 9 & 7;
    break;
  case 4:
    local_14 = _DAT_50440038 & 0xf;
    break;
  case 5:
    local_14 = _DAT_50440038 >> 4 & 0xf;
    break;
  default:
    break;
  case 8:
    local_14 = _DAT_50440038 >> 0x10 & 0xf;
    break;
  case 9:
    local_14 = _DAT_5044003c & 0xff;
    break;
  case 10:
    local_14 = _DAT_5044003c >> 8 & 0xff;
    break;
  case 0xb:
    local_14 = _DAT_5044003c >> 0x10 & 0xff;
    break;
  case 0xc:
    local_14 = _DAT_5044003c >> 0x18;
    break;
  case 0xd:
    local_14 = _DAT_50440040 & 0xff;
    break;
  case 0xe:
    local_14 = _DAT_50440040 >> 8 & 0xff;
    break;
  case 0xf:
    local_14 = _DAT_50440040 >> 0x10 & 0xff;
  }
  return local_14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00005b84(undefined4 param_1,uint param_2)

{
  int local_14;
  
  local_14 = 0;
  switch(param_1) {
  case 0:
    _DAT_50440008 = _DAT_50440008 & 0xff7fffff | (param_2 & 1) << 0x17;
    break;
  case 1:
    _DAT_5044000c = _DAT_5044000c & 0xff7fffff | (param_2 & 1) << 0x17;
    break;
  case 2:
    _DAT_50440010 = _DAT_50440010 & 0xff7fffff | (param_2 & 1) << 0x17;
    break;
  case 3:
    _DAT_50440010 = _DAT_50440010 & 0xf3ffffff | (param_2 & 3) << 0x1a;
    break;
  case 4:
    _DAT_50440020 = param_2 & 1 | _DAT_50440020 & 0xfffffffe;
    break;
  case 5:
    _DAT_50440020 = _DAT_50440020 & 0xffffefff | (param_2 & 1) << 0xc;
    break;
  case 6:
    _DAT_50440020 = _DAT_50440020 & 0xffffdfff | (param_2 & 1) << 0xd;
    break;
  case 7:
    _DAT_50440020 = _DAT_50440020 & 0xffffbfff | (param_2 & 1) << 0xe;
    break;
  case 8:
    _DAT_50440020 = _DAT_50440020 & 0xffff7fff | (param_2 & 1) << 0xf;
    break;
  case 9:
    _DAT_50440024 = param_2 & 1 | _DAT_50440024 & 0xfffffffe;
    break;
  default:
    local_14 = -1;
  }
  return (long)local_14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00005d3a(undefined4 param_1)

{
  uint local_14;
  
  local_14 = 0;
  switch(param_1) {
  case 0:
    local_14 = _DAT_50440008 >> 0x17 & 1;
    break;
  case 1:
    local_14 = _DAT_5044000c >> 0x17 & 1;
    break;
  case 2:
    local_14 = _DAT_50440010 >> 0x17 & 1;
    break;
  case 3:
    local_14 = _DAT_50440010 >> 0x1a & 3;
    break;
  case 4:
    local_14 = _DAT_50440020 & 1;
    break;
  case 5:
    local_14 = _DAT_50440020 >> 0xc & 1;
    break;
  case 6:
    local_14 = _DAT_50440020 >> 0xd & 1;
    break;
  case 7:
    local_14 = _DAT_50440020 >> 0xe & 1;
    break;
  case 8:
    local_14 = _DAT_50440020 >> 0xf & 1;
    break;
  case 9:
    local_14 = _DAT_50440024 & 1;
  }
  return local_14;
}



long FUN_00005e5e(undefined4 param_1)

{
  int local_14;
  
  switch(param_1) {
  case 0:
    local_14 = 26000000;
    break;
  case 1:
    local_14 = FUN_0000602a(0);
    break;
  case 2:
    local_14 = FUN_0000602a(1);
    break;
  case 3:
    local_14 = FUN_0000602a(2);
    break;
  case 4:
    local_14 = FUN_00006d26(0x28);
    break;
  default:
    local_14 = 0;
  }
  return (long)local_14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00005efa(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 3) {
    if (param_1 == 1) {
      uVar1 = _DAT_50440018 >> 8 & 1;
    }
    else if (param_1 == 0) {
      uVar1 = (uint)((_DAT_50440018 & 3) == 3);
    }
    else if (param_1 == 2) {
      uVar1 = _DAT_50440018 >> 0x10 & 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00005f9a(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 < 3) {
    if (param_1 == 1) {
      _DAT_50440018 = _DAT_50440018 | 0x400;
    }
    else if (param_1 == 0) {
      _DAT_50440018 = _DAT_50440018 | 4;
    }
    else if (param_1 == 2) {
      _DAT_50440018 = _DAT_50440018 | 0x40000;
    }
    lVar1 = FUN_00005efa((long)(int)param_1);
    if (lVar1 == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000602a(uint param_1)

{
  byte bVar1;
  int local_20;
  
  local_20 = 0;
  if (param_1 < 3) {
    if (param_1 == 1) {
      FUN_00005e5e(0);
      local_20 = (_DAT_5044000c >> 10 & 0xf) + 1;
    }
    else if (param_1 == 0) {
      FUN_00005e5e(0);
      local_20 = (_DAT_50440008 >> 10 & 0xf) + 1;
    }
    else if (param_1 == 2) {
      bVar1 = (byte)(_DAT_50440010 >> 0x1a) & 3;
      if (bVar1 < 3) {
        FUN_00005e5e((&DAT_0000b890)[(int)(uint)bVar1]);
        local_20 = (_DAT_50440010 >> 10 & 0xf) + 1;
      }
      else {
        local_20 = 0;
      }
    }
  }
  else {
    local_20 = 0;
  }
  return local_20;
}



/* WARNING: Removing unreachable block (ram,0x0000668a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00006214(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 in_register_00000480;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint local_120;
  double local_80;
  long local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  double local_58;
  double local_50;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_14;
  
  local_14 = 0;
  if (param_1 < 3) {
    if (param_2 < 5) {
      if (param_1 < 2) {
        if (param_2 != 0) {
          return 0;
        }
        local_14 = FUN_00005e5e(0);
        if (local_14 == 0) {
          return 0;
        }
      }
      else {
        if (param_1 != 2) {
          return 0;
        }
        if (param_2 < 3) {
          local_14 = FUN_00005e5e((long)(int)param_2);
        }
        if (local_14 == 0) {
          return 0;
        }
      }
      dVar5 = DAT_0000b518;
      dVar4 = DAT_0000b510;
      dVar3 = DAT_0000b508;
      local_50 = 0.0;
      local_5c = 0;
      local_60 = 0;
      local_64 = 0;
      local_70 = 0;
      local_80 = 0.0;
      dVar12 = (double)local_14;
      local_58 = DAT_0000b520 / 32.0;
      bVar1 = true;
      local_34 = 1;
      local_20 = (uint)(local_58 == DAT_0000b528);
      if (local_58 != DAT_0000b528) {
        local_34 = 0;
        local_20 = (uint)(local_58 == 0.0);
        if (local_20 != 0) {
          local_20 = 0xb530;
          local_58 = DAT_0000b530;
        }
        local_50 = ABS(local_58);
      }
      bVar2 = false;
      for (; (int)local_20 < 0x40; local_20 = local_20 + 1) {
        uVar7 = local_20;
        FUN_000084c6(in_register_00000480);
        if (((uVar7 != 0) && (0 < (int)uVar7)) && (dVar12 / (double)(int)uVar7 <= dVar4)) {
          local_1c = local_20;
          if (local_20 == 0) {
            local_1c = 1;
          }
          dVar13 = DAT_0000b538 -
                   ((double)(long)(int)local_20 / (double)(int)uVar7) / ((double)param_3 / dVar12);
          uVar8 = local_34;
          if (((local_34 != 0) ||
              (uVar8 = (uint)(ABS(dVar13) < local_50 * DAT_0000b540), uVar8 != 0)) ||
             (uVar8 = (uint)(ABS(dVar13) < DAT_0000b530), uVar8 != 0)) {
            FUN_0000837a(in_register_00000480);
            local_24 = uVar8;
            if (0x10 < (int)uVar8) {
              local_24 = 0x10;
            }
            for (; (1 < (int)local_24 &&
                   (((int)uVar7 / (int)local_24 < 1 || ((int)uVar7 % (int)local_24 != 0))));
                local_24 = local_24 - 1) {
            }
            if ((int)uVar7 % (int)local_24 == 0) {
              uVar9 = uVar8;
              if (0x10 < (int)uVar8) {
                uVar9 = 0x10;
              }
              uVar10 = 0x40 / (int)local_1c;
              local_2c = (int)uVar9 / (int)local_24;
              if ((int)uVar10 < (int)uVar9 / (int)local_24) {
                local_2c = uVar10;
              }
              FUN_00008236(in_register_00000480);
              if ((((int)(local_24 * local_2c) < (int)uVar8 >> 1) ||
                  ((int)(local_24 * local_2c) < (int)uVar10)) &&
                 ((int)(local_24 * local_2c) < 0x40 / (int)local_1c)) {
                local_24 = 0x40 / (int)local_1c;
                if (0x10 < (int)local_24) {
                  local_24 = 0x10;
                }
                uVar9 = local_24;
                local_2c = local_24;
                if ((int)uVar8 < (int)local_24) {
                  uVar9 = uVar8;
                  local_2c = uVar8;
                }
              }
              else {
                uVar7 = (int)uVar7 / (int)local_24;
                uVar9 = local_24 * local_2c;
                if (0x10 < (int)(local_24 * local_2c)) goto LAB_000069c6;
              }
              lVar11 = (long)(int)local_20 * (long)(int)local_2c;
              if (((int)local_2c < 2) || (bVar1)) {
                local_30 = (uint)lVar11;
                if ((int)local_30 < 1) {
                  local_30 = 1;
                }
                if ((((((int)local_30 < 0x41) &&
                      (dVar14 = (dVar12 / (double)(int)uVar7) * (double)lVar11, dVar3 <= dVar14)) &&
                     ((dVar14 <= dVar4 &&
                      (((0 < (int)(local_1c * local_2c) && (dVar5 <= dVar12 / (double)(int)uVar7))
                       && ((int)uVar7 < 0x11)))))) &&
                    ((((bVar1 && (local_58 < 0.0)) || (ABS(dVar13) < local_50 * _DAT_0000b548)) ||
                     ((int)local_60 < (int)uVar9)))) &&
                   (((bVar1 || (local_58 < 0.0)) || ((int)uVar7 <= (int)local_5c)))) {
                  bVar2 = true;
                  local_64 = local_30;
                  bVar1 = false;
                  local_34 = 0;
                  local_50 = ABS(dVar13);
                  local_80 = dVar13;
                  local_70 = lVar11;
                  local_60 = uVar9;
                  local_5c = uVar7;
                }
              }
            }
          }
        }
LAB_000069c6:
      }
      if (bVar2) {
        if ((local_58 == DAT_0000b528) || (ABS(local_80) < local_58 * _DAT_0000b548)) {
          uVar7 = (uint)local_70;
          if (param_1 == 1) {
            _DAT_5044000c =
                 ((local_64 & 0xff) - 1 & 0x3f) << 0xe |
                 ((local_60 & 0xff) - 1 & 0xf) << 10 |
                 ((uVar7 & 0xff) - 1 & 0x3f) << 4 |
                 (local_5c & 0xff) - 1 & 0xf | _DAT_5044000c & 0xfff00000;
          }
          else if (param_1 == 0) {
            _DAT_50440008 =
                 ((local_64 & 0xff) - 1 & 0x3f) << 0xe |
                 ((local_60 & 0xff) - 1 & 0xf) << 10 |
                 ((uVar7 & 0xff) - 1 & 0x3f) << 4 |
                 (local_5c & 0xff) - 1 & 0xf | _DAT_50440008 & 0xfff00000;
          }
          else {
            if (param_1 != 2) {
              return 0;
            }
            local_120 = _DAT_50440010;
            if (param_2 < 3) {
              local_120 = ((byte)(&DAT_0000b888)[param_2] & 3) << 0x1a | _DAT_50440010 & 0xf3ffffff;
            }
            _DAT_50440010 =
                 ((local_64 & 0xff) - 1 & 0x3f) << 0xe |
                 ((local_60 & 0xff) - 1 & 0xf) << 10 |
                 ((uVar7 & 0xff) - 1 & 0x3f) << 4 |
                 (local_5c & 0xff) - 1 & 0xf | local_120 & 0xfff00000;
          }
          iVar6 = FUN_0000602a((long)(int)param_1);
          lVar11 = (long)iVar6;
        }
        else {
          lVar11 = 0;
        }
      }
      else {
        lVar11 = 0;
      }
    }
    else {
      lVar11 = 0;
    }
  }
  else {
    lVar11 = 0;
  }
  return lVar11;
}



long FUN_00006d26(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  uint local_28;
  uint local_24;
  
  local_24 = 0;
  local_28 = 0;
  switch(param_1) {
  case 0:
    local_28 = FUN_00005e5e(1);
    break;
  case 1:
    local_28 = FUN_00005e5e(2);
    break;
  case 2:
    local_28 = FUN_00005e5e(3);
    break;
  case 3:
    lVar2 = FUN_00005d3a(4);
    if (lVar2 == 0) {
      local_24 = FUN_00005e5e(0);
    }
    else if (lVar2 == 1) {
      local_24 = FUN_00005e5e(1);
      iVar1 = FUN_00005a12(0);
      local_24 = local_24 >> ((long)(iVar1 + 1) & 0x3fU);
    }
    local_28 = local_24;
    break;
  case 4:
    local_28 = FUN_00005e5e(4);
    iVar1 = FUN_00005a12(4);
    local_28 = local_28 / (iVar1 + 1U);
    break;
  case 5:
    local_28 = FUN_00005e5e(4);
    iVar1 = FUN_00005a12(5);
    local_28 = local_28 / (iVar1 + 1U);
    break;
  case 6:
    local_28 = FUN_00005e5e(4);
    iVar1 = FUN_00005a12(1);
    local_28 = local_28 / (iVar1 + 1U);
    break;
  case 7:
    local_28 = FUN_00005e5e(4);
    iVar1 = FUN_00005a12(2);
    local_28 = local_28 / (iVar1 + 1U);
    break;
  case 8:
    local_28 = FUN_00005e5e(4);
    iVar1 = FUN_00005a12(3);
    local_28 = local_28 / (iVar1 + 1U);
    break;
  case 9:
    local_28 = FUN_00005e5e(4);
    iVar1 = FUN_00005a12(8);
    local_28 = local_28 / (iVar1 + 1U);
    break;
  default:
    break;
  case 0xf:
    local_28 = FUN_00005e5e(1);
    iVar1 = FUN_00005a12(9);
    local_28 = local_28 / (uint)((iVar1 + 1) * 2);
    break;
  case 0x10:
    local_28 = FUN_00005e5e(1);
    iVar1 = FUN_00005a12(10);
    local_28 = local_28 / (uint)((iVar1 + 1) * 2);
    break;
  case 0x11:
    local_28 = FUN_00005e5e(1);
    iVar1 = FUN_00005a12(0xb);
    local_28 = local_28 / (uint)((iVar1 + 1) * 2);
    break;
  case 0x12:
    lVar2 = FUN_00005d3a(5);
    if (lVar2 == 0) {
      local_24 = FUN_00005e5e(0);
    }
    else if (lVar2 == 1) {
      local_24 = FUN_00005e5e(1);
    }
    iVar1 = FUN_00005a12(0xc);
    local_28 = local_24 / (uint)((iVar1 + 1) * 2);
    break;
  case 0x1c:
    local_28 = FUN_00006d26(7);
    break;
  case 0x1d:
    local_28 = FUN_00006d26(6);
    break;
  case 0x1e:
    lVar2 = FUN_00005d3a(6);
    if (lVar2 == 0) {
      local_24 = FUN_00005e5e(0);
    }
    else if (lVar2 == 1) {
      local_24 = FUN_00005e5e(1);
    }
    iVar1 = FUN_00005a12(0xd);
    local_28 = local_24 / (uint)((iVar1 + 1) * 2);
    break;
  case 0x1f:
    lVar2 = FUN_00005d3a(7);
    if (lVar2 == 0) {
      local_24 = FUN_00005e5e(0);
    }
    else if (lVar2 == 1) {
      local_24 = FUN_00005e5e(1);
    }
    iVar1 = FUN_00005a12(0xe);
    local_28 = local_24 / (uint)((iVar1 + 1) * 2);
    break;
  case 0x20:
    lVar2 = FUN_00005d3a(8);
    if (lVar2 == 0) {
      local_24 = FUN_00005e5e(0);
    }
    else if (lVar2 == 1) {
      local_24 = FUN_00005e5e(1);
    }
    iVar1 = FUN_00005a12(0xf);
    local_28 = local_24 / (uint)((iVar1 + 1) * 2);
    break;
  case 0x23:
    local_28 = FUN_00006d26(6);
    break;
  case 0x24:
    local_28 = FUN_00006d26(7);
    break;
  case 0x2a:
    local_28 = FUN_00005e5e(0);
  }
  return (long)(int)local_28;
}



long FUN_00007148(int param_1,int param_2)

{
  long lVar1;
  int local_1c;
  uint *local_18;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (param_1 == 1) {
      local_18 = (uint *)&DAT_5044000c;
    }
    else if (param_1 == 0) {
      local_18 = (uint *)&DAT_50440008;
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      local_18 = (uint *)&DAT_50440010;
    }
    if (param_1 == 0) {
      FUN_00005b84(4,0);
    }
    *local_18 = *local_18 & 0xfdffffff;
    *local_18 = *local_18 & 0xffdfffff;
    if (param_1 == 2) {
      local_1c = FUN_00006214(2,*local_18 >> 0x1a & 3,(long)param_2);
    }
    else {
      local_1c = FUN_00006214((long)param_1,0,(long)param_2);
    }
    *local_18 = *local_18 | 0x200000;
    FUN_000014c8(1);
    *local_18 = *local_18 & 0xffefffff;
    *local_18 = *local_18 | 0x100000;
    FUN_000014c8(1);
    *local_18 = *local_18 & 0xffefffff;
    while (lVar1 = FUN_00005efa((long)param_1), lVar1 == 0) {
      FUN_00005f9a((long)param_1);
    }
    *local_18 = *local_18 | 0x2000000;
    if (param_1 == 0) {
      FUN_00005b84(4,1);
    }
    lVar1 = (long)local_1c;
  }
  return lVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000072ca(byte param_1)

{
  do {
  } while ((int)_DAT_38000000 < 0);
  _DAT_38000000 = (uint)param_1 | _DAT_38000000 & 0xffffff00;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000730e(void)

{
  do {
  } while ((_DAT_38000004 & 0x80000000) != 0);
  return _DAT_38000004 & 0xff;
}



undefined8 FUN_00007340(undefined param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_000072ca(param_1);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00007364(void)

{
  uint uVar1;
  
  uVar1 = FUN_00006d26(3);
  _DAT_38000018 = (uint)(ushort)((short)(uVar1 / 0x1c200) - 1) | _DAT_38000018 & 0xffff0000;
  _DAT_38000008 = _DAT_38000008 & 0xfff8ffff | 1;
  _DAT_3800000c = _DAT_3800000c & 0xfff8ffff | 1;
  _DAT_38000014 = _DAT_38000014 | 3;
  _DAT_38000010 = _DAT_38000010 & 0xfffffffe | 2;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000741c(void)

{
  return _DAT_38000014 >> 1 & 1;
}



undefined8 FUN_0000743c(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0000741c();
  if ((lVar1 == 0) || (lVar1 = FUN_0000730e(), lVar1 != 3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_00007470(uint *param_1,uint param_2,uint param_3)

{
  *param_1 = ~param_2 & *param_1 | param_2 & param_3;
  return;
}



void FUN_000074c8(undefined8 param_1,int param_2,int param_3,int param_4)

{
  FUN_00007470(param_1,(long)(param_2 << ((long)param_3 & 0x1fU)),
               (long)(param_4 << ((long)param_3 & 0x1fU)));
  return;
}



void FUN_00007522(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_000074c8(param_1,1,param_2,(long)param_3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x000075ac) */
/* WARNING: Removing unreachable block (ram,0x000075a4) */
/* WARNING: Removing unreachable block (ram,0x0000759c) */
/* WARNING: Removing unreachable block (ram,0x00007594) */
/* WARNING: Removing unreachable block (ram,0x0000755e) */
/* WARNING: Removing unreachable block (ram,0x00007598) */
/* WARNING: Removing unreachable block (ram,0x000075a0) */
/* WARNING: Removing unreachable block (ram,0x000075a8) */
/* WARNING: Removing unreachable block (ram,0x000075b0) */

void FUN_00007556(void)

{
  int extraout_a1;
  undefined8 *puVar1;
  long in_mhartid;
  int iStack_7c;
  undefined8 *puStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_34;
  
  if (in_mhartid == 0) {
    FUN_00002e36(1);
    do {
    } while (*(int *)(gp + -0x7ac) == 0);
  }
  else {
    *(undefined4 *)(gp + -0x7ac) = 1;
    FUN_000014c8(10);
  }
  FUN_00001538(100);
  fence.i();
  puStack_78 = (undefined8 *)(*(code *)&SUB_004fff00)();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_00004a2c();
  FUN_00004b70(0x3d80,&uStack_58,0x10);
  for (iStack_34 = 0; iStack_34 < 0x10; iStack_34 = iStack_34 + 1) {
  }
  FUN_00005752(0x1c);
  FUN_0000534c(0x14);
  FUN_000024ba(&uStack_48,0x10,&uStack_58,0x10,0,1,1,0);
  for (iStack_7c = extraout_a1; iStack_7c != 0; iStack_7c = iStack_7c + -0x10) {
    FUN_00002c92(puStack_78,&uStack_68,0x10,1);
    puVar1 = puStack_78 + 1;
    *puStack_78 = uStack_68;
    puStack_78 = puStack_78 + 2;
    *puVar1 = uStack_60;
  }
  FUN_00004a42();
  return;
}



void FUN_000075c0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int local_5c;
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_14;
  
  local_28 = 0;
  local_20 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_00004a2c();
  FUN_00004b70(0x3d80,&local_38,0x10);
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
  }
  FUN_00005752(0x1c);
  FUN_0000534c(0x14);
  FUN_000024ba(&local_28,0x10,&local_38,0x10,0,1,1,0);
  local_58 = param_1;
  for (local_5c = param_2; local_5c != 0; local_5c = local_5c + -0x10) {
    FUN_00002c92(local_58,&local_48,0x10,1);
    puVar1 = local_58 + 1;
    *local_58 = local_48;
    local_58 = local_58 + 2;
    *puVar1 = local_40;
  }
  FUN_00004a42();
  return;
}



undefined8 FUN_00007698(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined auStack_d8 [112];
  char acStack_68 [32];
  char acStack_48 [36];
  uint local_24;
  undefined local_1d;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1d = 0;
  FUN_000036ac(1);
  FUN_00003a1e();
  FUN_00003ffe((long)param_1,&local_1d,1,5);
  FUN_00003ffe((long)(param_1 + 1),&local_24,4,5);
  if (param_3 - 0x25U < local_24) {
    uVar1 = 0xffffffffffffff17;
  }
  else {
    FUN_00003ffe((long)(param_1 + 5),param_2,(long)(int)local_24,5);
    FUN_00003ffe((long)(int)(local_24 + param_1 + 5),acStack_68,0x20,5);
    FUN_00004e20(0,0,(long)(int)(local_24 + 5),auStack_d8);
    FUN_00004f74(auStack_d8,&local_1d,1);
    FUN_00004f74(auStack_d8,&local_24,4);
    FUN_00004f74(auStack_d8,param_2,(long)(int)local_24);
    FUN_000050a6(auStack_d8,acStack_48);
    for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
      if (acStack_68[local_14] != acStack_48[local_14]) {
        for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
        }
        for (local_1c = 0; local_1c < 0x20; local_1c = local_1c + 1) {
        }
        return 0xffffffffffffffe8;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_0000782c(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined auStack_58 [32];
  undefined auStack_38 [36];
  int local_14;
  
  FUN_00003ffe((long)(param_1 + 1),&local_14,4,5);
  FUN_00003ffe((long)(local_14 + param_1 + 5),auStack_38,0x20,5);
  FUN_00003ffe((long)(param_2 + 1),&local_14,4,5);
  FUN_00003ffe((long)(local_14 + param_2 + 5),auStack_58,0x20,5);
  uVar1 = FUN_000080b0(auStack_38,auStack_58,0x20);
  return uVar1;
}



void FUN_000078d6(int param_1,int param_2,undefined8 param_3)

{
  int local_18;
  undefined local_11;
  
  local_11 = 0;
  FUN_00003ffe((long)param_1,&local_11,1,5);
  FUN_00003ffe((long)(param_1 + 1),&local_18,4,5);
  FUN_00003ffe((long)(param_1 + 5),param_3,(long)(local_18 + 0x20),5);
  FUN_000021d0((long)param_2,(long)(local_18 + 0x25));
  FUN_00003bc6((long)param_2,&local_11,1);
  FUN_00003bc6((long)(param_2 + 1),&local_18,4);
  FUN_0000231a((long)(param_2 + 5),(long)(local_18 + 0x20),param_3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x000079bc) */
/* WARNING: Removing unreachable block (ram,0x000079da) */

undefined8 FUN_000079ac(void)

{
  undefined8 in_mhartid;
  
  FUN_00002da6();
  FUN_00002e6c(in_mhartid);
  FUN_00002df6();
  wfi();
  FUN_00002e16();
  FUN_00002e6c(in_mhartid);
  FUN_00002f06();
  FUN_00007556();
  return 0;
}



long FUN_00007a00(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  int local_5c;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  long local_20;
  int local_14;
  
  local_14 = 0;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    for (local_20 = 1; local_20 != 0; local_20 = local_20 << 1) {
      *param_1 = local_20;
      if (local_20 != *param_1) {
        FUN_00001474(s__SRAM_data_bus_test_failed_at_0x_0000b54f + 1,param_1);
        local_14 = -0xec;
      }
    }
    uVar2 = (param_2 >> 3) - 1;
    for (local_28 = 1; (uVar2 & local_28) != 0; local_28 = local_28 << 1) {
      param_1[local_28] = DAT_0000b758;
    }
    *param_1 = DAT_0000b760;
    for (local_30 = 1; (uVar2 & local_30) != 0; local_30 = local_30 << 1) {
      if (param_1[local_30] != DAT_0000b758) {
        FUN_00001474(s_SRAM_address_bus_test_failed_at_0_0000b578,param_1 + local_30);
        local_14 = -0xec;
      }
    }
    *param_1 = DAT_0000b758;
    for (local_38 = 1; (uVar2 & local_38) != 0; local_38 = local_38 << 1) {
      param_1[local_38] = DAT_0000b760;
      if (*param_1 != DAT_0000b758) {
        FUN_00001474(s_SRAM_address_bus_test_failed_at_0_0000b578,param_1);
        local_14 = -0xec;
      }
      for (local_40 = 1; (uVar2 & local_40) != 0; local_40 = local_40 << 1) {
        if ((param_1[local_40] != DAT_0000b758) && (local_40 != local_38)) {
          FUN_00001474(s_SRAM_address_bus_test_failed_at_0_0000b578,param_1 + local_40);
          local_14 = -0xec;
        }
      }
      param_1[local_38] = DAT_0000b758;
    }
    for (local_48 = 0; local_48 <= uVar2; local_48 = local_48 + 1) {
      param_1[local_48] = DAT_0000b758;
    }
    for (local_50 = 0; local_50 <= uVar2; local_50 = local_50 + 1) {
      if (param_1[local_50] != DAT_0000b758) {
        FUN_00001474(s_SRAM_data_test_failed_at_0x_08lX_0000b5a8,param_1 + local_50);
        local_14 = -0xec;
      }
      param_1[local_50] = DAT_0000b760;
    }
    for (local_58 = 0; local_58 <= uVar2; local_58 = local_58 + 1) {
      if (param_1[local_58] != DAT_0000b760) {
        FUN_00001474(s_SRAM_data_test_failed_at_0x_08lX_0000b5a8,param_1 + local_58);
        local_14 = -0xec;
      }
      param_1[local_58] = 0;
    }
    if (local_14 == 0) {
      pcVar3 = &DAT_0000b5d0;
    }
    else {
      pcVar3 = s_ERROR_0000b5d8;
    }
    FUN_00001474(s_SRAM_Test__s_from_0x_08lX_to_0x__0000b5e0,pcVar3,param_1,
                 (long)param_1 + (param_2 - 1));
    if (local_14 != 0) {
      for (local_5c = 0; local_5c < 2; local_5c = local_5c + 1) {
        FUN_00001538(200);
        FUN_000049ba(5);
        FUN_00001538(200);
        FUN_000049ba(0);
      }
    }
    lVar1 = (long)local_14;
  }
  return lVar1;
}



/* WARNING: Removing unreachable block (ram,0x00007de8) */

long FUN_00007dac(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long extraout_a1;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 in_mhartid;
  int local_50;
  byte local_49;
  int local_48;
  int local_44;
  long local_40;
  ushort *local_30;
  int local_28;
  short local_24;
  char local_22;
  char local_21;
  
  local_28 = 1;
  FUN_00007148(1,350000000);
  FUN_00005752(0xb);
  local_30 = (ushort *)&DAT_407ffff6;
  FUN_000001ea(FUN_000079ac,0);
  FUN_00001474(s_MAIX_Bootloader_Stage__d__Core_l_0000b608,(long)local_28,in_mhartid);
  FUN_00001474(s_Build__d0d779de_0000b630);
  FUN_00001538(0x14);
  local_40 = (long)local_30 -
             (((ulong)*(byte *)((long)local_30 + 3) & 0xf) << 8 | (ulong)*(byte *)(local_30 + 1));
  local_21 = '\0';
  local_22 = '\0';
  local_24 = 0;
  *(undefined *)((long)local_30 + 5) = 0;
  lVar4 = FUN_00007a00(0x40400000,0x200000);
  if (lVar4 != 0) {
    local_22 = '\x01';
  }
  if ((*(byte *)((long)local_30 + 3) & 0xf) != 0 || *(char *)(local_30 + 1) != '\0') {
    uVar2 = *local_30;
    uVar3 = FUN_00002410(0,local_40,
                         (ushort)(((ulong)*(byte *)((long)local_30 + 3) & 0xf) << 8) |
                         (ushort)*(byte *)(local_30 + 1));
    if (uVar2 == uVar3) {
      local_24 = ((ushort)(((ulong)*(byte *)((long)local_30 + 3) & 0xf) << 8) |
                 (ushort)*(byte *)(local_30 + 1)) + 10;
      FUN_000080d6(0x40400000,local_40,local_24);
      local_21 = '\x01';
    }
  }
  lVar4 = FUN_00007a00(0x40600000,0x200000);
  if (lVar4 != 0) {
    local_22 = '\x01';
  }
  if (local_21 != '\0') {
    FUN_000080d6(local_40,0x40400000,local_24);
    FUN_00001474(s_Restoring_bootpara_to_0x_08lX_0000b648,local_40);
  }
  if (local_22 != '\0') {
    *(undefined *)((long)local_30 + 5) = 1;
  }
  local_44 = FUN_00007698(0x20000,&SUB_004fff00,0x10000);
  lVar5 = 0x10000;
  local_48 = FUN_00007698(0x10000,&SUB_004fff00);
  lVar4 = FUN_0000782c(0x10000,0x20000);
  if (lVar4 == 0) {
    if (local_48 != 0) {
      FUN_00001474(s_Failed_to_boot__image_check_fail_0000b708);
      goto LAB_0000809c;
    }
  }
  else {
    FUN_00001474(s_WARNING__Different_image_found__0000b668);
    if (local_48 == 0) {
      FUN_00001474(s____Copy_from_app_0x_08X_to_bak_0_0000b690,0x10000,0x20000);
      FUN_000078d6(0x10000,0x20000,&SUB_004fff00);
    }
    else {
      if (local_44 != 0) {
        FUN_00001474(s_Failed_to_boot__Image_check_fail_0000b6e0);
        goto LAB_0000809c;
      }
      FUN_00001474(s____Copy_from_bak_0x_08X_to_app_0_0000b6b8,0x20000,0x10000);
      FUN_000078d6(0x20000,0x10000,&SUB_004fff00);
    }
  }
  local_49 = 0;
  FUN_00003ffe(0x20000,&local_49,1,5);
  lVar5 = 4;
  FUN_00003ffe(0x20001,&local_50,5);
  if ((local_49 & 1) != 0) {
    FUN_000075c0(&SUB_004fff00,(long)local_50);
  }
  FUN_00007556();
LAB_0000809c:
  FUN_00001474(s_ERROR__Boot_failed___System_exit_0000b730);
  lVar4 = FUN_00001762(0xff);
  lVar6 = 0;
  do {
    if (lVar5 == lVar6) {
      return 0;
    }
    pbVar7 = (byte *)(lVar4 + lVar6);
    lVar6 = lVar6 + 1;
    bVar1 = *(byte *)(extraout_a1 + lVar6 + -1);
  } while (*pbVar7 == bVar1);
  return (long)(int)((uint)*pbVar7 - (uint)bVar1);
}



long FUN_000080b0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  lVar2 = 0;
  do {
    if (param_3 == lVar2) {
      return 0;
    }
    pbVar3 = (byte *)(param_1 + lVar2);
    lVar2 = lVar2 + 1;
    bVar1 = *(byte *)(param_2 + lVar2 + -1);
  } while (*pbVar3 == bVar1);
  return (long)(int)((uint)*pbVar3 - (uint)bVar1);
}



void FUN_000080d6(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar5 = (undefined8 *)((long)param_1 + param_3);
  if (((((ulong)param_2 ^ (ulong)param_1) & 7) == 0) && (7 < param_3)) {
    uVar4 = (ulong)param_1 & 7;
    while (uVar4 != 0) {
      uVar1 = *(undefined *)param_2;
      param_2 = (undefined8 *)((long)param_2 + 1);
      *(undefined *)param_1 = uVar1;
      uVar4 = (ulong)((long)param_1 + 1) & 7;
      param_1 = (undefined8 *)((long)param_1 + 1);
    }
    for (; param_1 < (undefined8 *)((ulong)puVar5 & 0xfffffffffffffff8) + -8; param_1 = param_1 + 9)
    {
      uVar2 = param_2[1];
      uVar12 = param_2[2];
      uVar11 = param_2[3];
      uVar10 = param_2[4];
      uVar9 = param_2[5];
      uVar3 = param_2[6];
      uVar8 = param_2[7];
      *param_1 = *param_2;
      uVar7 = param_2[8];
      param_1[1] = uVar2;
      param_1[2] = uVar12;
      param_1[3] = uVar11;
      param_1[4] = uVar10;
      param_1[5] = uVar9;
      param_1[6] = uVar3;
      param_1[7] = uVar8;
      param_1[8] = uVar7;
      param_2 = param_2 + 9;
    }
    for (; param_1 < (undefined8 *)((ulong)puVar5 & 0xfffffffffffffff8); param_1 = param_1 + 1) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
    }
    if (puVar5 <= param_1) {
      return;
    }
  }
  else if (puVar5 <= param_1) {
    return;
  }
  do {
    uVar1 = *(undefined *)param_2;
    puVar6 = (undefined8 *)((long)param_1 + 1);
    param_2 = (undefined8 *)((long)param_2 + 1);
    *(undefined *)param_1 = uVar1;
    param_1 = puVar6;
  } while (puVar6 < puVar5);
  return;
}



void FUN_0000818c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = 0xf;
  if (0xf < param_3) {
    uVar3 = (ulong)param_1 & 0xf;
    if (uVar3 != 0) {
      param_2 = (*(code *)(uVar3 * 4 + 0x81be))();
      param_1 = (ulong *)((long)param_1 - (uVar3 - 0x10));
      param_3 = param_3 + (uVar3 - 0x10);
      if (param_3 <= uVar1) goto LAB_000081b2;
    }
    if (param_2 != 0) {
      param_2 = param_2 & 0xff | (param_2 & 0xff) << 8;
      param_2 = param_2 | param_2 << 0x10;
      param_2 = param_2 | param_2 << 0x20;
    }
    uVar3 = param_3 & 0xfffffffffffffff0;
    param_3 = param_3 & 0xf;
    puVar2 = (ulong *)(uVar3 + (long)param_1);
    do {
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1 = param_1 + 2;
    } while (param_1 < puVar2);
    if (param_3 == 0) {
      return;
    }
  }
LAB_000081b2:
                    /* WARNING: Could not recover jumptable at 0x000081be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((uVar1 - param_3) * 4 + 0x81c2))();
  return;
}



ulong FUN_00008236(ulong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar3 = (uint)(param_1 >> 0x20);
  lVar4 = (long)(int)uVar3;
  uVar8 = (int)uVar3 >> 0x14 & 0x7ff;
  uVar2 = (uint)param_1;
  iVar1 = uVar8 - 0x3ff;
  uVar9 = (ulong)iVar1;
  uVar6 = (ulong)(int)uVar2;
  if ((long)uVar9 < 0x14) {
    if ((long)uVar9 < 0) {
      FUN_0000863e(DAT_0000b768);
      lVar7 = FUN_00008bc8(0);
      if (0 < lVar7) {
        if (lVar4 < 0) {
          uVar6 = 0;
          lVar4 = -0x80000000;
        }
        else {
          lVar4 = (long)(int)(uVar3 | uVar2);
          uVar6 = 0;
          if (lVar4 != 0) {
            lVar4 = 0x3ff00000;
          }
        }
      }
    }
    else {
      uVar8 = 0xfffff >> (uVar9 & 0x1f);
      if ((uVar3 & uVar8) == 0 && uVar2 == 0) {
        return param_1;
      }
      FUN_0000863e(DAT_0000b768);
      lVar7 = FUN_00008bc8(0);
      if (0 < lVar7) {
        if (0 < lVar4) {
          uVar3 = (0x100000 >> (uVar9 & 0x1f)) + uVar3;
        }
        lVar4 = (long)(int)(~uVar8 & uVar3);
        uVar6 = 0;
      }
    }
  }
  else {
    if (0x33 < (long)uVar9) {
      if (uVar9 != 0x400) {
        return param_1;
      }
      uVar6 = FUN_0000863e();
      return uVar6;
    }
    uVar8 = 0xffffffff >> ((long)(int)(uVar8 - 0x413) & 0x1fU);
    if ((uVar2 & uVar8) == 0) {
      return param_1;
    }
    FUN_0000863e(DAT_0000b768);
    lVar7 = FUN_00008bc8(0);
    if (0 < lVar7) {
      uVar5 = uVar2;
      if ((0 < lVar4) &&
         ((uVar9 == 0x14 || (uVar5 = uVar2 + (1 << ((long)(0x34 - iVar1) & 0x1fU)), uVar5 < uVar2)))
         ) {
        lVar4 = (long)(int)(uVar3 + 1);
      }
      uVar6 = (ulong)(int)(~uVar8 & uVar5);
    }
  }
  return lVar4 << 0x20 | uVar6 & 0xffffffff;
}



ulong FUN_0000837a(ulong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar3 = (uint)(param_1 >> 0x20);
  uVar4 = (ulong)(int)uVar3;
  uVar8 = (int)uVar3 >> 0x14 & 0x7ff;
  uVar2 = (uint)param_1;
  iVar1 = uVar8 - 0x3ff;
  uVar9 = (ulong)iVar1;
  uVar6 = (ulong)(int)uVar2;
  if ((long)uVar9 < 0x14) {
    if ((long)uVar9 < 0) {
      FUN_0000863e(DAT_0000b768);
      lVar7 = FUN_00008bc8(0);
      if (0 < lVar7) {
        if ((long)uVar4 < 0) {
          uVar6 = uVar6 | uVar4 & 0x7fffffff;
          if (uVar6 != 0) {
            uVar6 = 0;
            uVar4 = 0xffffffffbff00000;
          }
        }
        else {
          uVar6 = 0;
          uVar4 = 0;
        }
      }
    }
    else {
      uVar8 = 0xfffff >> (uVar9 & 0x1f);
      if ((uVar3 & uVar8) == 0 && uVar2 == 0) {
        return param_1;
      }
      FUN_0000863e(DAT_0000b768);
      lVar7 = FUN_00008bc8(0);
      if (0 < lVar7) {
        if ((long)uVar4 < 0) {
          uVar3 = (0x100000 >> (uVar9 & 0x1f)) + uVar3;
        }
        uVar4 = (ulong)(int)(~uVar8 & uVar3);
        uVar6 = 0;
      }
    }
  }
  else {
    if (0x33 < (long)uVar9) {
      if (uVar9 != 0x400) {
        return param_1;
      }
      uVar6 = FUN_0000863e();
      return uVar6;
    }
    uVar8 = 0xffffffff >> ((long)(int)(uVar8 - 0x413) & 0x1fU);
    if ((uVar2 & uVar8) == 0) {
      return param_1;
    }
    FUN_0000863e(DAT_0000b768);
    lVar7 = FUN_00008bc8(0);
    if (0 < lVar7) {
      uVar5 = uVar2;
      if (((long)uVar4 < 0) &&
         ((uVar9 == 0x14 || (uVar5 = uVar2 + (1 << ((long)(0x34 - iVar1) & 0x1fU)), uVar5 < uVar2)))
         ) {
        uVar4 = (ulong)(int)(uVar3 + 1);
      }
      uVar6 = (ulong)(int)(~uVar8 & uVar5);
    }
  }
  return uVar4 << 0x20 | uVar6 & 0xffffffff;
}



ulong FUN_000084c6(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar9 = (ulong)(int)uVar1;
  uVar7 = (int)uVar1 >> 0x14 & 0x7ff;
  uVar3 = (ulong)(int)(uVar7 - 0x3ff);
  uVar6 = (uint)param_1;
  uVar5 = (ulong)(int)uVar6;
  uVar2 = uVar1 >> 0x1f;
  if ((long)uVar3 < 0x14) {
    if ((long)uVar3 < 0) {
      if (((long)param_1 >> 0x20 & 0x7fffffffU) == 0 && uVar5 == 0) {
        return param_1;
      }
      uVar6 = uVar1 & 0xfffff | uVar6;
      uVar8 = *(undefined8 *)(&DAT_0000b770 + (long)(int)uVar2 * 8);
      uVar4 = FUN_0000863e(uVar8,param_1 & 0xffffffff |
                                 ((long)(int)((uVar6 | -uVar6) >> 0xc) & 0x80000U |
                                 uVar9 & 0xfffffffffffe0000) << 0x20);
      uVar3 = FUN_00008c50(uVar4,uVar8);
      return (uVar3 >> 0x20 & 0x7fffffff | (long)(int)(uVar2 << 0x1f)) << 0x20 | uVar3 & 0xffffffff;
    }
    uVar7 = 0xfffff >> (uVar3 & 0x1f);
    if ((uVar1 & uVar7) == 0 && uVar6 == 0) {
      return param_1;
    }
    uVar7 = uVar7 >> 1;
    uVar5 = 0;
    if (uVar6 != 0 || (uVar1 & uVar7) != 0) {
      if (uVar3 == 0x13) {
        uVar5 = 0xffffffff80000000;
      }
      uVar9 = (ulong)(int)(~uVar7 & uVar1 | 0x40000 >> (uVar3 & 0x1f));
    }
  }
  else {
    if (0x33 < (long)uVar3) {
      if (uVar3 != 0x400) {
        return param_1;
      }
      uVar3 = FUN_0000863e();
      return uVar3;
    }
    uVar3 = (ulong)(int)(uVar7 - 0x413);
    uVar1 = 0xffffffff >> (uVar3 & 0x1f);
    if ((uVar6 & uVar1) == 0) {
      return param_1;
    }
    uVar1 = uVar1 >> 1;
    if ((uVar6 & uVar1) != 0) {
      uVar5 = (ulong)(int)(~uVar1 & uVar6 | 0x40000000 >> (uVar3 & 0x1f));
    }
  }
  uVar4 = *(undefined8 *)(&DAT_0000b770 + (long)(int)uVar2 * 8);
  uVar8 = FUN_0000863e(uVar4,uVar9 << 0x20 | uVar5 & 0xffffffff);
  uVar3 = FUN_00008c50(uVar8,uVar4);
  return uVar3;
}



/* WARNING: Type propagation algorithm not settling */

ulong FUN_0000863e(ulong param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int in_frm;
  
  uVar12 = param_2 & 0xfffffffffffff;
  uVar6 = param_1 & 0xfffffffffffff;
  uVar8 = param_1 >> 0x34 & 0x7ff;
  uVar11 = param_2 >> 0x34 & 0x7ff;
  uVar1 = (int)uVar8 - (int)uVar11;
  uVar16 = -((long)param_1 >> 0x3f);
  param_2 = param_2 >> 0x3f;
  uVar15 = uVar6 * 8;
  uVar13 = uVar12 * 8;
  uVar10 = (ulong)(int)uVar1;
  uVar14 = uVar15;
  uVar7 = uVar16;
  uVar3 = uVar15;
  uVar4 = uVar12;
  uVar5 = uVar6;
  if (uVar16 == param_2) {
    if ((long)uVar10 < 1) {
      if (uVar10 == 0) {
        uVar10 = uVar8 + 1;
        if ((uVar10 & 0x7fe) == 0) {
          if (uVar8 == 0) {
            if (uVar6 != 0) {
              if ((uVar12 == 0) || (uVar15 = uVar15 + uVar13, -1 < (long)(uVar15 * 0x100)))
              goto LAB_00008a34;
              uVar11 = 1;
              uVar13 = uVar15 & 0xff7fffffffffffff;
              param_2 = uVar16;
              goto LAB_000087ce;
            }
            goto LAB_00008a30;
          }
          uVar10 = uVar16;
          if (uVar8 == 0x7ff) {
            if (uVar6 != 0) {
              uVar15 = uVar13;
              uVar6 = uVar12;
              if (uVar11 != 0x7ff) goto joined_r0x00008aa4;
              goto joined_r0x00008a8e;
            }
            if (uVar11 != 0x7ff) {
              uVar11 = 0x7ff;
              param_2 = uVar16;
              goto LAB_000087ce;
            }
LAB_00008802:
            uVar3 = uVar13;
            uVar4 = uVar6;
            if (uVar12 != 0) goto joined_r0x00008aa4;
            uVar14 = uVar15;
            param_2 = uVar16;
            if (uVar6 != 0) goto LAB_00008b4e;
            goto LAB_00008826;
          }
          uVar5 = uVar12;
          uVar14 = uVar13;
          if (uVar11 == 0x7ff) goto LAB_00008802;
joined_r0x00008a8e:
          param_2 = uVar16;
          uVar7 = uVar10;
          uVar3 = uVar15;
          uVar4 = uVar5;
          if (uVar6 != 0) goto joined_r0x00008aa4;
LAB_00008b4e:
          uVar11 = 0x7ff;
          uVar13 = uVar14;
          goto LAB_000087ce;
        }
        if (uVar10 != 0x7ff) {
          uVar11 = uVar10;
          uVar13 = uVar15 + uVar13 >> 1;
          param_2 = uVar16;
          goto LAB_000087ce;
        }
        if ((in_frm == 0) || (((in_frm == 3 || (in_frm == 2)) && (uVar16 != 0)))) {
          uVar11 = 0x7ff;
LAB_000088a0:
          uVar13 = 0;
          param_2 = uVar16;
          goto LAB_000089c8;
        }
      }
      else {
        if (uVar8 == 0) {
          if (uVar6 == 0) {
            if (uVar11 != 0x7ff) goto LAB_000088ca;
          }
          else {
            uVar7 = uVar15;
            if (uVar10 == 0xffffffffffffffff) goto LAB_00008758;
            if (uVar11 != 0x7ff) {
              uVar1 = ~uVar1;
              goto LAB_00008780;
            }
          }
LAB_0000873e:
          param_2 = uVar16;
          if (uVar12 == 0) goto LAB_000089c8;
          goto LAB_000087ce;
        }
        if (uVar11 == 0x7ff) goto LAB_0000873e;
        uVar1 = -uVar1;
        uVar15 = uVar15 | 0x80000000000000;
LAB_00008780:
        uVar7 = 1;
        if ((long)(int)uVar1 < 0x39) {
          uVar7 = (ulong)(uVar15 << ((long)(int)(0x40 - uVar1) & 0x3fU) != 0) |
                  uVar15 >> ((long)(int)uVar1 & 0x3fU);
        }
LAB_00008758:
        uVar13 = uVar7 + uVar13;
LAB_000086b2:
        if (-1 < (long)(uVar13 << 8)) goto LAB_000088ca;
        uVar11 = uVar11 + 1;
        if (uVar11 != 0x7ff) {
          uVar13 = uVar13 >> 1 & 0x7fbfffffffffffff | uVar13 & 1;
          param_2 = uVar16;
          goto LAB_000087ce;
        }
        if ((in_frm == 0) || (((in_frm == 3 || (in_frm == 2)) && (uVar16 != 0)))) goto LAB_000088a0;
      }
      uVar13 = 0xffffffffffffffff;
      uVar11 = 0x7fe;
      param_2 = uVar16;
LAB_00008868:
      if (in_frm == 2) {
        if (param_2 != 0) {
LAB_00008b5e:
          uVar13 = uVar13 + 8;
        }
      }
      else if (in_frm == 3) {
        if (param_2 == 0) goto LAB_00008b5e;
      }
      else if ((in_frm == 0) && ((uVar13 & 0xf) != 4)) {
        uVar13 = uVar13 + 4;
      }
    }
    else {
      if (uVar11 != 0) {
        if (uVar8 == 0x7ff) goto LAB_000086e8;
        uVar13 = uVar13 | 0x80000000000000;
LAB_0000870a:
        if ((long)uVar10 < 0x39) {
          uVar13 = (ulong)(uVar13 << ((long)(0x40 - (int)uVar10) & 0x3fU) != 0) |
                   uVar13 >> (uVar10 & 0x3f);
        }
        else {
          uVar13 = 1;
        }
LAB_000086b0:
        uVar13 = uVar15 + uVar13;
        uVar11 = uVar8;
        goto LAB_000086b2;
      }
      if (uVar12 != 0) {
        uVar10 = (ulong)(int)(uVar1 - 1);
        if (uVar10 != 0) {
          if (uVar8 == 0x7ff) goto LAB_000086e8;
          goto LAB_0000870a;
        }
        goto LAB_000086b0;
      }
      uVar11 = uVar8;
      uVar13 = uVar15;
      if (uVar8 == 0x7ff) {
        if (uVar6 != 0) {
          if (uVar15 >> 0x36 == 0) goto LAB_000086a0;
          goto LAB_000086f4;
        }
        goto LAB_00008b3c;
      }
LAB_000088ca:
      param_2 = uVar16;
      if (uVar11 != 0) goto LAB_000087ce;
LAB_00008a30:
      uVar15 = uVar13;
      if (uVar15 != 0) goto LAB_00008a34;
      uVar13 = 0;
      uVar11 = 0;
      param_2 = uVar16;
    }
  }
  else if ((long)uVar10 < 1) {
    if (uVar10 != 0) {
      if (uVar8 == 0) {
        if (uVar6 == 0) {
          uVar16 = param_2;
          if (uVar11 != 0x7ff) goto LAB_000088ca;
        }
        else {
          if (uVar10 == 0xffffffffffffffff) {
            lVar2 = uVar6 * -8;
            goto LAB_00008956;
          }
          if (uVar11 != 0x7ff) {
            uVar1 = ~uVar1;
            goto LAB_00008980;
          }
        }
      }
      else if (uVar11 != 0x7ff) {
        uVar1 = -uVar1;
        uVar15 = uVar15 | 0x80000000000000;
LAB_00008980:
        uVar16 = 1;
        if ((long)(int)uVar1 < 0x39) {
          uVar16 = (ulong)(uVar15 << ((long)(int)(0x40 - uVar1) & 0x3fU) != 0) |
                   uVar15 >> ((long)(int)uVar1 & 0x3fU);
        }
        lVar2 = -uVar16;
LAB_00008956:
        uVar13 = uVar13 + lVar2;
        goto LAB_000088de;
      }
      if (uVar12 != 0) goto LAB_000087ce;
      goto LAB_000089c8;
    }
    if ((uVar8 + 1 & 0x7fe) != 0) {
      uVar15 = uVar15 + uVar12 * -8;
      if ((long)(uVar15 * 0x100) < 0) {
        uVar15 = uVar13 + uVar6 * -8;
        uVar16 = param_2;
      }
      else if (uVar15 == 0) goto LAB_000089ba;
      goto LAB_00008ad6;
    }
    if (uVar8 != 0) {
      if (uVar8 == 0x7ff) {
        if (uVar6 == 0) {
          if (uVar11 == 0x7ff) {
            uVar7 = param_2;
            uVar3 = uVar13;
            uVar4 = uVar6;
            if (uVar12 != 0) goto joined_r0x00008aa4;
          }
          else {
LAB_00008ab0:
            uVar14 = uVar13;
            if (uVar12 != 0) goto LAB_00008b4e;
            uVar11 = 0x7ff;
          }
LAB_00008abc:
          uVar13 = 0x40000000000000;
          param_2 = 0;
          goto LAB_000089c8;
        }
        uVar10 = param_2;
        uVar15 = uVar13;
        uVar6 = uVar12;
        if (uVar11 == 0x7ff) goto joined_r0x00008a8e;
      }
      else {
        if (uVar11 == 0x7ff) {
          uVar7 = param_2;
          uVar3 = uVar13;
          uVar4 = uVar6;
          if (uVar12 != 0) goto joined_r0x00008aa4;
          param_2 = uVar16;
          if (uVar6 == 0) goto LAB_00008abc;
          goto LAB_00008b4e;
        }
        if (uVar6 == 0) goto LAB_00008ab0;
      }
joined_r0x00008aa4:
      uVar14 = uVar3;
      param_2 = uVar7;
      if (uVar4 == 0) goto LAB_00008b4e;
      uVar16 = 0;
      uVar13 = 0x40000000000000;
LAB_00008826:
      uVar11 = 0x7ff;
      param_2 = uVar16;
      goto LAB_000089c8;
    }
    uVar11 = param_2;
    uVar7 = uVar13;
    if (uVar6 != 0) {
      if (uVar12 == 0) goto LAB_00008a34;
      uVar12 = uVar15 + uVar12 * -8;
      uVar11 = uVar16;
      uVar7 = uVar12;
      if ((long)(uVar12 * 0x100) < 0) {
        uVar13 = uVar13 + uVar6 * -8;
        uVar16 = param_2;
        goto LAB_00008a30;
      }
    }
    uVar15 = uVar7;
    uVar16 = uVar11;
    if (uVar12 == 0) {
LAB_000089ba:
      uVar13 = 0;
      uVar11 = 0;
      param_2 = (ulong)(in_frm == 2);
      goto LAB_000089c8;
    }
LAB_00008a34:
    uVar11 = 0;
    uVar13 = uVar15;
    param_2 = uVar16;
LAB_000087ce:
    if ((uVar13 & 7) != 0) goto LAB_00008868;
  }
  else {
    if (uVar11 != 0) {
      if (uVar8 == 0x7ff) goto LAB_000086e8;
      uVar13 = uVar13 | 0x80000000000000;
LAB_000088f8:
      if ((long)uVar10 < 0x39) {
        uVar13 = (ulong)(uVar13 << ((long)(0x40 - (int)uVar10) & 0x3fU) != 0) |
                 uVar13 >> (uVar10 & 0x3f);
      }
      else {
        uVar13 = 1;
      }
LAB_000088da:
      uVar13 = uVar15 - uVar13;
      uVar11 = uVar8;
      param_2 = uVar16;
LAB_000088de:
      uVar16 = param_2;
      if (-1 < (long)(uVar13 << 8)) goto LAB_000088ca;
      uVar15 = uVar13 & 0x7fffffffffffff;
      uVar8 = uVar11;
LAB_00008ad6:
      iVar9 = FUN_000091c6(uVar15);
      uVar11 = (ulong)(iVar9 + -8);
      uVar15 = uVar15 << (uVar11 & 0x3f);
      if ((long)uVar11 < (long)uVar8) {
        uVar11 = uVar8 - uVar11;
        uVar13 = uVar15 & 0xff7fffffffffffff;
        goto LAB_000088ca;
      }
      iVar9 = ((iVar9 + -8) - (int)uVar8) + 1;
      uVar13 = uVar15 >> ((long)iVar9 & 0x3fU) |
               (ulong)(uVar15 << ((long)(0x40 - iVar9) & 0x3fU) != 0);
      goto LAB_00008a30;
    }
    if (uVar12 == 0) {
      uVar11 = uVar8;
      uVar13 = uVar15;
      if (uVar8 != 0x7ff) goto LAB_000088ca;
    }
    else {
      uVar10 = (ulong)(int)(uVar1 - 1);
      if (uVar10 == 0) goto LAB_000088da;
      if (uVar8 != 0x7ff) goto LAB_000088f8;
    }
LAB_000086e8:
    if (uVar6 != 0) {
      if ((long)(uVar6 << 0xc) < 0) {
LAB_000086f4:
        uVar11 = 0x7ff;
        uVar13 = uVar15;
        param_2 = uVar16;
      }
      else {
LAB_000086a0:
        uVar11 = 0x7ff;
        uVar13 = uVar15;
        param_2 = uVar16;
      }
      goto LAB_000087ce;
    }
LAB_00008b3c:
    uVar13 = 0;
    uVar11 = 0x7ff;
    param_2 = uVar16;
  }
LAB_000089c8:
  if ((long)(uVar13 << 8) < 0) {
    uVar11 = uVar11 + 1;
    if (uVar11 == 0x7ff) {
      uVar13 = 0;
      if (in_frm != 0) {
        if (in_frm == 3) {
          if (param_2 == 0) goto LAB_000089e2;
        }
        else if ((in_frm == 2) && (param_2 != 0)) goto LAB_000089e2;
        uVar13 = 0xffffffffffffffff;
        uVar11 = 0x7fe;
      }
    }
    else {
      uVar13 = uVar13 & 0xff7fffffffffffff;
    }
  }
LAB_000089e2:
  uVar13 = uVar13 >> 3;
  if ((uVar11 == 0x7ff) && (uVar13 != 0)) {
    uVar13 = 0x8000000000000;
    param_2 = 0;
  }
  return (uVar11 & 0x7ff) << 0x34 | uVar13 & 0xfffffffffffff | param_2 << 0x3f;
}



undefined8 FUN_00008bc8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = param_1 & 0xfffffffffffff;
  lVar4 = -((long)param_1 >> 0x3f);
  uVar1 = param_1 >> 0x34 & 0x7ff;
  uVar3 = param_2 & 0xfffffffffffff;
  uVar2 = param_2 >> 0x34 & 0x7ff;
  if (uVar1 == 0x7ff) {
    if (uVar5 != 0) {
      return 0xfffffffffffffffe;
    }
    if (uVar2 == 0x7ff) {
LAB_00008c04:
      if (uVar3 != 0) {
        return 0xfffffffffffffffe;
      }
      goto LAB_00008c06;
    }
LAB_00008c4a:
    if ((uVar2 == 0) && (uVar3 == 0)) goto LAB_00008c14;
  }
  else {
    if (uVar2 == 0x7ff) goto LAB_00008c04;
LAB_00008c06:
    if (uVar1 != 0) goto LAB_00008c4a;
    if ((uVar2 == 0) && (uVar3 == 0)) {
      if (uVar5 == 0) {
        return 0;
      }
      goto LAB_00008c14;
    }
    if (uVar5 == 0) {
      if (-((long)param_2 >> 0x3f) != 0) {
        return 1;
      }
      return 0xffffffffffffffff;
    }
  }
  if ((lVar4 == -((long)param_2 >> 0x3f)) && (uVar1 <= uVar2)) {
    if (uVar2 <= uVar1) {
      if (uVar3 < uVar5) goto LAB_00008c14;
      if (uVar3 <= uVar5) {
        return 0;
      }
    }
    if (lVar4 == 0) {
      return 0xffffffffffffffff;
    }
    return 1;
  }
LAB_00008c14:
  if (lVar4 == 0) {
    return 1;
  }
  return 0xffffffffffffffff;
}



/* WARNING: Type propagation algorithm not settling */

ulong FUN_00008c50(ulong param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int in_frm;
  
  uVar11 = param_1 & 0xfffffffffffff;
  uVar5 = -((long)param_1 >> 0x3f);
  uVar9 = param_2 & 0xfffffffffffff;
  uVar14 = param_1 >> 0x34 & 0x7ff;
  uVar7 = param_2 >> 0x34 & 0x7ff;
  uVar12 = uVar11 * 8;
  param_2 = param_2 >> 0x3f;
  uVar10 = uVar9 * 8;
  if ((uVar7 != 0x7ff) || (uVar9 == 0)) {
    param_2 = param_2 ^ 1;
  }
  uVar1 = (int)uVar14 - (int)uVar7;
  uVar13 = (ulong)(int)uVar1;
  uVar8 = uVar12;
  uVar2 = uVar12;
  uVar3 = uVar5;
  uVar4 = uVar11;
  if (param_2 == uVar5) {
    if ((long)uVar13 < 1) {
      if (uVar13 != 0) {
        if (uVar14 == 0) {
          if (uVar11 == 0) {
            if (uVar7 != 0x7ff) goto LAB_00008cb4;
            param_2 = uVar5;
            uVar8 = uVar10;
            if (uVar9 != 0) goto LAB_00008de4;
            goto LAB_00008fc4;
          }
          if (uVar13 == 0xffffffffffffffff) goto LAB_00008d6c;
          if (uVar7 != 0x7ff) {
            uVar1 = ~uVar1;
            goto LAB_00008d94;
          }
        }
        else if (uVar7 != 0x7ff) {
          uVar1 = -uVar1;
          uVar12 = uVar12 | 0x80000000000000;
LAB_00008d94:
          if ((long)(int)uVar1 < 0x39) {
            uVar12 = (ulong)(uVar12 << ((long)(int)(0x40 - uVar1) & 0x3fU) != 0) |
                     uVar12 >> ((long)(int)uVar1 & 0x3fU);
          }
          else {
            uVar12 = 1;
          }
LAB_00008d6c:
          uVar10 = uVar12 + uVar10;
          goto LAB_00008cc6;
        }
        uVar8 = uVar10;
        if (uVar9 == 0) {
          param_2 = uVar5;
          uVar12 = 0;
          goto LAB_00008fc4;
        }
        goto LAB_00008de4;
      }
      uVar8 = uVar14 + 1;
      if ((uVar8 & 0x7fe) == 0) {
        if (uVar14 == 0) {
          if (uVar11 != 0) {
            if ((uVar9 == 0) || (uVar12 = uVar12 + uVar10, -1 < (long)(uVar12 * 0x100)))
            goto LAB_00009030;
            uVar7 = 1;
            uVar8 = uVar12 & 0xff7fffffffffffff;
            goto LAB_00008de4;
          }
          goto LAB_0000902a;
        }
        if (uVar14 != 0x7ff) {
          uVar14 = uVar9;
          uVar2 = uVar10;
          uVar8 = uVar12;
          if (uVar7 != 0x7ff) goto joined_r0x00008e18;
LAB_00008e20:
          uVar2 = uVar10;
          if (uVar9 != 0) goto joined_r0x000090a2;
          if (uVar11 != 0) goto LAB_000090b8;
          goto LAB_00008e44;
        }
        if (uVar11 == 0) {
          if (uVar7 != 0x7ff) {
            uVar7 = 0x7ff;
            uVar8 = uVar10;
            goto LAB_00008de4;
          }
          goto LAB_00008e20;
        }
        uVar4 = uVar9;
        uVar14 = uVar11;
        uVar8 = uVar10;
        uVar11 = uVar9;
        if (uVar7 != 0x7ff) goto joined_r0x000090a2;
joined_r0x00008e18:
        uVar12 = uVar2;
        uVar2 = uVar8;
        uVar4 = uVar14;
        if (uVar11 != 0) goto joined_r0x000090a2;
LAB_000090b8:
        uVar7 = 0x7ff;
        uVar8 = uVar12;
        goto LAB_00008de4;
      }
      if (uVar8 != 0x7ff) {
        uVar7 = uVar8;
        uVar8 = uVar12 + uVar10 >> 1;
        goto LAB_00008de4;
      }
      if (in_frm == 0) {
LAB_00008e66:
        uVar7 = 0x7ff;
        goto LAB_00008eae;
      }
      if (in_frm == 3) {
        if (uVar5 == 0) goto LAB_00008e66;
      }
      else if ((in_frm == 2) && (uVar5 != 0)) goto LAB_00008e66;
LAB_00008e7a:
      uVar8 = 0xffffffffffffffff;
      uVar7 = 0x7fe;
      param_2 = uVar5;
    }
    else {
      if (uVar7 == 0) {
        if (uVar9 == 0) {
LAB_00008cac:
          uVar10 = uVar12;
          uVar7 = uVar14;
          if (uVar14 != 0x7ff) goto LAB_00008cb4;
        }
        else {
          uVar13 = (ulong)(int)(uVar1 - 1);
          if (uVar13 == 0) goto LAB_00008cc4;
          if (uVar14 != 0x7ff) goto LAB_00008d1c;
        }
      }
      else if (uVar14 != 0x7ff) {
        uVar10 = uVar10 | 0x80000000000000;
LAB_00008d1c:
        if ((long)uVar13 < 0x39) {
          uVar10 = (ulong)(uVar10 << ((long)(0x40 - (int)uVar13) & 0x3fU) != 0) |
                   uVar10 >> (uVar13 & 0x3f);
        }
        else {
          uVar10 = 1;
        }
LAB_00008cc4:
        uVar10 = uVar12 + uVar10;
        uVar7 = uVar14;
LAB_00008cc6:
        if (-1 < (long)(uVar10 << 8)) {
LAB_00008cb4:
          uVar8 = uVar10;
          if (uVar7 == 0) goto LAB_0000902a;
          goto LAB_00008de4;
        }
        uVar7 = uVar7 + 1;
        if (uVar7 != 0x7ff) {
          uVar8 = uVar10 >> 1 & 0x7fbfffffffffffff | uVar10 & 1;
          goto LAB_00008de4;
        }
        if (in_frm != 0) {
          if (in_frm == 3) {
            if (uVar5 != 0) goto LAB_00008e7a;
          }
          else if ((in_frm != 2) || (uVar5 == 0)) goto LAB_00008e7a;
        }
LAB_00008eae:
        param_2 = uVar5;
        uVar12 = 0;
        goto LAB_00008fc4;
      }
LAB_00008cf8:
      if (uVar11 == 0) {
        uVar7 = 0x7ff;
        param_2 = uVar5;
        goto LAB_00008fc4;
      }
      uVar7 = 0x7ff;
LAB_00008de4:
      param_2 = uVar5;
      uVar12 = uVar8;
      if ((uVar8 & 7) == 0) goto LAB_00008fc4;
    }
    uVar12 = uVar8;
    if (in_frm == 2) {
      if (param_2 != 0) {
LAB_0000914a:
        uVar12 = uVar8 + 8;
      }
    }
    else if (in_frm == 3) {
      if (param_2 == 0) goto LAB_0000914a;
    }
    else if ((in_frm == 0) && ((uVar8 & 0xf) != 4)) {
      uVar12 = uVar8 + 4;
    }
  }
  else {
    if (0 < (long)uVar13) {
      if (uVar7 == 0) {
        if (uVar9 == 0) goto LAB_00008cac;
        uVar13 = (ulong)(int)(uVar1 - 1);
        if (uVar13 == 0) goto LAB_00008ed8;
        if (uVar14 != 0x7ff) goto LAB_00008ef2;
      }
      else if (uVar14 != 0x7ff) {
        uVar10 = uVar10 | 0x80000000000000;
LAB_00008ef2:
        if ((long)uVar13 < 0x39) {
          uVar10 = (ulong)(uVar10 << ((long)(0x40 - (int)uVar13) & 0x3fU) != 0) |
                   uVar10 >> (uVar13 & 0x3f);
        }
        else {
          uVar10 = 1;
        }
LAB_00008ed8:
        uVar10 = uVar12 - uVar10;
        param_2 = uVar5;
        uVar7 = uVar14;
LAB_00008eda:
        uVar5 = param_2;
        if (-1 < (long)(uVar10 << 8)) goto LAB_00008cb4;
        uVar12 = uVar10 & 0x7fffffffffffff;
        uVar14 = uVar7;
        goto LAB_000090d0;
      }
      goto LAB_00008cf8;
    }
    if (uVar13 == 0) {
      if ((uVar14 + 1 & 0x7fe) == 0) {
        if (uVar14 == 0) {
          uVar7 = param_2;
          uVar14 = uVar10;
          if (uVar11 != 0) {
            if (uVar9 == 0) goto LAB_00009030;
            uVar9 = uVar12 + uVar9 * -8;
            uVar7 = uVar5;
            uVar14 = uVar9;
            if ((long)(uVar9 * 0x100) < 0) {
              uVar5 = param_2;
              uVar10 = uVar10 + uVar11 * -8;
              goto LAB_0000902a;
            }
          }
          uVar12 = uVar14;
          uVar5 = uVar7;
          if (uVar9 == 0) {
LAB_00008fb6:
            uVar7 = 0;
            param_2 = (ulong)(in_frm == 2);
            uVar12 = 0;
            goto LAB_00008fc4;
          }
          goto LAB_00009030;
        }
        if (uVar14 == 0x7ff) {
          if (uVar11 == 0) {
            if (uVar7 == 0x7ff) {
              uVar2 = uVar10;
              uVar3 = param_2;
              if (uVar9 == 0) goto LAB_00009198;
              goto joined_r0x000090a2;
            }
LAB_000090b0:
            uVar5 = param_2;
            uVar12 = uVar10;
            if (uVar9 == 0) {
LAB_00009198:
              uVar7 = 0x7ff;
              param_2 = 0;
              uVar12 = 0x40000000000000;
              goto LAB_00008fc4;
            }
            goto LAB_000090b8;
          }
          uVar4 = uVar9;
          if ((uVar7 == 0x7ff) && (uVar2 = uVar10, uVar3 = param_2, uVar4 = uVar11, uVar9 == 0))
          goto LAB_00008de4;
        }
        else if (uVar7 == 0x7ff) {
          uVar2 = uVar10;
          uVar3 = param_2;
          if (uVar9 == 0) {
            if (uVar11 == 0) goto LAB_00009198;
            goto LAB_00008de4;
          }
        }
        else {
          uVar4 = uVar9;
          if (uVar11 == 0) goto LAB_000090b0;
        }
joined_r0x000090a2:
        uVar5 = uVar3;
        uVar12 = uVar2;
        if (uVar4 == 0) goto LAB_000090b8;
        uVar5 = 0;
        uVar12 = 0x40000000000000;
LAB_00008e44:
        uVar7 = 0x7ff;
        param_2 = uVar5;
      }
      else {
        uVar12 = uVar12 + uVar9 * -8;
        if ((long)(uVar12 * 0x100) < 0) {
          uVar12 = uVar10 + uVar11 * -8;
          uVar5 = param_2;
        }
        else if (uVar12 == 0) goto LAB_00008fb6;
LAB_000090d0:
        iVar6 = FUN_000091c6(uVar12);
        uVar7 = (ulong)(iVar6 + -8);
        uVar12 = uVar12 << (uVar7 & 0x3f);
        if ((long)uVar7 < (long)uVar14) {
          uVar7 = uVar14 - uVar7;
          uVar10 = uVar12 & 0xff7fffffffffffff;
          goto LAB_00008cb4;
        }
        iVar6 = ((iVar6 + -8) - (int)uVar14) + 1;
        uVar10 = uVar12 >> ((long)iVar6 & 0x3fU) |
                 (ulong)(uVar12 << ((long)(0x40 - iVar6) & 0x3fU) != 0);
LAB_0000902a:
        uVar12 = uVar10;
        uVar7 = 0;
        param_2 = uVar5;
        if (uVar12 != 0) {
LAB_00009030:
          uVar7 = 0;
          uVar8 = uVar12;
          goto LAB_00008de4;
        }
      }
    }
    else {
      if (uVar14 == 0) {
        if (uVar11 == 0) {
          uVar5 = param_2;
          if (uVar7 != 0x7ff) goto LAB_00008cb4;
          uVar8 = uVar10;
          if (uVar9 == 0) goto LAB_00008fc4;
          goto LAB_00008de4;
        }
        if (uVar13 == 0xffffffffffffffff) goto LAB_00008f4e;
        if (uVar7 != 0x7ff) {
          uVar1 = ~uVar1;
          goto LAB_00008f7a;
        }
      }
      else if (uVar7 != 0x7ff) {
        uVar1 = -uVar1;
        uVar12 = uVar12 | 0x80000000000000;
LAB_00008f7a:
        if ((long)(int)uVar1 < 0x39) {
          uVar12 = uVar12 >> ((long)(int)uVar1 & 0x3fU) |
                   (ulong)(uVar12 << ((long)(int)(0x40 - uVar1) & 0x3fU) != 0);
        }
        else {
          uVar12 = 1;
        }
LAB_00008f4e:
        uVar10 = uVar10 - uVar12;
        goto LAB_00008eda;
      }
      uVar5 = param_2;
      uVar8 = uVar10;
      if (uVar9 != 0) goto LAB_00008de4;
      uVar12 = 0;
    }
  }
LAB_00008fc4:
  if ((long)(uVar12 << 8) < 0) {
    uVar7 = uVar7 + 1;
    if (uVar7 == 0x7ff) {
      uVar12 = 0;
      if (in_frm != 0) {
        if (in_frm == 3) {
          if (param_2 == 0) goto LAB_00008fde;
        }
        else if ((in_frm == 2) && (param_2 != 0)) goto LAB_00008fde;
        uVar12 = 0xffffffffffffffff;
        uVar7 = 0x7fe;
      }
    }
    else {
      uVar12 = uVar12 & 0xff7fffffffffffff;
    }
  }
LAB_00008fde:
  uVar12 = uVar12 >> 3;
  if ((uVar7 == 0x7ff) && (uVar12 != 0)) {
    uVar12 = 0x8000000000000;
    param_2 = 0;
  }
  return (uVar7 & 0x7ff) << 0x34 | uVar12 & 0xfffffffffffff | param_2 << 0x3f;
}



long FUN_000091c6(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0x38;
  do {
    if ((param_1 >> (uVar1 & 0x3f) & 0xff) != 0) break;
    uVar1 = uVar1 - 8;
  } while (uVar1 != 0);
  return (long)(int)((0x40 - (int)uVar1) - (uint)(byte)(&DAT_0000b780)[param_1 >> (uVar1 & 0x3f)]);
}



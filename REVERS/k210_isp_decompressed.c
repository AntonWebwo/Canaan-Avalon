typedef unsigned char   undefined;

typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;



// WARNING: Removing unreachable block (ram,0x00000110)

void FUN_00000100(void)

{
  gp = gp + 0x75c;
  tp = 0x949c0;
  FUN_0000033a();
  return;
}



// WARNING: Removing unreachable block (ram,0x000001e0)
// WARNING: Removing unreachable block (ram,0x000001e4)
// WARNING: Restarted to delay deadcode elimination for space: stack

undefined8
FUN_00000120(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  long in_mcause;
  undefined auStack_200 [8];
  undefined auStack_100 [80];
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  
  uStack_b0 = param_2;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_8;
  uStack_78 = param_9;
  if (in_mcause < 0) {
    FUN_00000510();
  }
  else {
    FUN_00000bde(auStack_200,auStack_100);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0000030e)
// WARNING: Removing unreachable block (ram,0x00000320)

void FUN_000002f8(long param_1)

{
  ulong in_mip;
  
  if (param_1 == 0) {
    return;
  }
  FUN_00000c12();
  do {
    wfi();
  } while ((in_mip & 8) == 0);
  FUN_00000c12(param_1);
  do {
    wfi();
  } while ((in_mip & 8) == 0);
  return;
}



void FUN_00000332(code *UNRECOVERED_JUMPTABLE)

{
                    // WARNING: Could not recover jumptable at 0x00000338. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(0,0);
  return;
}



void FUN_0000033a(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_0000319e(tp,0x94998,0);
  FUN_000032c4(uVar1,0,0);
  if (param_1 != 0) goto LAB_000003b2;
  puVar3 = &DAT_00004058;
  for (puVar2 = &DAT_00004058; puVar2 < (undefined4 *)(gp + -0x7d8); puVar2 = puVar2 + 1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(gp + -0x7d8);
  param_3 = (undefined4 *)0x94998;
  do {
    param_4 = puVar3;
    if (param_3 <= puVar3) {
      FUN_00000c36();
      param_4 = puVar3;
LAB_000003b2:
      FUN_000002f8(param_1,param_2);
      if (param_1 == 0) {
        FUN_00000bf2(1);
        FUN_00000bf2(1);
      }
      FUN_00000332(param_1,param_2,0x2ca);
      FUN_00000bc2();
    }
    puVar3 = param_4 + 1;
    *param_4 = 0;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000003fa)

void FUN_000003e6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_mhartid;
  
  if (in_mhartid != 0) goto LAB_00000494;
  FUN_00000b5e(0x805fb800,s_Cause_0x_016lx__EPC_0x_016lx__Co_000033a0,param_1,param_2);
  puVar5 = &DAT_000034c8;
  lVar2 = 1;
  do {
    lVar1 = FUN_00003334(0x805fb800);
    lVar4 = (long)((int)lVar2 + 2);
    FUN_00000b5e(lVar1 + 0x805fb800,s_reg__02d___s____0x_016lx__reg__0_000033c8,
                 (long)((int)lVar2 + -1),*puVar5,*param_3,lVar2,puVar5[2],param_3[1]);
    puVar5 = puVar5 + 4;
    param_3 = param_3 + 2;
    lVar2 = lVar4;
  } while (lVar4 != 0x21);
  lVar2 = FUN_00003334(0x805fb800);
  FUN_00000b5e(lVar2 + 0x805fb800,s_Reason___s_00003418,s_unhandled_interrupt_00003400);
  uVar3 = FUN_00003334(0x805fb800);
  FUN_00001c26(2,0x805fb800,uVar3);
  do {
    FUN_00000bc2(0x539);
LAB_00000494:
    FUN_00000b5e(0x805fbc00,s_Cause_0x_016lx__EPC_0x_016lx__Co_00003428);
    puVar5 = &DAT_000034c8;
    lVar2 = 1;
    do {
      lVar1 = FUN_00003334(0x805fbc00);
      lVar4 = (long)((int)lVar2 + 2);
      FUN_00000b5e(lVar1 + 0x805fbc00,s_reg__02d___s____0x_016lx__reg__0_000033c8,
                   (long)((int)lVar2 + -1),*puVar5,*param_3,lVar2,puVar5[2],param_3[1]);
      puVar5 = puVar5 + 4;
      param_3 = param_3 + 2;
      lVar2 = lVar4;
    } while (lVar4 != 0x21);
    lVar2 = FUN_00003334(0x805fbc00);
    FUN_00000b5e(lVar2 + 0x805fbc00,s_Reason___s_00003418,s_unhandled_interrupt_00003400);
  } while( true );
}



void FUN_00000510(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x00000522. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_00003450 + param_1 * 8))();
  return;
}



void FUN_00000524(ulong param_1,byte *param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  
  pcVar3 = *(char **)(param_2 + 0x18);
  if ((*(int *)(param_2 + 8) != 0) || (param_1 != 0)) {
    for (uVar4 = 1; (ulong)*(uint *)(param_2 + 0x10) <= param_1 / uVar4;
        uVar4 = uVar4 * *(uint *)(param_2 + 0x10)) {
    }
    while (uVar4 != 0) {
      uVar2 = param_1 / uVar4;
      param_1 = param_1 % uVar4;
      uVar4 = uVar4 / *(uint *)(param_2 + 0x10);
      cVar1 = '0';
      if ((9 < (int)uVar2) && (cVar1 = '7', (*param_2 & 4) == 0)) {
        cVar1 = 'W';
      }
      *pcVar3 = (char)uVar2 + cVar1;
      pcVar3 = pcVar3 + 1;
    }
    *(long *)(param_2 + 0x20) = (long)pcVar3 - *(long *)(param_2 + 0x18);
  }
  return;
}



void FUN_00000586(ulong param_1,byte *param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  
  pcVar3 = *(char **)(param_2 + 0x18);
  if ((*(int *)(param_2 + 8) != 0) || (param_1 != 0)) {
    for (uVar4 = 1; (ulong)*(uint *)(param_2 + 0x10) <= param_1 / uVar4;
        uVar4 = uVar4 * *(uint *)(param_2 + 0x10)) {
    }
    while (uVar4 != 0) {
      uVar2 = param_1 / uVar4;
      param_1 = param_1 % uVar4;
      uVar4 = uVar4 / *(uint *)(param_2 + 0x10);
      cVar1 = '0';
      if ((9 < (int)uVar2) && (cVar1 = '7', (*param_2 & 4) == 0)) {
        cVar1 = 'W';
      }
      *pcVar3 = (char)uVar2 + cVar1;
      pcVar3 = pcVar3 + 1;
    }
    *(long *)(param_2 + 0x20) = (long)pcVar3 - *(long *)(param_2 + 0x18);
  }
  return;
}



void FUN_000005e8(long param_1,byte *param_2)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = *(char **)(param_2 + 0x18);
  if (*(int *)(param_2 + 8) != 0 || param_1 != 0) {
    for (uVar4 = 1; *(uint *)(param_2 + 0x10) <= (uint)param_1 / uVar4;
        uVar4 = *(uint *)(param_2 + 0x10) * uVar4) {
    }
    while (uVar4 != 0) {
      uVar1 = (uint)param_1 / uVar4;
      param_1 = (long)(int)((uint)param_1 % uVar4);
      uVar4 = uVar4 / *(uint *)(param_2 + 0x10);
      cVar2 = '0';
      if ((9 < (int)uVar1) && (cVar2 = '7', (*param_2 & 4) == 0)) {
        cVar2 = 'W';
      }
      *pcVar3 = (char)uVar1 + cVar2;
      pcVar3 = pcVar3 + 1;
    }
    *(long *)(param_2 + 0x20) = (long)pcVar3 - *(long *)(param_2 + 0x18);
  }
  return;
}



void FUN_00000644(undefined8 param_1,code *param_2,ulong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  
  uVar6 = param_3[4];
  iVar2 = (int)uVar6;
  iVar3 = *(int *)(param_3 + 1) - iVar2;
  iVar2 = *(int *)((long)param_3 + 4) - iVar2;
  pcVar4 = (char *)param_3[3];
  if (*(byte *)((long)param_3 + 0xc) != 0) {
    iVar2 = iVar2 + -1;
  }
  if ((*(byte *)param_3 & 2) != 0) {
    if (*(int *)(param_3 + 2) == 0x10) {
      iVar2 = iVar2 + -2;
    }
    else if (*(int *)(param_3 + 2) == 8) {
      iVar2 = iVar2 + -1;
    }
  }
  if (0 < iVar3) {
    iVar2 = iVar2 - iVar3;
  }
  iVar7 = iVar2;
  if ((*param_3 & 9) == 0) {
    for (; 0 < iVar7; iVar7 = iVar7 + -1) {
      (*param_2)(param_1,0x20);
    }
    iVar7 = iVar2 + -1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    iVar2 = iVar7 - iVar2;
  }
  if (*(byte *)((long)param_3 + 0xc) != 0) {
    (*param_2)(param_1);
  }
  if ((*(byte *)param_3 & 2) != 0) {
    if (*(int *)(param_3 + 2) == 0x10) {
      (*param_2)(param_1,0x30);
      uVar1 = 0x58;
      if ((*(byte *)param_3 & 4) == 0) {
        uVar1 = 0x78;
      }
    }
    else {
      if (*(int *)(param_3 + 2) != 8) goto LAB_000006da;
      uVar1 = 0x30;
    }
    (*param_2)(param_1,uVar1);
  }
LAB_000006da:
  for (; 0 < iVar3; iVar3 = iVar3 + -1) {
    (*param_2)(param_1,0x30);
  }
  iVar3 = iVar2;
  if ((*(byte *)param_3 & 1) != 0) {
    for (; 0 < iVar3; iVar3 = iVar3 + -1) {
      (*param_2)(param_1,0x30);
    }
    iVar3 = iVar2 + -1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    iVar2 = iVar3 - iVar2;
  }
  pcVar5 = pcVar4;
  while ((pcVar5 != pcVar4 + uVar6 && (*pcVar5 != '\0'))) {
    (*param_2)(param_1);
    pcVar5 = pcVar5 + 1;
  }
  if ((*param_3 & 9) == 8) {
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      (*param_2)(param_1,0x20);
    }
  }
  return;
}



void FUN_000007a4(uint param_1,undefined8 *param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  pbVar1 = (byte *)*param_2;
  do {
    uVar3 = param_1 - 0x30;
    if (9 < (uVar3 & 0xff)) {
      if ((param_1 - 0x61 & 0xff) < 6) {
        uVar3 = param_1 - 0x57;
      }
      else {
        if (5 < (param_1 - 0x41 & 0xff)) {
LAB_000007d2:
          *param_2 = pbVar1;
          *param_3 = iVar2;
          return;
        }
        uVar3 = param_1 - 0x37;
      }
      if (uVar3 != 10) goto LAB_000007d2;
    }
    param_1 = (uint)*pbVar1;
    iVar2 = iVar2 * 10 + uVar3;
    pbVar1 = pbVar1 + 1;
  } while( true );
}



void FUN_000007f8(undefined8 param_1,code *param_2,byte *param_3,long *param_4)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  char *pcVar5;
  byte *apbStack_98 [2];
  int iStack_84;
  char acStack_80 [24];
  byte abStack_68 [4];
  int iStack_64;
  int iStack_60;
  undefined uStack_5c;
  undefined4 uStack_58;
  char *pcStack_50;
  long lStack_48;
  
  apbStack_98[0] = param_3;
LAB_0000081c:
  do {
    while( true ) {
      if (*apbStack_98[0] == 0) {
        return;
      }
      if (*apbStack_98[0] == 0x25) break;
      apbStack_98[0] = apbStack_98[0] + 1;
      (*param_2)(param_1);
    }
    iStack_64 = 0;
    uStack_5c = 0;
    abStack_68[0] = abStack_68[0] & 0xf0;
    iStack_60 = -1;
    lStack_48 = 0;
    apbStack_98[0] = apbStack_98[0] + 1;
    while( true ) {
      pbVar3 = apbStack_98[0] + 1;
      bVar1 = *apbStack_98[0];
      uVar2 = (ulong)bVar1;
      if (uVar2 == 0) break;
      if (uVar2 == 0x2d) {
        abStack_68[0] = abStack_68[0] | 8;
        apbStack_98[0] = pbVar3;
      }
      else if (uVar2 == 0x30) {
        abStack_68[0] = abStack_68[0] | 1;
        apbStack_98[0] = pbVar3;
      }
      else {
        if (uVar2 != 0x23) break;
        abStack_68[0] = abStack_68[0] | 2;
        apbStack_98[0] = pbVar3;
      }
    }
    if ((abStack_68[0] & 8) != 0) {
      abStack_68[0] = abStack_68[0] & 0xfe;
    }
    pcStack_50 = acStack_80;
    if (uVar2 == 0x2a) {
      pbVar3 = apbStack_98[0] + 2;
      uVar2 = (ulong)apbStack_98[0][1];
      iStack_64 = *(int *)param_4;
      param_4 = param_4 + 1;
      apbStack_98[0] = pbVar3;
      if (iStack_64 < 0) {
        iStack_64 = -iStack_64;
        abStack_68[0] = abStack_68[0] | 8;
      }
    }
    else {
      apbStack_98[0] = pbVar3;
      if ((byte)(bVar1 - 0x30) < 10) {
        uVar2 = FUN_000007a4(apbStack_98,&iStack_84);
        iStack_64 = iStack_84;
      }
    }
    if (uVar2 == 0x2e) {
      uVar2 = (ulong)*apbStack_98[0];
      if (uVar2 == 0x2a) {
        pbVar3 = apbStack_98[0] + 2;
        iStack_60 = *(int *)param_4;
        uVar2 = (ulong)apbStack_98[0][1];
        param_4 = param_4 + 1;
        apbStack_98[0] = pbVar3;
        if (iStack_60 < 0) {
          iStack_60 = -1;
        }
      }
      else if ((byte)(*apbStack_98[0] - 0x30) < 10) {
        apbStack_98[0] = apbStack_98[0] + 1;
        uVar2 = FUN_000007a4(apbStack_98,&iStack_84);
        iStack_60 = iStack_84;
      }
      else {
        iStack_60 = 0;
        apbStack_98[0] = apbStack_98[0] + 1;
      }
    }
    if (-1 < iStack_60) {
      abStack_68[0] = abStack_68[0] & 0xfe;
    }
    if (uVar2 == 0x7a) {
      uVar2 = (ulong)*apbStack_98[0];
      lVar4 = 1;
      pbVar3 = apbStack_98[0] + 1;
    }
    else {
      lVar4 = 0;
      pbVar3 = apbStack_98[0];
      if (uVar2 == 0x6c) {
        uVar2 = (ulong)*apbStack_98[0];
        lVar4 = 1;
        pbVar3 = apbStack_98[0] + 1;
        if (uVar2 == 0x6c) {
          uVar2 = (ulong)apbStack_98[0][1];
          lVar4 = 2;
          pbVar3 = apbStack_98[0] + 2;
        }
      }
    }
    apbStack_98[0] = pbVar3;
    if (uVar2 == 0x69) {
LAB_000009ee:
      uStack_58 = 10;
      if (iStack_60 < 0) {
        iStack_60 = 1;
      }
      if (lVar4 != 2) {
        if (lVar4 != 1) {
          lVar4 = (long)*(int *)param_4;
          if (lVar4 < 0) {
            lVar4 = (long)-*(int *)param_4;
            uStack_5c = 0x2d;
          }
          goto LAB_00000ac8;
        }
        lVar4 = *param_4;
        if (lVar4 < 0) {
          lVar4 = -lVar4;
          uStack_5c = 0x2d;
        }
        goto LAB_00000aae;
      }
      lVar4 = *param_4;
      if (lVar4 < 0) {
        lVar4 = -lVar4;
        uStack_5c = 0x2d;
      }
      goto LAB_00000a18;
    }
    if (uVar2 < 0x6a) {
      if (uVar2 == 0x58) goto LAB_00000a5a;
      if (uVar2 < 0x59) {
        if (uVar2 == 0) {
          return;
        }
        if (uVar2 == 0x25) {
          (*param_2)(param_1,0x25);
        }
      }
      else {
        if (uVar2 == 99) {
          (*param_2)(param_1,*(undefined *)param_4);
          goto LAB_00000b06;
        }
        if (uVar2 == 100) goto LAB_000009ee;
      }
      goto LAB_0000081c;
    }
    if (uVar2 == 0x73) {
      pcStack_50 = (char *)*param_4;
      pcVar5 = pcStack_50;
      while ((iStack_60 + (int)pcStack_50 != (int)pcVar5 && (*pcVar5 != '\0'))) {
        lStack_48 = lStack_48 + 1;
        pcVar5 = pcVar5 + 1;
      }
      iStack_60 = -1;
      goto LAB_00000acc;
    }
    if (0x73 < uVar2) {
      if (uVar2 != 0x75) break;
      uStack_58 = 10;
      goto LAB_00000a7c;
    }
    if (uVar2 == 0x6f) {
      uStack_58 = 8;
      if (iStack_60 < 0) {
        iStack_60 = 1;
      }
      goto LAB_00000af6;
    }
    if (uVar2 == 0x70) {
      abStack_68[0] = abStack_68[0] | 2;
      lVar4 = 1;
      goto LAB_00000a5a;
    }
  } while( true );
  if (uVar2 == 0x78) {
LAB_00000a5a:
    uStack_58 = 0x10;
    abStack_68[0] = ((int)uVar2 == 0x58) << 2 | abStack_68[0] & 0xfb;
LAB_00000a7c:
    if (iStack_60 < 0) {
      iStack_60 = 1;
    }
    if (lVar4 == 2) {
      lVar4 = *param_4;
LAB_00000a18:
      FUN_00000524(lVar4,abStack_68);
    }
    else if (lVar4 == 1) {
      lVar4 = *param_4;
LAB_00000aae:
      FUN_00000586(lVar4,abStack_68);
    }
    else {
LAB_00000af6:
      lVar4 = (long)*(int *)param_4;
LAB_00000ac8:
      FUN_000005e8(lVar4,abStack_68);
    }
LAB_00000acc:
    FUN_00000644(param_1,param_2,abStack_68);
LAB_00000b06:
    param_4 = param_4 + 1;
  }
  goto LAB_0000081c;
}



long FUN_00000b32(long param_1,undefined8 param_2,undefined8 param_3)

{
  long local_20;
  long lStack_18;
  
  lStack_18 = 0;
  local_20 = param_1;
  FUN_000007f8(&local_20,0x792,param_2,param_3);
  *(undefined *)(local_20 + lStack_18) = 0;
  return (long)(int)lStack_18;
}



void FUN_00000b5e(void)

{
  FUN_00000b32();
  return;
}



undefined8 FUN_00000b7c(undefined8 param_1)

{
  FUN_000007f8(*(undefined8 *)(gp + -0x7d8),&LAB_00001e1c,param_1);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00000bc2)

void FUN_00000bc2(undefined8 param_1)

{
  long in_mhartid;
  
  if (in_mhartid != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  FUN_00000b7c(s_system_exit_with_code__d__00003918,param_1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00000bde(long param_1)

{
                    // WARNING: Could not recover jumptable at 0x00000bf0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_000038b8 + param_1 * 8))();
  return;
}



undefined8 FUN_00000bf2(ulong param_1)

{
  uint *puVar1;
  
  if (param_1 < 2) {
    puVar1 = (uint *)(param_1 * 4 + 0x2000000);
    *puVar1 = *puVar1 | 1;
    return 0;
  }
  return 0xffffffffffffffff;
}



undefined8 FUN_00000c12(ulong param_1)

{
  undefined8 uVar1;
  uint *puVar2;
  
  if (param_1 < 2) {
    puVar2 = (uint *)(param_1 * 4 + 0x2000000);
    uVar1 = 0;
    if ((*puVar2 & 1) != 0) {
      *puVar2 = *puVar2 & 0xfffffffe;
      return 1;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



undefined8 FUN_00000c36(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint local_50 [8];
  uint auStack_30 [10];
  
  puVar6 = local_50;
  FUN_00001410(0x1d);
  FUN_000032c4(local_50,0,0x40);
  uVar3 = 0;
  do {
    lVar5 = (long)uVar3 >> 5;
    uVar1 = (&DAT_00003938)[uVar3];
    local_50[lVar5] = (uVar1 >> 0x18 & 1) << (uVar3 & 0x1f) | local_50[lVar5];
    local_50[lVar5 + 8] = (uVar1 >> 0x19 & 1) << (uVar3 & 0x1f) | local_50[lVar5 + 8];
    uVar3 = (ulong)((int)uVar3 + 1);
  } while (uVar3 != 0x100);
  lVar5 = 0;
  do {
    lVar4 = lVar5 * 4;
    *(uint *)(lVar4 + 0x502b00e0) = puVar6[8];
    uVar2 = *puVar6;
    lVar5 = (long)((int)lVar5 + 1);
    puVar6 = puVar6 + 1;
    *(undefined4 *)(lVar4 + 0x502b00c0) = uVar2;
  } while (lVar5 != 8);
  return 0;
}



undefined8 FUN_00000cd6(ulong param_1,ulong param_2)

{
  if ((param_1 < 0x30) && (param_2 < 0x100)) {
    *(uint *)(param_1 * 4 + 0x502b0000) =
         *(uint *)((long)&DAT_00003938 + ((param_2 << 0x20) >> 0x1e)) & 0xffffff;
    return 0;
  }
  return 0xffffffffffffffff;
}



undefined8 FUN_00000d14(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (0x2f < param_1) {
    return 0xffffffffffffffff;
  }
  uVar1 = 0xffffffffffffffff;
  if (param_2 < 0x100) {
    iVar2 = 0;
    if (param_2 != 0x78) {
      do {
        if ((((long)*(int *)((long)iVar2 * 4 + 0x502b0000) & 0xffU) == param_2) &&
           ((long)iVar2 != param_1)) {
          FUN_00000cd6(0x78);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0x30);
    }
    FUN_00000cd6(param_1,param_2);
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00000d92)

undefined8 FUN_00000d92(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_mhartid;
  
  *(undefined4 *)((in_mhartid + 0x40) * 0x80 + 0xc000000) = 0;
  *(undefined4 *)(in_mhartid * 0x80 + 0xc002004) = 0;
  *(undefined4 *)(in_mhartid * 0x80 + 0xc002008) = 0;
  lVar2 = 0;
  do {
    *(undefined4 *)(lVar2 * 4 + 0xc000000) = 0;
    lVar2 = (long)((int)lVar2 + 1);
  } while (lVar2 != 0x41);
  *(undefined4 *)(in_mhartid * 0x1000 + 0xc200000) = 0;
  puVar3 = (undefined8 *)(in_mhartid * 0x420 + 0x40a8);
  iVar1 = 0;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 2;
  } while (iVar1 != 0x42);
  iVar1 = 0x65;
  do {
    if (*(int *)(in_mhartid * 0x1000 + 0xc200004) == 0) {
      return 0;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00000e34)

undefined8 FUN_00000e2c(ulong param_1)

{
  uint *puVar1;
  long in_mhartid;
  
  if (0x41 < param_1) {
    return 0xffffffffffffffff;
  }
  puVar1 = (uint *)(((long)(int)((uint)param_1 >> 5) + in_mhartid * 0x20) * 4 + 0xc002000);
  *puVar1 = *puVar1 | 1 << (param_1 & 0x1f);
  return 0;
}



undefined8 FUN_00000e5e(ulong param_1,undefined4 param_2)

{
  if (param_1 < 0x42) {
    *(undefined4 *)(((param_1 << 0x20) >> 0x1e) + 0xc000000) = param_2;
    return 0;
  }
  return 0xffffffffffffffff;
}



// WARNING: Removing unreachable block (ram,0x00000e7a)

undefined8 FUN_00000e7a(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long in_mhartid;
  
  lVar1 = (in_mhartid * 0x42 + (param_1 & 0xffffffff)) * 0x10;
  *(undefined8 *)(lVar1 + 0x40a8) = param_2;
  *(undefined8 *)(lVar1 + 0x40b0) = param_3;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00000f4c(ulong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (0x1e < param_1) {
    return;
  }
  param_2 = param_2 & 1;
  switch(param_1) {
  case 0:
    _DAT_50440030 = param_2 | _DAT_50440030 & 0xfffffffe;
    return;
  case 1:
    _DAT_50440034 = _DAT_50440034 & 0xfffffffe;
    goto LAB_00000f7e;
  case 2:
    param_2 = param_2 << 1;
    _DAT_50440034 = _DAT_50440034 & 0xfffffffd;
    goto LAB_00000f7e;
  case 3:
    param_2 = param_2 << 2;
    _DAT_50440034 = _DAT_50440034 & 0xfffffffb;
    goto LAB_00000f7e;
  case 4:
    param_2 = param_2 << 3;
    _DAT_50440034 = _DAT_50440034 & 0xfffffff7;
    goto LAB_00000f7e;
  case 5:
    param_2 = param_2 << 4;
    _DAT_50440034 = _DAT_50440034 & 0xffffffef;
    goto LAB_00000f7e;
  case 6:
    param_2 = param_2 << 5;
    _DAT_50440034 = _DAT_50440034 & 0xffffffdf;
    goto LAB_00000f7e;
  case 7:
    param_2 = param_2 << 6;
    _DAT_50440034 = _DAT_50440034 & 0xffffffbf;
    goto LAB_00000f7e;
  case 8:
    param_2 = param_2 << 7;
    _DAT_50440034 = _DAT_50440034 & 0xffffff7f;
    goto LAB_00000f7e;
  case 9:
    param_2 = param_2 << 8;
    _DAT_50440034 = _DAT_50440034 & 0xfffffeff;
    goto LAB_00000f7e;
  case 10:
    param_2 = param_2 << 9;
    _DAT_50440034 = _DAT_50440034 & 0xfffffdff;
    goto LAB_00000f7e;
  case 0xb:
    param_2 = param_2 << 10;
    _DAT_50440034 = _DAT_50440034 & 0xfffffbff;
LAB_00000f7e:
    _DAT_50440034 = param_2 | _DAT_50440034;
    return;
  case 0xc:
    param_2 = param_2 << 0xb;
    uVar1 = 0xfffff7ff;
    goto LAB_0000102c;
  case 0xd:
    param_2 = param_2 << 0xc;
    iVar2 = -0x1000;
    break;
  case 0xe:
    param_2 = param_2 << 0xd;
    iVar2 = -0x2000;
    break;
  case 0xf:
    param_2 = param_2 << 0xe;
    iVar2 = -0x4000;
    break;
  case 0x10:
    param_2 = param_2 << 0xf;
    iVar2 = -0x8000;
    break;
  case 0x11:
    param_2 = param_2 << 0x10;
    iVar2 = -0x10000;
    break;
  case 0x12:
    param_2 = param_2 << 0x11;
    iVar2 = -0x20000;
    break;
  case 0x13:
    param_2 = param_2 << 0x12;
    iVar2 = -0x40000;
    break;
  case 0x14:
    param_2 = param_2 << 0x13;
    iVar2 = -0x80000;
    break;
  case 0x15:
    param_2 = param_2 << 0x14;
    iVar2 = -0x100000;
    break;
  case 0x16:
    param_2 = param_2 << 0x15;
    iVar2 = -0x200000;
    break;
  case 0x17:
    param_2 = param_2 << 0x16;
    iVar2 = -0x400000;
    break;
  case 0x18:
    param_2 = param_2 << 0x17;
    iVar2 = -0x800000;
    break;
  case 0x19:
    param_2 = param_2 << 0x18;
    iVar2 = -0x1000000;
    break;
  case 0x1a:
    param_2 = param_2 << 0x19;
    iVar2 = -0x2000000;
    break;
  case 0x1b:
    param_2 = param_2 << 0x1a;
    iVar2 = -0x4000000;
    break;
  case 0x1c:
    param_2 = param_2 << 0x1d;
    iVar2 = -0x20000000;
    break;
  case 0x1d:
    param_2 = param_2 << 0x1e;
    iVar2 = -0x40000000;
    break;
  case 0x1e:
    param_2 = param_2 << 0x1f;
    uVar1 = 0x7fffffff;
    goto LAB_0000102c;
  }
  uVar1 = iVar2 - 1;
LAB_0000102c:
  _DAT_50440034 = param_2 | _DAT_50440034 & uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_0000114e(ulong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (0x27 < param_1) {
    return 0;
  }
  param_2 = param_2 & 1;
  switch(param_1) {
  case 0:
    _DAT_50440008 = param_2 << 0x19 | _DAT_50440008 & 0xfdffffff;
    return 0;
  case 1:
    _DAT_5044000c = param_2 << 0x19 | _DAT_5044000c & 0xfdffffff;
    return 0;
  case 2:
    _DAT_50440010 = param_2 << 0x19 | _DAT_50440010 & 0xfdffffff;
    return 0;
  case 3:
    _DAT_50440028 = _DAT_50440028 & 0xfffffffe;
    goto LAB_000011be;
  case 4:
    param_2 = param_2 << 1;
    _DAT_50440028 = _DAT_50440028 & 0xfffffffd;
    goto LAB_000011be;
  case 5:
    param_2 = param_2 << 2;
    _DAT_50440028 = _DAT_50440028 & 0xfffffffb;
    goto LAB_000011be;
  case 6:
    param_2 = param_2 << 3;
    _DAT_50440028 = _DAT_50440028 & 0xfffffff7;
    goto LAB_000011be;
  case 7:
    param_2 = param_2 << 4;
    _DAT_50440028 = _DAT_50440028 & 0xffffffef;
    goto LAB_000011be;
  case 8:
    param_2 = param_2 << 5;
    _DAT_50440028 = _DAT_50440028 & 0xffffffdf;
LAB_000011be:
    _DAT_50440028 = param_2 | _DAT_50440028;
    return 0;
  case 9:
    _DAT_5044002c = _DAT_5044002c & 0xfffffffe;
    goto LAB_00001214;
  case 10:
    param_2 = param_2 << 1;
    _DAT_5044002c = _DAT_5044002c & 0xfffffffd;
    goto LAB_00001214;
  case 0xb:
    param_2 = param_2 << 2;
    _DAT_5044002c = _DAT_5044002c & 0xfffffffb;
    goto LAB_00001214;
  case 0xc:
    param_2 = param_2 << 3;
    _DAT_5044002c = _DAT_5044002c & 0xfffffff7;
    goto LAB_00001214;
  case 0xd:
    param_2 = param_2 << 4;
    _DAT_5044002c = _DAT_5044002c & 0xffffffef;
    goto LAB_00001214;
  case 0xe:
    param_2 = param_2 << 5;
    _DAT_5044002c = _DAT_5044002c & 0xffffffdf;
    goto LAB_00001214;
  case 0xf:
    param_2 = param_2 << 6;
    _DAT_5044002c = _DAT_5044002c & 0xffffffbf;
    goto LAB_00001214;
  case 0x10:
    param_2 = param_2 << 7;
    _DAT_5044002c = _DAT_5044002c & 0xffffff7f;
    goto LAB_00001214;
  case 0x11:
    param_2 = param_2 << 8;
    _DAT_5044002c = _DAT_5044002c & 0xfffffeff;
    goto LAB_00001214;
  case 0x12:
    param_2 = param_2 << 9;
    _DAT_5044002c = _DAT_5044002c & 0xfffffdff;
    goto LAB_00001214;
  case 0x13:
    param_2 = param_2 << 10;
    _DAT_5044002c = _DAT_5044002c & 0xfffffbff;
LAB_00001214:
    _DAT_5044002c = param_2 | _DAT_5044002c;
    return 0;
  case 0x14:
    param_2 = param_2 << 0xb;
    uVar2 = 0xfffff7ff;
    goto LAB_00001286;
  case 0x15:
    param_2 = param_2 << 0xc;
    iVar1 = -0x1000;
    break;
  case 0x16:
    param_2 = param_2 << 0xd;
    iVar1 = -0x2000;
    break;
  case 0x17:
    param_2 = param_2 << 0xe;
    iVar1 = -0x4000;
    break;
  case 0x18:
    param_2 = param_2 << 0xf;
    iVar1 = -0x8000;
    break;
  case 0x19:
    param_2 = param_2 << 0x10;
    iVar1 = -0x10000;
    break;
  case 0x1a:
    param_2 = param_2 << 0x11;
    iVar1 = -0x20000;
    break;
  case 0x1b:
    param_2 = param_2 << 0x12;
    iVar1 = -0x40000;
    break;
  case 0x1c:
    param_2 = param_2 << 0x13;
    iVar1 = -0x80000;
    break;
  case 0x1d:
    param_2 = param_2 << 0x14;
    iVar1 = -0x100000;
    break;
  case 0x1e:
    param_2 = param_2 << 0x15;
    iVar1 = -0x200000;
    break;
  case 0x1f:
    param_2 = param_2 << 0x16;
    iVar1 = -0x400000;
    break;
  case 0x20:
    param_2 = param_2 << 0x17;
    iVar1 = -0x800000;
    break;
  case 0x21:
    param_2 = param_2 << 0x18;
    iVar1 = -0x1000000;
    break;
  case 0x22:
    param_2 = param_2 << 0x19;
    iVar1 = -0x2000000;
    break;
  case 0x23:
    param_2 = param_2 << 0x1a;
    iVar1 = -0x4000000;
    break;
  case 0x24:
    param_2 = param_2 << 0x1b;
    iVar1 = -0x8000000;
    break;
  case 0x25:
    param_2 = param_2 << 0x1d;
    iVar1 = -0x20000000;
    break;
  case 0x26:
    param_2 = param_2 << 0x1e;
    iVar1 = -0x40000000;
    break;
  case 0x27:
    param_2 = param_2 << 0x1f;
    uVar2 = 0x7fffffff;
    goto LAB_00001286;
  }
  uVar2 = iVar1 - 1;
LAB_00001286:
  _DAT_5044002c = param_2 | _DAT_5044002c & uVar2;
  return 0;
}



void FUN_000013f4(undefined8 param_1)

{
  FUN_00000f4c(1);
  FUN_00000f4c(param_1,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00001410(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 < 0x2a) {
    uVar1 = (ulong)((int)param_1 + -0xe);
    if (uVar1 < 0x18) {
      uVar1 = 1L << (uVar1 & 0x3f);
      if ((uVar1 & 0x27bfe9) == 0) {
        if ((uVar1 & 0xd84000) == 0) {
          if ((uVar1 & 6) != 0) {
            _DAT_50440028 = _DAT_50440028 | 0x20;
          }
        }
        else {
          _DAT_50440028 = _DAT_50440028 | 0x10;
        }
      }
      else {
        _DAT_50440028 = _DAT_50440028 | 8;
      }
    }
    FUN_0000114e(1);
    return 0;
  }
  return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_0000147a(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  switch(param_1) {
  case 1:
    uVar1 = (param_2 & 7) << 3;
    _DAT_50440020 = _DAT_50440020 & 0xffffffc7;
    goto LAB_000014aa;
  case 2:
    uVar1 = (param_2 & 7) << 6;
    _DAT_50440020 = _DAT_50440020 & 0xfffffe3f;
LAB_000014aa:
    _DAT_50440020 = _DAT_50440020 | uVar1;
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
  case 6:
    uVar1 = (param_2 & 0xf) << 8;
    uVar3 = 0xfffff0ff;
    goto LAB_00001516;
  case 7:
    uVar1 = (param_2 & 0xf) << 0xc;
    iVar2 = -0xf000;
    goto LAB_0000152c;
  case 8:
    uVar1 = (param_2 & 0xf) << 0x10;
    iVar2 = -0xf0000;
LAB_0000152c:
    uVar3 = iVar2 - 1;
LAB_00001516:
    _DAT_50440038 = _DAT_50440038 & uVar3 | uVar1;
    break;
  case 9:
    _DAT_5044003c = param_2 & 0xff | _DAT_5044003c & 0xffffff00;
    break;
  case 10:
    uVar1 = (param_2 & 0xff) << 8;
    uVar3 = 0xffff00ff;
    goto LAB_0000156a;
  case 0xb:
    uVar1 = (param_2 & 0xff) << 0x10;
    uVar3 = 0xff00ffff;
LAB_0000156a:
    _DAT_5044003c = _DAT_5044003c & uVar3 | uVar1;
    break;
  case 0xc:
    _DAT_5044003c = param_2 << 0x18 | _DAT_5044003c & 0xffffff;
    break;
  case 0xd:
    _DAT_50440040 = param_2 & 0xff | _DAT_50440040 & 0xffffff00;
    break;
  case 0xe:
    uVar1 = (param_2 & 0xff) << 8;
    uVar3 = 0xffff00ff;
    goto LAB_000015c8;
  case 0xf:
    uVar1 = (param_2 & 0xff) << 0x10;
    uVar3 = 0xff00ffff;
LAB_000015c8:
    _DAT_50440040 = _DAT_50440040 & uVar3 | uVar1;
    break;
  case 0x10:
    param_2 = param_2 & 0xffff;
    _DAT_50440044 = _DAT_50440044 & 0xffff0000;
    goto LAB_000016cc;
  case 0x11:
    param_2 = param_2 << 0x10;
    _DAT_50440044 = _DAT_50440044 & 0xffff;
LAB_000016cc:
    _DAT_50440044 = param_2 | _DAT_50440044;
    break;
  case 0x12:
    _DAT_50440048 = param_2 & 0xffff | _DAT_50440048 & 0xffff0000;
    break;
  case 0x13:
    _DAT_50440048 = _DAT_50440048 & 0xff00ffff | (param_2 & 0xff) << 0x10;
    break;
  case 0x14:
    _DAT_50440048 = param_2 << 0x18 | _DAT_50440048 & 0xffffff;
    break;
  case 0x15:
    _DAT_5044004c = param_2 & 0xff | _DAT_5044004c & 0xffffff00;
    break;
  case 0x16:
    uVar1 = (param_2 & 0xff) << 8;
    uVar3 = 0xffff00ff;
    goto LAB_00001642;
  case 0x17:
    uVar1 = (param_2 & 0xff) << 0x10;
    uVar3 = 0xff00ffff;
LAB_00001642:
    _DAT_5044004c = _DAT_5044004c & uVar3 | uVar1;
    break;
  case 0x18:
    _DAT_5044004c = param_2 << 0x18 | _DAT_5044004c & 0xffffff;
    break;
  case 0x19:
    _DAT_50440050 = param_2 & 0xff | _DAT_50440050 & 0xffffff00;
    break;
  case 0x1a:
    uVar1 = (param_2 & 0xff) << 8;
    uVar3 = 0xffff00ff;
    goto LAB_000016a0;
  case 0x1b:
    uVar1 = (param_2 & 0xff) << 0x10;
    uVar3 = 0xff00ffff;
LAB_000016a0:
    _DAT_50440050 = _DAT_50440050 & uVar3 | uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_000016f6(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
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
    _DAT_50440010 = (param_2 & 3) << 0x1a | _DAT_50440010 & 0xf3ffffff;
    break;
  case 4:
    _DAT_50440020 = param_2 & 1 | _DAT_50440020 & 0xfffffffe;
    break;
  case 5:
    uVar1 = (param_2 & 1) << 0xc;
    iVar2 = -0x1000;
    goto LAB_0000177e;
  case 6:
    uVar1 = (param_2 & 1) << 0xd;
    iVar2 = -0x2000;
    goto LAB_0000177e;
  case 7:
    uVar1 = (param_2 & 1) << 0xe;
    iVar2 = -0x4000;
    goto LAB_0000177e;
  case 8:
    uVar1 = (param_2 & 1) << 0xf;
    iVar2 = -0x8000;
LAB_0000177e:
    _DAT_50440020 = _DAT_50440020 & iVar2 - 1U | uVar1;
    break;
  case 9:
    _DAT_50440024 = param_2 & 1 | _DAT_50440024 & 0xfffffffe;
    break;
  case 10:
    _DAT_50440024 = _DAT_50440024 & 0x7fffffff | param_2 << 0x1f;
  }
  return 0;
}



undefined8 FUN_000017fe(undefined8 param_1)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 0:
    return 26000000;
  case 1:
    uVar1 = FUN_0000190c();
    return uVar1;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = FUN_00001912(0x28);
    return uVar1;
  default:
    return 0;
  }
  uVar1 = FUN_0000183c(uVar1);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long FUN_0000183c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((param_1 == 1) || (param_1 == 0)) {
    iVar1 = 26000000;
  }
  else if (param_1 == 2) {
    uVar2 = (long)(int)(_DAT_50440010 >> 0x1a) & 3;
    if (uVar2 == 3) {
      return 0;
    }
    iVar1 = FUN_000017fe((&DAT_00004048)[uVar2]);
  }
  else {
    iVar1 = 0;
  }
  return (long)iVar1;
}



void FUN_0000190c(void)

{
  FUN_0000183c(0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long FUN_00001912(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  switch(param_1) {
  case 0:
    lVar3 = FUN_0000190c();
    return lVar3;
  case 1:
    uVar2 = 1;
    goto LAB_00001940;
  case 2:
    uVar2 = 2;
LAB_00001940:
    lVar3 = FUN_0000183c(uVar2);
    return lVar3;
  case 3:
  case 10:
  case 0xd:
  case 0x26:
  case 0x28:
  case 0x29:
    if ((_DAT_50440020 & 1) == 0) {
      return 26000000;
    }
    if ((_DAT_50440020 & 1) == 0) {
      return 0;
    }
    uVar4 = FUN_0000190c(0);
    return (long)(int)((uVar4 & 0xffffffff) >> (long)(int)((_DAT_50440020 >> 1 & 3) + 1));
  case 4:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440038;
    break;
  case 5:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440038 >> 4;
    break;
  case 6:
  case 0xe:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x23:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440020 >> 3;
    goto LAB_000019de;
  case 7:
  case 0x1c:
  case 0x24:
  case 0x25:
  case 0x27:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440020 >> 6;
    goto LAB_000019de;
  case 8:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440020 >> 9;
LAB_000019de:
    uVar5 = uVar5 & 7;
    goto LAB_000019e0;
  case 9:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440038 >> 0x10;
    break;
  case 0xb:
    uVar1 = FUN_0000183c(1);
    uVar5 = _DAT_50440038 >> 8;
    break;
  case 0xc:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440038 >> 0xc;
    break;
  case 0xf:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044003c;
    goto LAB_00001a8a;
  case 0x10:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044003c;
    goto LAB_00001a9a;
  case 0x11:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044003c;
    goto LAB_00001aaa;
  case 0x12:
    uVar6 = _DAT_50440020 >> 0xc & 1;
    uVar5 = _DAT_5044003c;
    if (uVar6 == 0) {
      uVar1 = 26000000;
    }
    else {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = FUN_0000190c();
        uVar5 = _DAT_5044003c;
      }
    }
    goto LAB_00001ad2;
  case 0x13:
    uVar1 = FUN_0000183c(2);
    uVar5 = _DAT_50440044;
    goto LAB_00001a2e;
  case 0x14:
    uVar1 = FUN_0000183c(2);
    uVar5 = _DAT_50440044 >> 0x10;
    goto LAB_00001a44;
  case 0x15:
    uVar1 = FUN_0000183c(2);
    uVar5 = _DAT_50440048;
LAB_00001a2e:
    uVar5 = uVar5 & 0xffff;
    goto LAB_00001a44;
  case 0x16:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044004c;
    goto LAB_00001a9a;
  case 0x17:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044004c;
    goto LAB_00001aaa;
  case 0x18:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044004c;
LAB_00001ad2:
    uVar5 = uVar5 >> 0x18;
    goto LAB_00001a44;
  case 0x1e:
    uVar6 = _DAT_50440020 >> 0xd & 1;
    uVar5 = _DAT_50440040;
    if (uVar6 == 0) {
      uVar1 = 26000000;
    }
    else {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = FUN_0000190c();
        uVar5 = _DAT_50440040;
      }
    }
    goto LAB_00001a8a;
  case 0x1f:
    uVar6 = _DAT_50440020 >> 0xe & 1;
    uVar5 = _DAT_50440040;
    if (uVar6 == 0) {
      uVar1 = 26000000;
    }
    else {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = FUN_0000190c();
        uVar5 = _DAT_50440040;
      }
    }
LAB_00001a9a:
    uVar5 = uVar5 >> 8;
LAB_00001a8a:
    uVar5 = uVar5 & 0xff;
LAB_00001a44:
    uVar5 = (uVar5 + 1) * 2;
    goto LAB_000019e2;
  case 0x20:
    uVar6 = _DAT_50440020 >> 0xf & 1;
    uVar5 = _DAT_50440040;
    if (uVar6 == 0) {
      uVar1 = 26000000;
    }
    else {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = FUN_0000190c();
        uVar5 = _DAT_50440040;
      }
    }
LAB_00001aaa:
    uVar5 = uVar5 >> 0x10;
    goto LAB_00001a8a;
  case 0x21:
    uVar1 = _DAT_50440050;
    goto LAB_00001a60;
  case 0x22:
    uVar1 = _DAT_50440050 >> 8;
LAB_00001a60:
    uVar5 = ((uVar1 & 0xff) + 1) * 2;
    uVar1 = 26000000;
    goto LAB_000019e2;
  default:
    return 0;
  }
  uVar5 = uVar5 & 0xf;
LAB_000019e0:
  uVar5 = uVar5 + 1;
LAB_000019e2:
  return (long)(int)(uVar1 / uVar5);
}



void FUN_00001b8e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long thunk_FUN_00001912(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  switch(param_1) {
  case 0:
    lVar3 = FUN_0000190c();
    return lVar3;
  case 1:
    uVar2 = 1;
    goto LAB_00001940;
  case 2:
    uVar2 = 2;
LAB_00001940:
    lVar3 = FUN_0000183c(uVar2);
    return lVar3;
  case 3:
  case 10:
  case 0xd:
  case 0x26:
  case 0x28:
  case 0x29:
    if ((_DAT_50440020 & 1) == 0) {
      return 26000000;
    }
    if ((_DAT_50440020 & 1) == 0) {
      return 0;
    }
    uVar4 = FUN_0000190c(0);
    return (long)(int)((uVar4 & 0xffffffff) >> (long)(int)((_DAT_50440020 >> 1 & 3) + 1));
  case 4:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440038;
    break;
  case 5:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440038 >> 4;
    break;
  case 6:
  case 0xe:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x23:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440020 >> 3;
    goto LAB_000019de;
  case 7:
  case 0x1c:
  case 0x24:
  case 0x25:
  case 0x27:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440020 >> 6;
    goto LAB_000019de;
  case 8:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440020 >> 9;
LAB_000019de:
    uVar5 = uVar5 & 7;
    goto LAB_000019e0;
  case 9:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440038 >> 0x10;
    break;
  case 0xb:
    uVar1 = FUN_0000183c(1);
    uVar5 = _DAT_50440038 >> 8;
    break;
  case 0xc:
    uVar1 = FUN_00001912(0x28);
    uVar5 = _DAT_50440038 >> 0xc;
    break;
  case 0xf:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044003c;
    goto LAB_00001a8a;
  case 0x10:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044003c;
    goto LAB_00001a9a;
  case 0x11:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044003c;
    goto LAB_00001aaa;
  case 0x12:
    uVar6 = _DAT_50440020 >> 0xc & 1;
    uVar5 = _DAT_5044003c;
    if (uVar6 == 0) {
      uVar1 = 26000000;
    }
    else {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = FUN_0000190c();
        uVar5 = _DAT_5044003c;
      }
    }
    goto LAB_00001ad2;
  case 0x13:
    uVar1 = FUN_0000183c(2);
    uVar5 = _DAT_50440044;
    goto LAB_00001a2e;
  case 0x14:
    uVar1 = FUN_0000183c(2);
    uVar5 = _DAT_50440044 >> 0x10;
    goto LAB_00001a44;
  case 0x15:
    uVar1 = FUN_0000183c(2);
    uVar5 = _DAT_50440048;
LAB_00001a2e:
    uVar5 = uVar5 & 0xffff;
    goto LAB_00001a44;
  case 0x16:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044004c;
    goto LAB_00001a9a;
  case 0x17:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044004c;
    goto LAB_00001aaa;
  case 0x18:
    uVar1 = FUN_0000190c();
    uVar5 = _DAT_5044004c;
LAB_00001ad2:
    uVar5 = uVar5 >> 0x18;
    goto LAB_00001a44;
  case 0x1e:
    uVar6 = _DAT_50440020 >> 0xd & 1;
    uVar5 = _DAT_50440040;
    if (uVar6 == 0) {
      uVar1 = 26000000;
    }
    else {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = FUN_0000190c();
        uVar5 = _DAT_50440040;
      }
    }
    goto LAB_00001a8a;
  case 0x1f:
    uVar6 = _DAT_50440020 >> 0xe & 1;
    uVar5 = _DAT_50440040;
    if (uVar6 == 0) {
      uVar1 = 26000000;
    }
    else {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = FUN_0000190c();
        uVar5 = _DAT_50440040;
      }
    }
LAB_00001a9a:
    uVar5 = uVar5 >> 8;
LAB_00001a8a:
    uVar5 = uVar5 & 0xff;
LAB_00001a44:
    uVar5 = (uVar5 + 1) * 2;
    goto LAB_000019e2;
  case 0x20:
    uVar6 = _DAT_50440020 >> 0xf & 1;
    uVar5 = _DAT_50440040;
    if (uVar6 == 0) {
      uVar1 = 26000000;
    }
    else {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = FUN_0000190c();
        uVar5 = _DAT_50440040;
      }
    }
LAB_00001aaa:
    uVar5 = uVar5 >> 0x10;
    goto LAB_00001a8a;
  case 0x21:
    uVar1 = _DAT_50440050;
    goto LAB_00001a60;
  case 0x22:
    uVar1 = _DAT_50440050 >> 8;
LAB_00001a60:
    uVar5 = ((uVar1 & 0xff) + 1) * 2;
    uVar1 = 26000000;
    goto LAB_000019e2;
  default:
    return 0;
  }
  uVar5 = uVar5 & 0xf;
LAB_000019e0:
  uVar5 = uVar5 + 1;
LAB_000019e2:
  return (long)(int)(uVar1 / uVar5);
}



long FUN_00001bf4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0;
  while ((lVar2 != param_3 &&
         (((*(undefined4 **)(&DAT_00003fd0 + ((ulong)(param_1 << 0x20) >> 0x1d)))[5] & 1) != 0))) {
    puVar1 = (undefined *)(param_2 + lVar2);
    lVar2 = lVar2 + 1;
    *puVar1 = (char)**(undefined4 **)(&DAT_00003fd0 + ((ulong)(param_1 << 0x20) >> 0x1d));
  }
  return (long)(int)lVar2;
}



long FUN_00001c26(long param_1,byte *param_2,ulong param_3)

{
  int *piVar1;
  
  *(undefined4 *)(gp + -0x7cc) = 0;
  piVar1 = (int *)(gp + -0x7cc);
  while ((ulong)(long)*piVar1 < param_3) {
    do {
    } while (((*(uint **)(&DAT_00003fd0 + ((ulong)(param_1 << 0x20) >> 0x1d)))[5] & 0x20) != 0);
    **(uint **)(&DAT_00003fd0 + ((ulong)(param_1 << 0x20) >> 0x1d)) = (uint)*param_2;
    *(int *)(gp + -0x7cc) = *piVar1 + 1;
    param_2 = param_2 + 1;
  }
  return (long)*piVar1;
}



void FUN_00001c70(long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = 1;
  if (param_5 != 1) {
    iVar1 = 3;
    if (param_5 != 2) {
      iVar1 = 0;
    }
  }
  uVar2 = thunk_FUN_00001912(6);
  uVar2 = uVar2 / param_2;
  puVar3 = *(uint **)(&DAT_00003fd0 + ((ulong)(param_1 << 0x20) >> 0x1d));
  puVar3[3] = puVar3[3] | 0x80;
  puVar3[1] = uVar2 >> 0xc & 0xff;
  *puVar3 = uVar2 >> 4 & 0xff;
  puVar3[0x30] = uVar2 + (uVar2 >> 4) * -0x10 & 0xff;
  puVar3[3] = 0;
  puVar3[3] = param_3 - 5U | (uint)(param_4 != 0) << 2 | iVar1 << 3;
  puVar3[3] = puVar3[3] & 0xffffff7f;
  puVar3[1] = puVar3[1] | 0x80;
  puVar3[2] = 0x39;
  return;
}



void FUN_00001d2e(int param_1)

{
  FUN_00001410((long)(param_1 + 0x19));
  FUN_000013f4((long)(param_1 + 0x11));
  return;
}



void FUN_00001d4a(long param_1,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(&DAT_00003fd0 + ((ulong)(param_1 << 0x20) >> 0x1d)) + 0x9c) = param_2;
  return;
}



void FUN_00001d62(uint param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar1 = (ulong)param_1;
  lVar2 = gp + 0x90;
  if (param_2 == 1) {
    *(uint *)(*(long *)(&DAT_00003fd0 + uVar1 * 8) + 4) =
         *(uint *)(*(long *)(&DAT_00003fd0 + uVar1 * 8) + 4) | 2;
    lVar3 = uVar1 * 0x28 + lVar2;
    *(undefined8 *)(lVar3 + 0x10) = param_3;
    *(undefined8 *)(lVar3 + 0x18) = param_4;
  }
  else if (param_2 == 2) {
    *(uint *)(*(long *)(&DAT_00003fd0 + uVar1 * 8) + 4) =
         *(uint *)(*(long *)(&DAT_00003fd0 + uVar1 * 8) + 4) | 1;
    puVar4 = (undefined8 *)(uVar1 * 0x28 + lVar2);
    *puVar4 = param_3;
    puVar4[1] = param_4;
  }
  lVar3 = (long)(int)(param_1 + 0xb);
  lVar2 = lVar2 + uVar1 * 0x28;
  *(uint *)(lVar2 + 0x20) = param_1;
  FUN_00000e5e(lVar3,param_5);
  FUN_00000e7a(lVar3,&LAB_00001ba2,lVar2);
  FUN_00000e2c(lVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00001e3a(byte *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  long lVar4;
  
  puVar2 = _DAT_00004058;
  *_DAT_00004058 =
       7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) | 3 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f);
  puVar2[1] = (int)param_4 - 1;
  puVar2[2] = 1;
  pbVar3 = param_1 + param_2;
  for (; param_1 != pbVar3; param_1 = param_1 + 1) {
    puVar2[0x18] = (uint)*param_1;
  }
  puVar2[4] = 1;
  for (; param_4 != 0; param_4 = (ulong)(int)((uint)param_4 - uVar1)) {
    uVar1 = (uint)param_4;
    if ((ulong)(long)(int)puVar2[9] < param_4) {
      uVar1 = puVar2[9];
    }
    for (lVar4 = 0; (uint)lVar4 < uVar1; lVar4 = lVar4 + 1) {
      *(char *)(param_3 + lVar4) = (char)puVar2[0x18];
    }
    param_3 = param_3 + (ulong)uVar1;
  }
  puVar2[4] = 0;
  puVar2[2] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00001ec0(byte *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  puVar2 = _DAT_00004058;
  *_DAT_00004058 =
       7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) | 1 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f);
  puVar2[2] = 1;
  pbVar3 = param_1 + param_2;
  for (; param_1 != pbVar3; param_1 = param_1 + 1) {
    puVar2[0x18] = (uint)*param_1;
  }
  uVar4 = (ulong)(int)(0x20 - puVar2[8]);
  if (param_4 < uVar4) {
    uVar4 = (ulong)(int)param_4;
  }
  for (lVar5 = 0; (ulong)(long)(int)lVar5 < uVar4; lVar5 = lVar5 + 1) {
    puVar2[0x18] = (uint)*(byte *)(param_3 + lVar5);
  }
  param_3 = param_3 + (uVar4 & 0xffffffff);
  puVar2[4] = 1;
  for (uVar6 = (int)param_4 - (int)uVar4; uVar6 != 0; uVar6 = uVar6 - uVar1) {
    uVar1 = uVar6;
    if (0x20 - puVar2[8] < uVar6) {
      uVar1 = 0x20 - puVar2[8];
    }
    for (lVar5 = 0; (uint)lVar5 < uVar1; lVar5 = lVar5 + 1) {
      puVar2[0x18] = (uint)*(byte *)(param_3 + lVar5);
    }
    param_3 = param_3 + (ulong)uVar1;
  }
  do {
  } while ((puVar2[10] & 5) != 4);
  puVar2[4] = 0;
  puVar2[2] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00001f86(undefined4 *param_1,char param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = _DAT_00004058;
  *(int *)(_DAT_00004058 + 4) = (int)param_4 + -1;
  *(undefined4 *)(lVar3 + 8) = 1;
  while (param_2 = param_2 + -1, param_2 != -1) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *(undefined4 *)(lVar3 + 0x60) = uVar1;
  }
  *(undefined4 *)(lVar3 + 0x10) = 1;
  for (; param_4 != 0; param_4 = (ulong)(int)((uint)param_4 - uVar2)) {
    uVar2 = (uint)param_4;
    if ((ulong)(long)(int)*(uint *)(lVar3 + 0x24) < param_4) {
      uVar2 = *(uint *)(lVar3 + 0x24);
    }
    for (lVar4 = 0; (uint)lVar4 < uVar2; lVar4 = lVar4 + 1) {
      *(char *)(param_3 + lVar4) = (char)*(undefined4 *)(lVar3 + 0x60);
    }
    param_3 = param_3 + (ulong)uVar2;
  }
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00001ffa(undefined4 *param_1,char param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  lVar4 = _DAT_00004058;
  *(undefined4 *)(_DAT_00004058 + 8) = 1;
  while( true ) {
    param_2 = param_2 + -1;
    if (param_2 == -1) break;
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *(undefined4 *)(lVar4 + 0x60) = uVar1;
  }
  uVar5 = (ulong)(0x20 - *(int *)(lVar4 + 0x20));
  if (param_4 < uVar5) {
    uVar5 = (ulong)(int)param_4;
  }
  for (lVar6 = 0; (ulong)(long)(int)lVar6 < uVar5; lVar6 = lVar6 + 1) {
    *(uint *)(lVar4 + 0x60) = (uint)*(byte *)(param_3 + lVar6);
  }
  param_3 = param_3 + (uVar5 & 0xffffffff);
  *(undefined4 *)(lVar4 + 0x10) = 1;
  for (uVar7 = (int)param_4 - (int)uVar5; uVar7 != 0; uVar7 = uVar7 - uVar3) {
    uVar2 = 0x20 - *(int *)(lVar4 + 0x20);
    uVar3 = uVar7;
    if (uVar2 < uVar7) {
      uVar3 = uVar2;
    }
    for (lVar6 = 0; (uint)lVar6 < uVar3; lVar6 = lVar6 + 1) {
      *(uint *)(lVar4 + 0x60) = (uint)*(byte *)(param_3 + lVar6);
    }
    param_3 = param_3 + (ulong)uVar3;
  }
  do {
  } while ((*(uint *)(lVar4 + 0x28) & 5) != 4);
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(undefined4 *)(lVar4 + 8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000020ae(void)

{
  undefined auStack_18 [16];
  
  auStack_18[0] = 6;
  *_DAT_00004058 =
       7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) | 1 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f);
  FUN_00001ec0(auStack_18,1,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000020ee(void)

{
  undefined auStack_18 [16];
  
  auStack_18[0] = 0x66;
  *_DAT_00004058 =
       7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) | 1 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f);
  FUN_00001ec0(auStack_18,1,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00002130(void)

{
  undefined auStack_18 [16];
  
  auStack_18[0] = 0x99;
  *_DAT_00004058 =
       7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) | 1 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f);
  FUN_00001ec0(auStack_18,1,0,0);
  return;
}



void FUN_00002172(undefined param_1,undefined param_2)

{
  undefined uStack_18;
  undefined uStack_17;
  undefined uStack_16;
  
  uStack_18 = 1;
  uStack_17 = param_1;
  uStack_16 = param_2;
  FUN_000020ae();
  FUN_00001ec0(&uStack_18,3,0,0);
  return;
}



void FUN_0000219a(undefined param_1)

{
  undefined uStack_18;
  undefined uStack_17;
  
  uStack_18 = 1;
  uStack_17 = param_1;
  FUN_000020ae();
  FUN_00001ec0(&uStack_18,2,0,0);
  return;
}



void FUN_000021be(undefined param_1)

{
  undefined uStack_18;
  undefined uStack_17;
  
  uStack_18 = 0x31;
  uStack_17 = param_1;
  FUN_000020ae();
  FUN_00001ec0(&uStack_18,2,0,0);
  return;
}



void FUN_000021e4(undefined param_1)

{
  undefined uStack_18;
  undefined uStack_17;
  
  uStack_18 = 0x11;
  uStack_17 = param_1;
  FUN_000020ae();
  FUN_00001ec0(&uStack_18,2,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00002208(long param_1)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  undefined2 auStack_28 [8];
  
  auStack_28[0] = 0xffff;
  _DAT_5044002c = _DAT_5044002c | 0x200;
  _DAT_5044003c = _DAT_5044003c & 0xffffff;
  FUN_00001410(0x1d);
  if (param_1 == 0) {
    _DAT_00004058 = (uint *)&DAT_52000000;
    FUN_00001410(0xf);
    FUN_0000147a(9,7);
    FUN_00000d14(8,0xc);
    FUN_00000d14(9,0x11);
    FUN_00000d14(10,4);
    FUN_00000d14(0xb,5);
    FUN_00000d14(0xc,6);
    FUN_00000d14(0xd,7);
    _DAT_00004058 = DAT_00003d40;
    *(undefined *)(gp + -0x7c8) = 0x10;
    *(undefined *)(gp + -0x7bf) = 8;
    uVar5 = 0x15;
  }
  else {
    _DAT_00004058 = (uint *)&DAT_54000000;
    FUN_00001410(0x12);
    FUN_000016f6(5,1);
    FUN_0000147a(0xc,7);
    _DAT_00004058 = DAT_00003d58;
    *(undefined *)(gp + -0x7c8) = 0;
    *(undefined *)(gp + -0x7bf) = 10;
    uVar5 = 0x16;
  }
  *(undefined *)(gp + -0x7c0) = uVar5;
  *(undefined4 *)(gp + -0x7c4) = 0;
  puVar3 = _DAT_00004058;
  bVar1 = *(byte *)(gp + -0x7c8);
  _DAT_00004058[2] = 0;
  puVar3[4] = 0;
  puVar3[5] = 2;
  bVar2 = *(byte *)(gp + -0x7bf);
  puVar3[0xb] = 0;
  *puVar3 = 7 << ((ulong)bVar1 & 0x1f) | 1 << ((ulong)bVar2 & 0x1f);
  FUN_00001ec0(auStack_28,2,0,0);
  FUN_000020ee();
  FUN_00002130();
  iVar6 = 0xd;
  while (iVar6 = iVar6 + -1, iVar4 = 0x1fbd1, iVar6 != 0) {
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00001ec0(auStack_28,2,0,0);
  FUN_00002172(0,0);
  FUN_0000219a(0);
  FUN_000021be(0);
  FUN_000021e4(0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00002378(undefined *param_1)

{
  undefined local_20 [8];
  undefined auStack_18 [8];
  
  local_20[0] = 5;
  *_DAT_00004058 =
       7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) | 1 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f);
  FUN_00001e3a(local_20,1,auStack_18,1);
  *param_1 = auStack_18[0];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_000023c6(void)

{
  byte abStack_11 [9];
  
  *_DAT_00004058 =
       7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) | 1 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f);
  FUN_00002378(abStack_11);
  return abStack_11[0] & 1;
}



void FUN_00002402(long param_1)

{
  undefined uStack_18;
  undefined uStack_17;
  ushort uStack_16;
  
  uStack_18 = 0x20;
  uStack_17 = (undefined)((ulong)param_1 >> 0x10);
  uStack_16 = (ushort)(param_1 << 8) | (ushort)((ulong)param_1 >> 8) & 0xff;
  FUN_000020ae();
  FUN_00001ec0(&uStack_18,4,0,0);
  return;
}



void FUN_0000243c(long param_1)

{
  undefined uStack_18;
  undefined uStack_17;
  ushort uStack_16;
  
  uStack_18 = 0x52;
  uStack_17 = (undefined)((ulong)param_1 >> 0x10);
  uStack_16 = (ushort)(param_1 << 8) | (ushort)((ulong)param_1 >> 8) & 0xff;
  FUN_000020ae();
  FUN_00001ec0(&uStack_18,4,0,0);
  return;
}



void FUN_00002476(long param_1)

{
  undefined uStack_18;
  undefined uStack_17;
  ushort uStack_16;
  
  uStack_18 = 0xd8;
  uStack_17 = (undefined)((ulong)param_1 >> 0x10);
  uStack_16 = (ushort)(param_1 << 8) | (ushort)((ulong)param_1 >> 8) & 0xff;
  FUN_000020ae();
  FUN_00001ec0(&uStack_18,4,0,0);
  return;
}



void FUN_000024b0(void)

{
  undefined auStack_18 [16];
  
  auStack_18[0] = 199;
  FUN_000020ae();
  FUN_00001ec0(auStack_18,1,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000024d2(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  uint *puVar2;
  long lVar3;
  undefined uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)param_1;
  uVar4 = (undefined)((ulong)param_1 >> 0x10);
  uVar1 = (ushort)((ulong)param_1 >> 8);
  switch(param_4) {
  case 0:
    uStack_28._0_2_ = CONCAT11(uVar4,2);
    uStack_28 = CONCAT22((ushort)(param_1 << 8) | uVar1 & 0xff,(undefined2)uStack_28);
    FUN_000020ae();
    FUN_00001ec0(&uStack_28,4,param_2,param_3);
    do {
      lVar3 = FUN_000023c6();
    } while (lVar3 != 0);
    break;
  case 1:
    uStack_28._0_2_ = CONCAT11(uVar4,2);
    uStack_28 = CONCAT22((ushort)(param_1 << 8) | uVar1 & 0xff,(undefined2)uStack_28);
    FUN_000020ae();
    FUN_00001ec0(&uStack_28,4,param_2,param_3);
    do {
      lVar3 = FUN_000023c6();
    } while (lVar3 != 0);
    break;
  case 2:
    uStack_28._0_2_ = CONCAT11(uVar4,2);
    uStack_28 = CONCAT22((ushort)(param_1 << 8) | uVar1 & 0xff,(undefined2)uStack_28);
    FUN_000020ae();
    FUN_00001ec0(&uStack_28,4,param_2,param_3);
    do {
      lVar3 = FUN_000023c6();
    } while (lVar3 != 0);
    break;
  case 3:
    uStack_28._0_2_ = CONCAT11(uVar4,2);
    uStack_28 = CONCAT22((ushort)(param_1 << 8) | uVar1 & 0xff,(undefined2)uStack_28);
    FUN_000020ae();
    FUN_00001ec0(&uStack_28,4,param_2,param_3);
    do {
      lVar3 = FUN_000023c6();
    } while (lVar3 != 0);
    break;
  case 4:
    uStack_28 = 0x32;
    FUN_000020ae();
    puVar2 = _DAT_00004058;
    *_DAT_00004058 =
         1 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f) | 7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) |
         2 << ((ulong)*(byte *)(gp + -0x7c0) & 0x1f);
    puVar2[0x3d] = 0x218;
    FUN_00001ffa(&uStack_28,2,param_2,param_3);
    do {
      lVar3 = FUN_000023c6();
    } while (lVar3 != 0);
    break;
  case 5:
    uStack_28 = 0x32;
    FUN_000020ae();
    puVar2 = _DAT_00004058;
    *_DAT_00004058 =
         1 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f) | 7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) |
         2 << ((ulong)*(byte *)(gp + -0x7c0) & 0x1f);
    puVar2[0x3d] = 0x218;
    FUN_00001ffa(&uStack_28,2,param_2,param_3);
    do {
      lVar3 = FUN_000023c6();
    } while (lVar3 != 0);
    break;
  default:
    return;
  }
  return;
}



void FUN_0000268e(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  while (param_3 != 0) {
    uVar3 = (ulong)(int)(0x100 - ((uint)param_1 & 0xff));
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    uVar2 = (ulong)(int)uVar3;
    param_3 = (ulong)((int)param_3 - (int)uVar3);
    do {
      uVar3 = uVar2;
      if (0x20 < uVar2) {
        uVar3 = 0x20;
      }
      iVar1 = (int)uVar3;
      FUN_000024d2(param_1,param_2,(long)iVar1,(long)*(int *)(gp + -0x7c4));
      uVar2 = (ulong)((int)uVar2 - iVar1);
      param_1 = (long)(iVar1 + (int)param_1);
      param_2 = param_2 + (uVar3 & 0xffffffff);
    } while (uVar2 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00002710(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined uVar5;
  uint uVar6;
  undefined4 uStack_18;
  int iStack_14;
  
  puVar2 = _DAT_00004058;
  iVar3 = (int)param_1;
  uVar5 = (undefined)((ulong)param_1 >> 0x10);
  uVar1 = (ushort)((ulong)param_1 >> 8);
  switch(param_4) {
  case 0:
    uStack_18._0_2_ = CONCAT11(uVar5,3);
    uStack_18 = CONCAT22((ushort)(param_1 << 8) | uVar1 & 0xff,(undefined2)uStack_18);
    uVar4 = 4;
    goto LAB_00002754;
  case 1:
    uStack_18._0_2_ = CONCAT11(uVar5,0xb);
    uStack_18 = CONCAT22((ushort)(param_1 << 8) | uVar1 & 0xff,(undefined2)uStack_18);
    iStack_14 = CONCAT31(iStack_14._1_3_,0xff);
    uVar4 = 5;
LAB_00002754:
    FUN_00001e3a(&uStack_18,uVar4);
    return;
  case 2:
    uStack_18 = 0x3b;
    *_DAT_00004058 =
         2 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f) | 7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) |
         1 << ((ulong)*(byte *)(gp + -0x7c0) & 0x1f);
    uVar6 = 0x4218;
    iStack_14 = iVar3;
    break;
  case 3:
    uStack_18 = 0xbb;
    *_DAT_00004058 =
         2 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f) | 7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) |
         1 << ((ulong)*(byte *)(gp + -0x7c0) & 0x1f);
    uVar6 = 0x221;
    iStack_14 = iVar3 << 8;
    break;
  case 4:
    uStack_18 = 0x6b;
    *_DAT_00004058 =
         2 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f) | 7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) |
         2 << ((ulong)*(byte *)(gp + -0x7c0) & 0x1f);
    uVar6 = 0x4218;
    iStack_14 = iVar3;
    goto LAB_00002852;
  case 5:
    uStack_18 = 0xeb;
    *_DAT_00004058 =
         2 << ((ulong)*(byte *)(gp + -0x7bf) & 0x1f) | 7 << ((ulong)*(byte *)(gp + -0x7c8) & 0x1f) |
         2 << ((ulong)*(byte *)(gp + -0x7c0) & 0x1f);
    uVar6 = 0x2221;
    iStack_14 = iVar3 << 8;
LAB_00002852:
    puVar2[0x3d] = uVar6;
    goto LAB_000027ca;
  default:
    return;
  }
  puVar2[0x3d] = uVar6;
LAB_000027ca:
  FUN_00001f86(&uStack_18,2,param_2,param_3);
  return;
}



void FUN_0000289c(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  for (; param_3 != 0; param_3 = (ulong)((int)param_3 - iVar1)) {
    uVar2 = param_3;
    if (0x20 < param_3) {
      uVar2 = 0x20;
    }
    iVar1 = (int)uVar2;
    FUN_00002710(param_1,param_2,(long)iVar1,(long)*(int *)(gp + -0x7c4));
    param_1 = (long)(iVar1 + (int)param_1);
    param_2 = param_2 + (uVar2 & 0xffffffff);
  }
  return;
}



ulong FUN_000028f8(byte *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  for (; param_2 != 0; param_2 = (long)((int)param_2 + -1)) {
    uVar2 = uVar2 ^ *param_1;
    iVar1 = 8;
    do {
      iVar1 = iVar1 + -1;
      uVar2 = (ulong)(int)(-((uint)uVar2 & 1) & 0xedb88320 ^ (uint)uVar2 >> 1);
    } while (iVar1 != 0);
    param_1 = param_1 + 1;
  }
  return ~uVar2;
}



undefined8 FUN_0000292c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined auStack_31 [9];
  
  auStack_31[0] = 0;
  lVar4 = *(long *)(param_1 + 0x80008);
  lVar3 = FUN_00001bf4(2,auStack_31,1);
  if (lVar3 == 1) {
    iVar2 = FUN_0000313c(auStack_31[0],param_1 + 0x8001c);
    if (iVar2 < 0) {
      if (iVar2 == -2) {
        if (*(long *)(param_1 + 0x80008) == param_1 + 4) {
          *(long *)(param_1 + 0x80010) = *(long *)(param_1 + 0x80008);
          *(long *)(param_1 + 0x80008) = param_1 + 0x40004;
        }
        else {
          *(long *)(param_1 + 0x80010) = param_1 + 0x40004;
          *(long *)(param_1 + 0x80008) = param_1 + 4;
        }
        *(undefined4 *)(param_1 + 0x80018) = 0;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x80018);
      *(uint *)(param_1 + 0x80018) = uVar1 + 1;
      *(char *)((ulong)uVar1 + lVar4) = (char)iVar2;
      if (0x10010 < *(uint *)(param_1 + 0x80018)) {
        *(undefined4 *)(param_1 + 0x80020) = 0xe1;
      }
    }
  }
  return 0;
}



bool FUN_000029d2(ulong *param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_000023c6();
  if (lVar2 == 0) {
    bVar1 = (*param_1 & 0xc) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



void FUN_000029f4(undefined8 param_1)

{
  FUN_00001c70(2,param_1,8,0,0);
  return;
}



void FUN_00002a02(void)

{
  *(uint *)(DAT_00004050 + 0x30) = *(uint *)(DAT_00004050 + 0x30) | 1;
  return;
}



void FUN_00002a16(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = *param_1;
  if ((uVar1 & 2) == 0) {
    return;
  }
  uVar2 = param_2[2];
  uVar3 = param_2[1];
  if (uVar3 <= uVar2) {
    *param_1 = uVar1 & 0xfffffff7;
    FUN_000032c4(param_2,0,0xc);
    return;
  }
  *param_1 = uVar1 | 8;
  uVar1 = *param_2;
  if (((uVar1 & 0xffff) == 0) && (0xffff < uVar3 - uVar2)) {
    lVar4 = FUN_000023c6();
    if (lVar4 != 0) {
      return;
    }
    FUN_00002476((long)(int)*param_2);
    iVar5 = 0x10000;
  }
  else if (((uVar1 & 0x7fff) == 0) && (0x7fff < uVar3 - uVar2)) {
    lVar4 = FUN_000023c6();
    if (lVar4 != 0) {
      return;
    }
    FUN_0000243c((long)(int)*param_2);
    iVar5 = 0x8000;
  }
  else {
    if ((uVar1 & 0xfff) != 0) {
      return;
    }
    if (uVar3 - uVar2 < 0x1000) {
      return;
    }
    lVar4 = FUN_000023c6();
    if (lVar4 != 0) {
      return;
    }
    FUN_00002402((long)(int)*param_2);
    iVar5 = 0x1000;
  }
  param_2[2] = param_2[2] + iVar5;
  *param_2 = *param_2 + iVar5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00002abe(uint *param_1,short *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  short *psVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  
  switch(*param_2 + -0xd2) {
  case 0:
    break;
  case 1:
    if ((*param_1 & 2) == 0) {
LAB_00002b34:
      uVar5 = 0xe3;
      goto LAB_00002b36;
    }
    lVar2 = FUN_000029d2();
    if (lVar2 == 0) {
      iVar1 = FUN_000028f8(param_2 + 4,8);
      if (*(int *)(param_2 + 2) != iVar1) goto LAB_00002bb4;
      uVar8 = (ulong)*(int *)(param_2 + 4);
      uVar7 = *(uint *)(param_2 + 6);
      if (uVar8 == 0) {
        if (uVar7 == 0) {
          FUN_000024b0();
          do {
            lVar2 = FUN_000023c6();
          } while (lVar2 != 0);
          break;
        }
      }
      else if ((uVar8 & 0xfff) != 0) goto LAB_00002c2c;
      if (((uVar7 & 0xfff) == 0) && (uVar7 - 0x1000 < 0x3fff001)) {
        *param_1 = *param_1 | 8;
        uVar10 = 0;
        do {
          iVar1 = (int)uVar8;
          if (((uVar8 & 0xffff) == 0) && (0xffff < uVar7 - uVar10)) {
            FUN_00002476(uVar8);
            do {
              lVar2 = FUN_000023c6();
            } while (lVar2 != 0);
            uVar10 = uVar10 + 0x10000;
            uVar8 = (ulong)(iVar1 + 0x10000);
          }
          else if (((uVar8 & 0x7fff) == 0) && (0x7fff < uVar7 - uVar10)) {
            FUN_0000243c(uVar8);
            do {
              lVar2 = FUN_000023c6();
            } while (lVar2 != 0);
            uVar10 = uVar10 + 0x8000;
            uVar8 = (ulong)(iVar1 + 0x8000);
          }
          else if (((uVar8 & 0xfff) == 0) && (0xfff < uVar7 - uVar10)) {
            FUN_00002402(uVar8);
            do {
              lVar2 = FUN_000023c6();
            } while (lVar2 != 0);
            uVar10 = uVar10 + 0x1000;
            uVar8 = (ulong)(iVar1 + 0x1000);
          }
        } while (uVar10 < uVar7);
        uVar6 = *param_1 & 0xfffffff7;
        goto LAB_00002b72;
      }
      goto LAB_00002c2c;
    }
    goto LAB_00002b82;
  case 2:
    if ((*param_1 & 2) == 0) goto LAB_00002b34;
    iVar1 = FUN_000028f8(param_2 + 4,(long)(*(int *)(param_2 + 6) + 8));
    if (*(int *)(param_2 + 2) != iVar1) {
LAB_00002bb4:
      uVar5 = 0xe2;
      goto LAB_00002b36;
    }
    lVar2 = FUN_000029d2(param_1);
    if (lVar2 == 0) {
      psVar9 = param_2 + 8;
      *param_1 = *param_1 | 4;
      uVar7 = *(uint *)(param_2 + 4);
      for (uVar10 = *(uint *)(param_2 + 6); uVar10 != 0; uVar10 = uVar10 - uVar6) {
        lVar2 = (long)(int)(uVar7 & 0xffff0000);
        uVar11 = uVar7 & 0xffff;
        uVar6 = uVar10;
        if (0x10000 < uVar10) {
          uVar6 = 0x10000;
        }
        if ((uVar11 == 0) && (0xffff < uVar10)) {
          do {
            lVar3 = FUN_000023c6();
          } while (lVar3 != 0);
          FUN_00002476(lVar2);
          do {
            lVar3 = FUN_000023c6();
            psVar4 = psVar9;
          } while (lVar3 != 0);
        }
        else {
          do {
            lVar3 = FUN_000023c6();
          } while (lVar3 != 0);
          FUN_0000289c(lVar2,0x84988,0x10000);
          if (0xffff < uVar11 + uVar6) {
            uVar6 = 0x10000 - uVar11;
          }
          FUN_0000319e((uVar7 & 0xffff) + 0x84988,psVar9,uVar6);
          do {
            lVar3 = FUN_000023c6();
          } while (lVar3 != 0);
          FUN_00002476(lVar2);
          do {
            lVar3 = FUN_000023c6();
            psVar4 = (short *)0x84988;
          } while (lVar3 != 0);
        }
        FUN_0000268e(lVar2,psVar4,0x10000);
        uVar7 = uVar7 + uVar6;
        psVar9 = (short *)((long)psVar9 + (ulong)uVar6);
      }
      uVar6 = *param_1 & 0xfffffffb;
      goto LAB_00002b72;
    }
    goto LAB_00002b82;
  case 3:
    uVar7 = *param_1;
    if ((uVar7 & 2) == 0) {
      if ((uVar7 & 0x10) == 0) {
LAB_00002f24:
        *param_1 = uVar7 | 0x10;
        *(undefined8 *)(gp + -0x7b8) = 1300000;
      }
    }
    else {
      lVar2 = FUN_000029d2();
      if (lVar2 != 0) goto LAB_00002b82;
      if ((*param_1 & 0x10) == 0) {
        FUN_000021be(2);
        FUN_00002172(0,2);
        do {
          lVar2 = FUN_000029d2(param_1);
        } while (lVar2 != 0);
        uVar7 = *param_1;
        goto LAB_00002f24;
      }
    }
    break;
  case 4:
    if (*(int *)(param_2 + 6) != 4) {
LAB_00002c2c:
      uVar5 = 0xe1;
      goto LAB_00002b36;
    }
    FUN_000029f4((long)*(int *)(param_2 + 8));
    break;
  case 5:
    if (1 < *(uint *)(param_2 + 4)) goto LAB_00002b34;
    if ((*param_1 & 2) == 0) {
      FUN_00002208();
      do {
        lVar2 = FUN_000023c6();
      } while (lVar2 != 0);
      FUN_000020ae();
      uVar6 = *param_1 | 2;
LAB_00002b72:
      *param_1 = uVar6;
    }
    break;
  case 6:
    if ((*param_1 & 2) == 0) goto LAB_00002b34;
    lVar2 = FUN_000029d2();
    if (lVar2 == 0) {
      iVar1 = FUN_000028f8(param_2 + 4,8);
      if (*(int *)(param_2 + 2) != iVar1) goto LAB_00002bb4;
      uVar7 = *(uint *)(param_2 + 4);
      uVar10 = *(uint *)(param_2 + 6);
      if (uVar7 == 0) {
        if (uVar10 == 0) {
          FUN_000024b0();
          break;
        }
      }
      else if ((uVar7 & 0xfff) != 0) goto LAB_00002c2c;
      if (((uVar10 & 0xfff) == 0) && (uVar10 - 0x1000 < 0x3fff001)) {
        _DAT_00094990 = 0;
        uVar6 = *param_1 | 8;
        _DAT_00094988 = uVar7;
        _DAT_0009498c = uVar10;
        goto LAB_00002b72;
      }
      goto LAB_00002c2c;
    }
LAB_00002b82:
    uVar5 = 0xe7;
    goto LAB_00002b36;
  case 7:
    if ((*param_1 & 2) == 0) goto LAB_00002b34;
    lVar2 = FUN_000029d2();
    if (lVar2 != 0) goto LAB_00002b82;
    break;
  default:
    return;
  }
  uVar5 = 0xe0;
LAB_00002b36:
  *(undefined *)(param_3 + 1) = uVar5;
  return;
}



void FUN_00002f64(void)

{
  FUN_00000d14(4,0x44);
  FUN_00000d14(5,0x45);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00002f80(void)

{
  ulong uVar1;
  undefined uStack_48;
  undefined uStack_47;
  
  FUN_00002f64();
  FUN_00000d92();
  FUN_00001b8e();
  FUN_00001d2e(2);
  FUN_00001c70(2,0x1c200,8,0,0);
  FUN_000032c4(&DAT_00004960,0,0x80028);
  _DAT_00094988 = 0;
  _DAT_00094990 = 0;
  _DAT_00084968 = 0x4964;
  FUN_00001d4a(2,0);
  FUN_00001d62(2,2,FUN_0000292c,&DAT_00004960,2);
LAB_0000302e:
  FUN_00002a16(&DAT_00004960,&DAT_00094988);
  if ((_DAT_00004960 & 0x10) != 0) {
    uVar1 = *(long *)(gp + -0x7b8) - 1;
    *(ulong *)(gp + -0x7b8) = uVar1;
    if (uVar1 < 2) {
      FUN_00002a02();
    }
  }
  if (_DAT_00084970 == (undefined *)0x0) goto code_r0x00003052;
  uStack_48 = *_DAT_00084970;
  uStack_47 = 0;
  FUN_00002abe(&DAT_00004960,&uStack_48);
  _DAT_00084970 = (undefined *)0x0;
  FUN_00003120(&uStack_48,2);
  goto LAB_00003056;
code_r0x00003052:
  if (_DAT_00084980 != 0) {
LAB_00003056:
    if (_DAT_00084980 != 0) {
      uStack_47 = (undefined)_DAT_00084980;
      uStack_48 = 0xd2;
      _DAT_00084980 = 0;
      FUN_00003120(&uStack_48,2);
    }
  }
  goto LAB_0000302e;
}



void FUN_0000309a(undefined param_1)

{
  undefined auStack_11 [9];
  
  auStack_11[0] = param_1;
  FUN_00001c26(2,auStack_11,1);
  return;
}



void FUN_000030b4(void)

{
  FUN_0000309a(0xc0);
  return;
}



void FUN_000030bc(long param_1)

{
  if (param_1 == 0xc0) {
    FUN_0000309a(0xdb);
    param_1 = 0xdc;
  }
  else if (param_1 == 0xdb) {
    FUN_0000309a();
    param_1 = 0xdd;
  }
  FUN_0000309a(param_1);
  return;
}



void FUN_000030ee(long param_1,ulong param_2)

{
  long lVar1;
  
  for (lVar1 = 0; (ulong)(long)(int)lVar1 < param_2; lVar1 = lVar1 + 1) {
    FUN_000030bc(*(undefined *)(param_1 + lVar1));
  }
  return;
}



void FUN_00003120(undefined8 param_1,undefined8 param_2)

{
  FUN_000030b4();
  FUN_000030ee(param_1,param_2);
  FUN_000030b4();
  return;
}



long FUN_0000313c(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (param_1 == 0xc0) {
    if (iVar1 != 0) {
      *param_2 = 0;
      return -2;
    }
    iVar1 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return -1;
      }
      if (param_1 != 0xdc) {
        if (param_1 == 0xdd) {
          *param_2 = 1;
          return 0xdb;
        }
        return -1;
      }
      *param_2 = 1;
      return 0xc0;
    }
    if (param_1 != 0xdb) {
      return (long)(int)(short)param_1;
    }
    iVar1 = 2;
  }
  *param_2 = iVar1;
  return -1;
}



void FUN_0000319e(undefined4 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_3 != 0) && (param_1 != param_2)) {
    if (param_1 < param_2) {
      if ((((ulong)param_1 | (ulong)param_2) & 3) != 0) {
        uVar5 = param_3;
        if (((((ulong)param_1 ^ (ulong)param_2) & 3) == 0) && (3 < param_3)) {
          uVar5 = 4 - ((ulong)param_2 & 3);
        }
        param_3 = param_3 - uVar5;
        uVar4 = 0;
        do {
          puVar2 = (undefined *)((long)param_2 + uVar4);
          puVar3 = (undefined *)((long)param_1 + uVar4);
          uVar4 = uVar4 + 1;
          *puVar3 = *puVar2;
        } while (uVar5 != uVar4);
        param_1 = (undefined4 *)((long)param_1 + uVar5);
        param_2 = (undefined4 *)((long)param_2 + uVar5);
      }
      if (3 < param_3) {
        uVar4 = param_3 >> 2;
        uVar5 = uVar4;
        puVar6 = param_1;
        puVar7 = param_2;
        do {
          uVar1 = *puVar7;
          uVar5 = uVar5 - 1;
          puVar7 = puVar7 + 1;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (uVar5 != 0);
        param_1 = param_1 + uVar4;
        param_2 = param_2 + uVar4;
      }
      if ((param_3 & 3) != 0) {
        uVar5 = 0;
        do {
          puVar2 = (undefined *)((long)param_2 + uVar5);
          puVar3 = (undefined *)((long)param_1 + uVar5);
          uVar5 = uVar5 + 1;
          *puVar3 = *puVar2;
        } while ((param_3 & 3) != uVar5);
        return;
      }
    }
    else {
      param_2 = (undefined4 *)((long)param_2 + param_3);
      param_1 = (undefined4 *)((long)param_1 + param_3);
      if ((((ulong)param_1 | (ulong)param_2) & 3) != 0) {
        uVar5 = param_3;
        if (((((ulong)param_1 ^ (ulong)param_2) & 3) == 0) && (4 < param_3)) {
          uVar5 = (ulong)param_2 & 3;
        }
        param_3 = param_3 - uVar5;
        uVar4 = 0xffffffffffffffff;
        do {
          puVar2 = (undefined *)((long)param_2 + uVar4);
          puVar3 = (undefined *)((long)param_1 + uVar4);
          uVar4 = uVar4 - 1;
          *puVar3 = *puVar2;
        } while (uVar4 != ~uVar5);
        param_1 = (undefined4 *)((long)param_1 + -uVar5);
        param_2 = (undefined4 *)((long)param_2 + -uVar5);
      }
      if (3 < param_3) {
        uVar4 = param_3 >> 2;
        uVar5 = uVar4;
        puVar6 = param_1;
        puVar7 = param_2;
        do {
          puVar7 = puVar7 + -1;
          puVar6 = puVar6 + -1;
          uVar5 = uVar5 - 1;
          *puVar6 = *puVar7;
        } while (uVar5 != 0);
        param_1 = param_1 + -uVar4;
        param_2 = param_2 + -uVar4;
      }
      if ((param_3 & 3) != 0) {
        uVar5 = 0xffffffffffffffff;
        do {
          puVar2 = (undefined *)((long)param_2 + uVar5);
          puVar3 = (undefined *)((long)param_1 + uVar5);
          uVar5 = uVar5 - 1;
          *puVar3 = *puVar2;
        } while (~(param_3 & 3) != uVar5);
      }
    }
  }
  return;
}



void FUN_000032c4(byte *param_1,byte param_2,ulong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_3 != 0) {
    param_1[param_3 - 1] = param_2;
    *param_1 = param_2;
    if (2 < param_3) {
      param_1[param_3 - 2] = param_2;
      param_1[1] = param_2;
      param_1[param_3 - 3] = param_2;
      param_1[2] = param_2;
      if (6 < param_3) {
        param_1[param_3 - 4] = param_2;
        param_1[3] = param_2;
        if (8 < param_3) {
          uVar1 = (uint)param_2;
          puVar3 = (uint *)(param_1 + (-(long)param_1 & 3U));
          puVar2 = (uint *)((param_3 - (-(long)param_1 & 3U) & 0xfffffffffffffffc) + (long)puVar3);
          do {
            *puVar3 = uVar1 << 8 | uVar1 << 0x10 | uVar1 | uVar1 << 0x18;
            puVar3 = puVar3 + 1;
          } while (puVar2 != puVar3);
        }
      }
    }
  }
  return;
}



char * FUN_00003334(long *param_1)

{
  long *plVar1;
  
  for (plVar1 = param_1; ((ulong)plVar1 & 7) != 0; plVar1 = (long *)((long)plVar1 + 1)) {
    if (*(char *)plVar1 == '\0') goto LAB_00003372;
  }
  do {
    if ((*plVar1 + DAT_00004038 & DAT_00004040) != 0) {
      if (*(char *)plVar1 == '\0') {
LAB_00003372:
        return (char *)((long)plVar1 - (long)param_1);
      }
      if (*(char *)((long)plVar1 + 1) == '\0') {
        return (char *)((long)plVar1 + (1 - (long)param_1));
      }
      if (*(char *)((long)plVar1 + 2) == '\0') {
        return (char *)((long)plVar1 + (2 - (long)param_1));
      }
      if (*(char *)((long)plVar1 + 3) == '\0') {
        return (char *)((long)plVar1 + (3 - (long)param_1));
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}



// roc 2007-03 005f1450  unit: seg_005f0000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1450
//
// 005f1450  83ec10               sub esp, 0x10
// 005f1453  56                   push esi
// 005f1454  8b742418             mov esi, dword ptr [esp + 0x18]
// 005f1458  57                   push edi
// 005f1459  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005f145d  3bf7                 cmp esi, edi
// 005f145f  7508                 jne 0x5f1469
// 005f1461  5f                   pop edi
// 005f1462  32c0                 xor al, al
// 005f1464  5e                   pop esi
// 005f1465  83c410               add esp, 0x10
// 005f1468  c3                   ret 
// 005f1469  8d442408             lea eax, [esp + 8]
// 005f146d  56                   push esi
// 005f146e  50                   push eax
// 005f146f  e8acfbffff           call 0x5f1020
// 005f1474  8d4c2418             lea ecx, [esp + 0x18]
// 005f1478  57                   push edi
// 005f1479  51                   push ecx
// 005f147a  e8a1fbffff           call 0x5f1020
// 005f147f  8a442420             mov al, byte ptr [esp + 0x20]
// 005f1483  83c410               add esp, 0x10
// 005f1486  38442408             cmp byte ptr [esp + 8], al
// 005f148a  7518                 jne 0x5f14a4
// 005f148c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f1490  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f1494  3bc1                 cmp eax, ecx
// 005f1496  7518                 jne 0x5f14b0
// 005f1498  3bf7                 cmp esi, edi
// 005f149a  1bc0                 sbb eax, eax
// 005f149c  5f                   pop edi
// 005f149d  f7d8                 neg eax
// 005f149f  5e                   pop esi
// 005f14a0  83c410               add esp, 0x10
// 005f14a3  c3                   ret 
// 005f14a4  0fb6c0               movzx eax, al
// 005f14a7  5f                   pop edi
// 005f14a8  0fb6c0               movzx eax, al
// 005f14ab  5e                   pop esi
// 005f14ac  83c410               add esp, 0x10
// 005f14af  c3                   ret 
// 005f14b0  1bc0                 sbb eax, eax
// 005f14b2  f7d8                 neg eax
// 005f14b4  5f                   pop edi
// 005f14b5  0fb6c0               movzx eax, al
// 005f14b8  5e                   pop esi
// 005f14b9  83c410               add esp, 0x10
// 005f14bc  c3                   ret 
// library rbxgs/v8world\ClumpStage.cpp (function ?lessMotor@RBX@@YA_NPBVMotorJoint@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp

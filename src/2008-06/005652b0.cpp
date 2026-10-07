// roc 2008-06 005652b0  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005652b0
//
// 005652b0  6aff                 push -1
// 005652b2  6840137d00           push 0x7d1340
// 005652b7  64a100000000         mov eax, dword ptr fs:[0]
// 005652bd  50                   push eax
// 005652be  64892500000000       mov dword ptr fs:[0], esp
// 005652c5  51                   push ecx
// 005652c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005652ca  8b542424             mov edx, dword ptr [esp + 0x24]
// 005652ce  56                   push esi
// 005652cf  50                   push eax
// 005652d0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005652d4  8bf1                 mov esi, ecx
// 005652d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005652da  51                   push ecx
// 005652db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005652df  52                   push edx
// 005652e0  50                   push eax
// 005652e1  51                   push ecx
// 005652e2  8d542444             lea edx, [esp + 0x44]
// 005652e6  52                   push edx
// 005652e7  e834ebffff           call 0x563e20
// 005652ec  8b08                 mov ecx, dword ptr [eax]
// 005652ee  83c410               add esp, 0x10
// 005652f1  c70000000000         mov dword ptr [eax], 0
// 005652f7  8bc4                 mov eax, esp
// 005652f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00565301  8964240c             mov dword ptr [esp + 0xc], esp
// 00565305  8908                 mov dword ptr [eax], ecx
// 00565307  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056530b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056530f  50                   push eax
// 00565310  51                   push ecx
// 00565311  c644242001           mov byte ptr [esp + 0x20], 1
// 00565316  e8c5fbffff           call 0x564ee0
// 0056531b  50                   push eax
// 0056531c  8bce                 mov ecx, esi
// 0056531e  c644242400           mov byte ptr [esp + 0x24], 0
// 00565323  e838e9ffff           call 0x563c60
// 00565328  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056532c  85c0                 test eax, eax
// 0056532e  7409                 je 0x565339
// 00565330  50                   push eax
// 00565331  e844b31300           call 0x6a067a
// 00565336  83c404               add esp, 4
// 00565339  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056533d  c70684e48200         mov dword ptr [esi], 0x82e484
// 00565343  8bc6                 mov eax, esi
// 00565345  64890d00000000       mov dword ptr fs:[0], ecx
// 0056534c  5e                   pop esi
// 0056534d  83c410               add esp, 0x10
// 00565350  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

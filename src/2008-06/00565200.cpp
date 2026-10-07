// roc 2008-06 00565200  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565200
//
// 00565200  6aff                 push -1
// 00565202  6840137d00           push 0x7d1340
// 00565207  64a100000000         mov eax, dword ptr fs:[0]
// 0056520d  50                   push eax
// 0056520e  64892500000000       mov dword ptr fs:[0], esp
// 00565215  51                   push ecx
// 00565216  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056521a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0056521e  56                   push esi
// 0056521f  50                   push eax
// 00565220  8b442428             mov eax, dword ptr [esp + 0x28]
// 00565224  8bf1                 mov esi, ecx
// 00565226  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0056522a  51                   push ecx
// 0056522b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056522f  52                   push edx
// 00565230  50                   push eax
// 00565231  51                   push ecx
// 00565232  8d542444             lea edx, [esp + 0x44]
// 00565236  52                   push edx
// 00565237  e844e8ffff           call 0x563a80
// 0056523c  8b08                 mov ecx, dword ptr [eax]
// 0056523e  83c410               add esp, 0x10
// 00565241  c70000000000         mov dword ptr [eax], 0
// 00565247  8bc4                 mov eax, esp
// 00565249  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00565251  8964240c             mov dword ptr [esp + 0xc], esp
// 00565255  8908                 mov dword ptr [eax], ecx
// 00565257  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056525b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056525f  50                   push eax
// 00565260  51                   push ecx
// 00565261  c644242001           mov byte ptr [esp + 0x20], 1
// 00565266  e875fcffff           call 0x564ee0
// 0056526b  50                   push eax
// 0056526c  8bce                 mov ecx, esi
// 0056526e  c644242400           mov byte ptr [esp + 0x24], 0
// 00565273  e81850eaff           call 0x40a290
// 00565278  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056527c  85c0                 test eax, eax
// 0056527e  7409                 je 0x565289
// 00565280  50                   push eax
// 00565281  e8f4b31300           call 0x6a067a
// 00565286  83c404               add esp, 4
// 00565289  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056528d  c70650e48200         mov dword ptr [esi], 0x82e450
// 00565293  8bc6                 mov eax, esi
// 00565295  64890d00000000       mov dword ptr fs:[0], ecx
// 0056529c  5e                   pop esi
// 0056529d  83c410               add esp, 0x10
// 005652a0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

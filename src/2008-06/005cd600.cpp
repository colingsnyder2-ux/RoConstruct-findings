// roc 2008-06 005cd600  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd600
//
// 005cd600  6aff                 push -1
// 005cd602  6840137d00           push 0x7d1340
// 005cd607  64a100000000         mov eax, dword ptr fs:[0]
// 005cd60d  50                   push eax
// 005cd60e  64892500000000       mov dword ptr fs:[0], esp
// 005cd615  51                   push ecx
// 005cd616  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005cd61a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005cd61e  56                   push esi
// 005cd61f  50                   push eax
// 005cd620  8b442428             mov eax, dword ptr [esp + 0x28]
// 005cd624  8bf1                 mov esi, ecx
// 005cd626  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005cd62a  51                   push ecx
// 005cd62b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cd62f  52                   push edx
// 005cd630  50                   push eax
// 005cd631  51                   push ecx
// 005cd632  8d542444             lea edx, [esp + 0x44]
// 005cd636  52                   push edx
// 005cd637  e8a4f9ffff           call 0x5ccfe0
// 005cd63c  8b08                 mov ecx, dword ptr [eax]
// 005cd63e  83c410               add esp, 0x10
// 005cd641  c70000000000         mov dword ptr [eax], 0
// 005cd647  8bc4                 mov eax, esp
// 005cd649  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005cd651  8964240c             mov dword ptr [esp + 0xc], esp
// 005cd655  8908                 mov dword ptr [eax], ecx
// 005cd657  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cd65b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cd65f  50                   push eax
// 005cd660  51                   push ecx
// 005cd661  c644242001           mov byte ptr [esp + 0x20], 1
// 005cd666  e825ffffff           call 0x5cd590
// 005cd66b  50                   push eax
// 005cd66c  8bce                 mov ecx, esi
// 005cd66e  c644242400           mov byte ptr [esp + 0x24], 0
// 005cd673  e8c86dfbff           call 0x584440
// 005cd678  8b442430             mov eax, dword ptr [esp + 0x30]
// 005cd67c  85c0                 test eax, eax
// 005cd67e  7409                 je 0x5cd689
// 005cd680  50                   push eax
// 005cd681  e8f42f0d00           call 0x6a067a
// 005cd686  83c404               add esp, 4
// 005cd689  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cd68d  c70698a48300         mov dword ptr [esi], 0x83a498
// 005cd693  8bc6                 mov eax, esi
// 005cd695  64890d00000000       mov dword ptr fs:[0], ecx
// 005cd69c  5e                   pop esi
// 005cd69d  83c410               add esp, 0x10
// 005cd6a0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

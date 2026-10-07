// roc 2008-06 005cd6b0  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd6b0
//
// 005cd6b0  6aff                 push -1
// 005cd6b2  6840137d00           push 0x7d1340
// 005cd6b7  64a100000000         mov eax, dword ptr fs:[0]
// 005cd6bd  50                   push eax
// 005cd6be  64892500000000       mov dword ptr fs:[0], esp
// 005cd6c5  51                   push ecx
// 005cd6c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005cd6ca  8b542424             mov edx, dword ptr [esp + 0x24]
// 005cd6ce  56                   push esi
// 005cd6cf  50                   push eax
// 005cd6d0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005cd6d4  8bf1                 mov esi, ecx
// 005cd6d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005cd6da  51                   push ecx
// 005cd6db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cd6df  52                   push edx
// 005cd6e0  50                   push eax
// 005cd6e1  51                   push ecx
// 005cd6e2  8d542444             lea edx, [esp + 0x44]
// 005cd6e6  52                   push edx
// 005cd6e7  e844f9ffff           call 0x5cd030
// 005cd6ec  8b08                 mov ecx, dword ptr [eax]
// 005cd6ee  83c410               add esp, 0x10
// 005cd6f1  c70000000000         mov dword ptr [eax], 0
// 005cd6f7  8bc4                 mov eax, esp
// 005cd6f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005cd701  8964240c             mov dword ptr [esp + 0xc], esp
// 005cd705  8908                 mov dword ptr [eax], ecx
// 005cd707  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cd70b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cd70f  50                   push eax
// 005cd710  51                   push ecx
// 005cd711  c644242001           mov byte ptr [esp + 0x20], 1
// 005cd716  e875feffff           call 0x5cd590
// 005cd71b  50                   push eax
// 005cd71c  8bce                 mov ecx, esi
// 005cd71e  c644242400           mov byte ptr [esp + 0x24], 0
// 005cd723  e8186dfbff           call 0x584440
// 005cd728  8b442430             mov eax, dword ptr [esp + 0x30]
// 005cd72c  85c0                 test eax, eax
// 005cd72e  7409                 je 0x5cd739
// 005cd730  50                   push eax
// 005cd731  e8442f0d00           call 0x6a067a
// 005cd736  83c404               add esp, 4
// 005cd739  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cd73d  c70698a48300         mov dword ptr [esi], 0x83a498
// 005cd743  8bc6                 mov eax, esi
// 005cd745  64890d00000000       mov dword ptr fs:[0], ecx
// 005cd74c  5e                   pop esi
// 005cd74d  83c410               add esp, 0x10
// 005cd750  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

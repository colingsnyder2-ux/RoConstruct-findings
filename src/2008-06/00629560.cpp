// roc 2008-06 00629560  unit: RBX::VClickDetector::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629560
//
// 00629560  6aff                 push -1
// 00629562  6840137d00           push 0x7d1340
// 00629567  64a100000000         mov eax, dword ptr fs:[0]
// 0062956d  50                   push eax
// 0062956e  64892500000000       mov dword ptr fs:[0], esp
// 00629575  51                   push ecx
// 00629576  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062957a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062957e  56                   push esi
// 0062957f  50                   push eax
// 00629580  8b442428             mov eax, dword ptr [esp + 0x28]
// 00629584  8bf1                 mov esi, ecx
// 00629586  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062958a  51                   push ecx
// 0062958b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062958f  52                   push edx
// 00629590  50                   push eax
// 00629591  51                   push ecx
// 00629592  8d542444             lea edx, [esp + 0x44]
// 00629596  52                   push edx
// 00629597  e8b4feffff           call 0x629450
// 0062959c  8b08                 mov ecx, dword ptr [eax]
// 0062959e  83c410               add esp, 0x10
// 006295a1  c70000000000         mov dword ptr [eax], 0
// 006295a7  8bc4                 mov eax, esp
// 006295a9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006295b1  8964240c             mov dword ptr [esp + 0xc], esp
// 006295b5  8908                 mov dword ptr [eax], ecx
// 006295b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006295bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006295bf  50                   push eax
// 006295c0  51                   push ecx
// 006295c1  c644242001           mov byte ptr [esp + 0x20], 1
// 006295c6  e8e56cf9ff           call 0x5c02b0
// 006295cb  50                   push eax
// 006295cc  8bce                 mov ecx, esi
// 006295ce  c644242400           mov byte ptr [esp + 0x24], 0
// 006295d3  e8b80cdeff           call 0x40a290
// 006295d8  8b442430             mov eax, dword ptr [esp + 0x30]
// 006295dc  85c0                 test eax, eax
// 006295de  7409                 je 0x6295e9
// 006295e0  50                   push eax
// 006295e1  e894700700           call 0x6a067a
// 006295e6  83c404               add esp, 4
// 006295e9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006295ed  c70664598400         mov dword ptr [esi], 0x845964
// 006295f3  8bc6                 mov eax, esi
// 006295f5  64890d00000000       mov dword ptr fs:[0], ecx
// 006295fc  5e                   pop esi
// 006295fd  83c410               add esp, 0x10
// 00629600  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

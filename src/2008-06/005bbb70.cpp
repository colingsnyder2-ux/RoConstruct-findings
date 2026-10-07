// roc 2008-06 005bbb70  unit: RBX::Soundscape::SoundService  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bbb70
//
// 005bbb70  6aff                 push -1
// 005bbb72  6840137d00           push 0x7d1340
// 005bbb77  64a100000000         mov eax, dword ptr fs:[0]
// 005bbb7d  50                   push eax
// 005bbb7e  64892500000000       mov dword ptr fs:[0], esp
// 005bbb85  51                   push ecx
// 005bbb86  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005bbb8a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005bbb8e  56                   push esi
// 005bbb8f  50                   push eax
// 005bbb90  8b442428             mov eax, dword ptr [esp + 0x28]
// 005bbb94  8bf1                 mov esi, ecx
// 005bbb96  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005bbb9a  51                   push ecx
// 005bbb9b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005bbb9f  52                   push edx
// 005bbba0  50                   push eax
// 005bbba1  51                   push ecx
// 005bbba2  8d542444             lea edx, [esp + 0x44]
// 005bbba6  52                   push edx
// 005bbba7  e8a4c2ffff           call 0x5b7e50
// 005bbbac  8b08                 mov ecx, dword ptr [eax]
// 005bbbae  83c410               add esp, 0x10
// 005bbbb1  c70000000000         mov dword ptr [eax], 0
// 005bbbb7  8bc4                 mov eax, esp
// 005bbbb9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005bbbc1  8964240c             mov dword ptr [esp + 0xc], esp
// 005bbbc5  8908                 mov dword ptr [eax], ecx
// 005bbbc7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005bbbcb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bbbcf  50                   push eax
// 005bbbd0  51                   push ecx
// 005bbbd1  c644242001           mov byte ptr [esp + 0x20], 1
// 005bbbd6  e885fcffff           call 0x5bb860
// 005bbbdb  50                   push eax
// 005bbbdc  8bce                 mov ecx, esi
// 005bbbde  c644242400           mov byte ptr [esp + 0x24], 0
// 005bbbe3  e8b876e8ff           call 0x4432a0
// 005bbbe8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005bbbec  85c0                 test eax, eax
// 005bbbee  7409                 je 0x5bbbf9
// 005bbbf0  50                   push eax
// 005bbbf1  e8844a0e00           call 0x6a067a
// 005bbbf6  83c404               add esp, 4
// 005bbbf9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbbfd  c7069c7c8300         mov dword ptr [esi], 0x837c9c
// 005bbc03  8bc6                 mov eax, esi
// 005bbc05  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbc0c  5e                   pop esi
// 005bbc0d  83c410               add esp, 0x10
// 005bbc10  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

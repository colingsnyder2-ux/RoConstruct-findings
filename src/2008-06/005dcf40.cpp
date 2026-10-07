// roc 2008-06 005dcf40  unit: RBX::Hint  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dcf40
//
// 005dcf40  6aff                 push -1
// 005dcf42  6840137d00           push 0x7d1340
// 005dcf47  64a100000000         mov eax, dword ptr fs:[0]
// 005dcf4d  50                   push eax
// 005dcf4e  64892500000000       mov dword ptr fs:[0], esp
// 005dcf55  51                   push ecx
// 005dcf56  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dcf5a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005dcf5e  56                   push esi
// 005dcf5f  50                   push eax
// 005dcf60  8b442428             mov eax, dword ptr [esp + 0x28]
// 005dcf64  8bf1                 mov esi, ecx
// 005dcf66  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005dcf6a  51                   push ecx
// 005dcf6b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dcf6f  52                   push edx
// 005dcf70  50                   push eax
// 005dcf71  51                   push ecx
// 005dcf72  8d542444             lea edx, [esp + 0x44]
// 005dcf76  52                   push edx
// 005dcf77  e874ffffff           call 0x5dcef0
// 005dcf7c  8b08                 mov ecx, dword ptr [eax]
// 005dcf7e  83c410               add esp, 0x10
// 005dcf81  c70000000000         mov dword ptr [eax], 0
// 005dcf87  8bc4                 mov eax, esp
// 005dcf89  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005dcf91  8964240c             mov dword ptr [esp + 0xc], esp
// 005dcf95  8908                 mov dword ptr [eax], ecx
// 005dcf97  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dcf9b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dcf9f  50                   push eax
// 005dcfa0  51                   push ecx
// 005dcfa1  c644242001           mov byte ptr [esp + 0x20], 1
// 005dcfa6  e8256decff           call 0x4a3cd0
// 005dcfab  50                   push eax
// 005dcfac  8bce                 mov ecx, esi
// 005dcfae  c644242400           mov byte ptr [esp + 0x24], 0
// 005dcfb3  e87862e6ff           call 0x443230
// 005dcfb8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005dcfbc  85c0                 test eax, eax
// 005dcfbe  7409                 je 0x5dcfc9
// 005dcfc0  50                   push eax
// 005dcfc1  e8b4360c00           call 0x6a067a
// 005dcfc6  83c404               add esp, 4
// 005dcfc9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dcfcd  c7064cd98300         mov dword ptr [esi], 0x83d94c
// 005dcfd3  8bc6                 mov eax, esi
// 005dcfd5  64890d00000000       mov dword ptr fs:[0], ecx
// 005dcfdc  5e                   pop esi
// 005dcfdd  83c410               add esp, 0x10
// 005dcfe0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

// roc 2008-06 00491bf0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491bf0
//
// 00491bf0  6aff                 push -1
// 00491bf2  6840137d00           push 0x7d1340
// 00491bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00491bfd  50                   push eax
// 00491bfe  64892500000000       mov dword ptr fs:[0], esp
// 00491c05  51                   push ecx
// 00491c06  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00491c0a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00491c0e  56                   push esi
// 00491c0f  50                   push eax
// 00491c10  8b442428             mov eax, dword ptr [esp + 0x28]
// 00491c14  8bf1                 mov esi, ecx
// 00491c16  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00491c1a  51                   push ecx
// 00491c1b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00491c1f  52                   push edx
// 00491c20  50                   push eax
// 00491c21  51                   push ecx
// 00491c22  8d542444             lea edx, [esp + 0x44]
// 00491c26  52                   push edx
// 00491c27  e86498ffff           call 0x48b490
// 00491c2c  8b08                 mov ecx, dword ptr [eax]
// 00491c2e  83c410               add esp, 0x10
// 00491c31  c70000000000         mov dword ptr [eax], 0
// 00491c37  8bc4                 mov eax, esp
// 00491c39  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00491c41  8964240c             mov dword ptr [esp + 0xc], esp
// 00491c45  8908                 mov dword ptr [eax], ecx
// 00491c47  8b442424             mov eax, dword ptr [esp + 0x24]
// 00491c4b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00491c4f  50                   push eax
// 00491c50  51                   push ecx
// 00491c51  c644242001           mov byte ptr [esp + 0x20], 1
// 00491c56  e805f7ffff           call 0x491360
// 00491c5b  50                   push eax
// 00491c5c  8bce                 mov ecx, esi
// 00491c5e  c644242400           mov byte ptr [esp + 0x24], 0
// 00491c63  e81895ffff           call 0x48b180
// 00491c68  8b442430             mov eax, dword ptr [esp + 0x30]
// 00491c6c  85c0                 test eax, eax
// 00491c6e  7409                 je 0x491c79
// 00491c70  50                   push eax
// 00491c71  e804ea2000           call 0x6a067a
// 00491c76  83c404               add esp, 4
// 00491c79  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00491c7d  c7063c1c8200         mov dword ptr [esi], 0x821c3c
// 00491c83  8bc6                 mov eax, esi
// 00491c85  64890d00000000       mov dword ptr fs:[0], ecx
// 00491c8c  5e                   pop esi
// 00491c8d  83c410               add esp, 0x10
// 00491c90  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

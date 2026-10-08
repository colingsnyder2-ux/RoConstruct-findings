// roc 2007-08 005b0d10  unit: RBX::AutoJoint  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0d10
//
// 005b0d10  64a100000000         mov eax, dword ptr fs:[0]
// 005b0d16  6aff                 push -1
// 005b0d18  6890117500           push 0x751190
// 005b0d1d  50                   push eax
// 005b0d1e  64892500000000       mov dword ptr fs:[0], esp
// 005b0d25  8b442428             mov eax, dword ptr [esp + 0x28]
// 005b0d29  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b0d2d  56                   push esi
// 005b0d2e  50                   push eax
// 005b0d2f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005b0d33  8bf1                 mov esi, ecx
// 005b0d35  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b0d39  51                   push ecx
// 005b0d3a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b0d3e  52                   push edx
// 005b0d3f  50                   push eax
// 005b0d40  51                   push ecx
// 005b0d41  8d542440             lea edx, [esp + 0x40]
// 005b0d45  52                   push edx
// 005b0d46  e8c5f3ffff           call 0x5b0110
// 005b0d4b  8b10                 mov edx, dword ptr [eax]
// 005b0d4d  83c410               add esp, 0x10
// 005b0d50  8bcc                 mov ecx, esp
// 005b0d52  c70000000000         mov dword ptr [eax], 0
// 005b0d58  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005b0d60  8964242c             mov dword ptr [esp + 0x2c], esp
// 005b0d64  8911                 mov dword ptr [ecx], edx
// 005b0d66  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b0d6a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005b0d6e  52                   push edx
// 005b0d6f  50                   push eax
// 005b0d70  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005b0d75  e84604feff           call 0x5911c0
// 005b0d7a  50                   push eax
// 005b0d7b  8bce                 mov ecx, esi
// 005b0d7d  c644242000           mov byte ptr [esp + 0x20], 0
// 005b0d82  e85945e9ff           call 0x4452e0
// 005b0d87  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b0d8b  51                   push ecx
// 005b0d8c  e8d1ee0700           call 0x62fc62
// 005b0d91  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b0d95  83c404               add esp, 4
// 005b0d98  c7065c697b00         mov dword ptr [esi], 0x7b695c
// 005b0d9e  8bc6                 mov eax, esi
// 005b0da0  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0da7  5e                   pop esi
// 005b0da8  83c40c               add esp, 0xc
// 005b0dab  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

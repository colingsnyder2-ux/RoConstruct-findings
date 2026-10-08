// roc 2007-03 005a9b10  unit: seg_005a0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9b10
//
// 005a9b10  64a100000000         mov eax, dword ptr fs:[0]
// 005a9b16  6aff                 push -1
// 005a9b18  68a08b7500           push 0x758ba0
// 005a9b1d  50                   push eax
// 005a9b1e  64892500000000       mov dword ptr fs:[0], esp
// 005a9b25  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a9b29  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a9b2d  56                   push esi
// 005a9b2e  50                   push eax
// 005a9b2f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a9b33  8bf1                 mov esi, ecx
// 005a9b35  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a9b39  51                   push ecx
// 005a9b3a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a9b3e  52                   push edx
// 005a9b3f  50                   push eax
// 005a9b40  51                   push ecx
// 005a9b41  8d542440             lea edx, [esp + 0x40]
// 005a9b45  52                   push edx
// 005a9b46  e885f4ffff           call 0x5a8fd0
// 005a9b4b  8b10                 mov edx, dword ptr [eax]
// 005a9b4d  83c410               add esp, 0x10
// 005a9b50  8bcc                 mov ecx, esp
// 005a9b52  c70000000000         mov dword ptr [eax], 0
// 005a9b58  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a9b60  8964242c             mov dword ptr [esp + 0x2c], esp
// 005a9b64  8911                 mov dword ptr [ecx], edx
// 005a9b66  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a9b6a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a9b6e  52                   push edx
// 005a9b6f  50                   push eax
// 005a9b70  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005a9b75  e80607feff           call 0x58a280
// 005a9b7a  50                   push eax
// 005a9b7b  8bce                 mov ecx, esi
// 005a9b7d  c644242000           mov byte ptr [esp + 0x20], 0
// 005a9b82  e839ade9ff           call 0x4448c0
// 005a9b87  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a9b8b  51                   push ecx
// 005a9b8c  e85f450700           call 0x61e0f0
// 005a9b91  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a9b95  83c404               add esp, 4
// 005a9b98  c70670677b00         mov dword ptr [esi], 0x7b6770
// 005a9b9e  8bc6                 mov eax, esi
// 005a9ba0  64890d00000000       mov dword ptr fs:[0], ecx
// 005a9ba7  5e                   pop esi
// 005a9ba8  83c40c               add esp, 0xc
// 005a9bab  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

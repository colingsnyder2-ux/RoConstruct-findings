// roc 2007-03 00541390  unit: seg_00540000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541390
//
// 00541390  64a100000000         mov eax, dword ptr fs:[0]
// 00541396  6aff                 push -1
// 00541398  68a08b7500           push 0x758ba0
// 0054139d  50                   push eax
// 0054139e  64892500000000       mov dword ptr fs:[0], esp
// 005413a5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005413a9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005413ad  56                   push esi
// 005413ae  50                   push eax
// 005413af  8b442424             mov eax, dword ptr [esp + 0x24]
// 005413b3  8bf1                 mov esi, ecx
// 005413b5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005413b9  51                   push ecx
// 005413ba  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005413be  52                   push edx
// 005413bf  50                   push eax
// 005413c0  51                   push ecx
// 005413c1  8d542440             lea edx, [esp + 0x40]
// 005413c5  52                   push edx
// 005413c6  e8f5e9ffff           call 0x53fdc0
// 005413cb  8b10                 mov edx, dword ptr [eax]
// 005413cd  83c410               add esp, 0x10
// 005413d0  8bcc                 mov ecx, esp
// 005413d2  c70000000000         mov dword ptr [eax], 0
// 005413d8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005413e0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005413e4  8911                 mov dword ptr [ecx], edx
// 005413e6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005413ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005413ee  52                   push edx
// 005413ef  50                   push eax
// 005413f0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005413f5  e86687edff           call 0x419b60
// 005413fa  50                   push eax
// 005413fb  8bce                 mov ecx, esi
// 005413fd  c644242000           mov byte ptr [esp + 0x20], 0
// 00541402  e81915f0ff           call 0x442920
// 00541407  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0054140b  51                   push ecx
// 0054140c  e8dfcc0d00           call 0x61e0f0
// 00541411  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00541415  83c404               add esp, 4
// 00541418  c706f8667a00         mov dword ptr [esi], 0x7a66f8
// 0054141e  8bc6                 mov eax, esi
// 00541420  64890d00000000       mov dword ptr fs:[0], ecx
// 00541427  5e                   pop esi
// 00541428  83c40c               add esp, 0xc
// 0054142b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

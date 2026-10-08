// roc 2007-03 005902c0  unit: seg_00590000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005902c0
//
// 005902c0  64a100000000         mov eax, dword ptr fs:[0]
// 005902c6  6aff                 push -1
// 005902c8  68a08b7500           push 0x758ba0
// 005902cd  50                   push eax
// 005902ce  64892500000000       mov dword ptr fs:[0], esp
// 005902d5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005902d9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005902dd  56                   push esi
// 005902de  50                   push eax
// 005902df  8b442424             mov eax, dword ptr [esp + 0x24]
// 005902e3  8bf1                 mov esi, ecx
// 005902e5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005902e9  51                   push ecx
// 005902ea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005902ee  52                   push edx
// 005902ef  50                   push eax
// 005902f0  51                   push ecx
// 005902f1  8d542440             lea edx, [esp + 0x40]
// 005902f5  52                   push edx
// 005902f6  e8d5f0ffff           call 0x58f3d0
// 005902fb  8b10                 mov edx, dword ptr [eax]
// 005902fd  83c410               add esp, 0x10
// 00590300  8bcc                 mov ecx, esp
// 00590302  c70000000000         mov dword ptr [eax], 0
// 00590308  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00590310  8964242c             mov dword ptr [esp + 0x2c], esp
// 00590314  8911                 mov dword ptr [ecx], edx
// 00590316  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059031a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059031e  52                   push edx
// 0059031f  50                   push eax
// 00590320  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00590325  e876fdffff           call 0x5900a0
// 0059032a  50                   push eax
// 0059032b  8bce                 mov ecx, esi
// 0059032d  c644242000           mov byte ptr [esp + 0x20], 0
// 00590332  e8b948faff           call 0x534bf0
// 00590337  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059033b  51                   push ecx
// 0059033c  e8afdd0800           call 0x61e0f0
// 00590341  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00590345  83c404               add esp, 4
// 00590348  c706b4167b00         mov dword ptr [esi], 0x7b16b4
// 0059034e  8bc6                 mov eax, esi
// 00590350  64890d00000000       mov dword ptr fs:[0], ecx
// 00590357  5e                   pop esi
// 00590358  83c40c               add esp, 0xc
// 0059035b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

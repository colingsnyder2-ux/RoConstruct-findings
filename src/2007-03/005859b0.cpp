// roc 2007-03 005859b0  unit: seg_00580000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005859b0
//
// 005859b0  64a100000000         mov eax, dword ptr fs:[0]
// 005859b6  6aff                 push -1
// 005859b8  68a08b7500           push 0x758ba0
// 005859bd  50                   push eax
// 005859be  64892500000000       mov dword ptr fs:[0], esp
// 005859c5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005859c9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005859cd  56                   push esi
// 005859ce  50                   push eax
// 005859cf  8b442424             mov eax, dword ptr [esp + 0x24]
// 005859d3  8bf1                 mov esi, ecx
// 005859d5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005859d9  51                   push ecx
// 005859da  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005859de  52                   push edx
// 005859df  50                   push eax
// 005859e0  51                   push ecx
// 005859e1  8d542440             lea edx, [esp + 0x40]
// 005859e5  52                   push edx
// 005859e6  e865edffff           call 0x584750
// 005859eb  8b10                 mov edx, dword ptr [eax]
// 005859ed  83c410               add esp, 0x10
// 005859f0  8bcc                 mov ecx, esp
// 005859f2  c70000000000         mov dword ptr [eax], 0
// 005859f8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00585a00  8964242c             mov dword ptr [esp + 0x2c], esp
// 00585a04  8911                 mov dword ptr [ecx], edx
// 00585a06  8b542420             mov edx, dword ptr [esp + 0x20]
// 00585a0a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00585a0e  52                   push edx
// 00585a0f  50                   push eax
// 00585a10  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00585a15  e866fcffff           call 0x585680
// 00585a1a  50                   push eax
// 00585a1b  8bce                 mov ecx, esi
// 00585a1d  c644242000           mov byte ptr [esp + 0x20], 0
// 00585a22  e869ceebff           call 0x442890
// 00585a27  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00585a2b  51                   push ecx
// 00585a2c  e8bf860900           call 0x61e0f0
// 00585a31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00585a35  83c404               add esp, 4
// 00585a38  c70678fd7a00         mov dword ptr [esi], 0x7afd78
// 00585a3e  8bc6                 mov eax, esi
// 00585a40  64890d00000000       mov dword ptr fs:[0], ecx
// 00585a47  5e                   pop esi
// 00585a48  83c40c               add esp, 0xc
// 00585a4b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

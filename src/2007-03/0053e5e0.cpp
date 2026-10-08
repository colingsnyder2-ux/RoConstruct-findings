// roc 2007-03 0053e5e0  unit: seg_00530000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053e5e0
//
// 0053e5e0  64a100000000         mov eax, dword ptr fs:[0]
// 0053e5e6  6aff                 push -1
// 0053e5e8  68a08b7500           push 0x758ba0
// 0053e5ed  50                   push eax
// 0053e5ee  64892500000000       mov dword ptr fs:[0], esp
// 0053e5f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053e5f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053e5fd  56                   push esi
// 0053e5fe  50                   push eax
// 0053e5ff  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053e603  8bf1                 mov esi, ecx
// 0053e605  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053e609  51                   push ecx
// 0053e60a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053e60e  52                   push edx
// 0053e60f  50                   push eax
// 0053e610  51                   push ecx
// 0053e611  8d542440             lea edx, [esp + 0x40]
// 0053e615  52                   push edx
// 0053e616  e885feffff           call 0x53e4a0
// 0053e61b  8b10                 mov edx, dword ptr [eax]
// 0053e61d  83c410               add esp, 0x10
// 0053e620  8bcc                 mov ecx, esp
// 0053e622  c70000000000         mov dword ptr [eax], 0
// 0053e628  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053e630  8964242c             mov dword ptr [esp + 0x2c], esp
// 0053e634  8911                 mov dword ptr [ecx], edx
// 0053e636  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053e63a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053e63e  52                   push edx
// 0053e63f  50                   push eax
// 0053e640  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0053e645  e826ffffff           call 0x53e570
// 0053e64a  50                   push eax
// 0053e64b  8bce                 mov ecx, esi
// 0053e64d  c644242000           mov byte ptr [esp + 0x20], 0
// 0053e652  e8c942f0ff           call 0x442920
// 0053e657  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053e65b  51                   push ecx
// 0053e65c  e88ffa0d00           call 0x61e0f0
// 0053e661  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053e665  83c404               add esp, 4
// 0053e668  c70648617a00         mov dword ptr [esi], 0x7a6148
// 0053e66e  8bc6                 mov eax, esi
// 0053e670  64890d00000000       mov dword ptr fs:[0], ecx
// 0053e677  5e                   pop esi
// 0053e678  83c40c               add esp, 0xc
// 0053e67b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

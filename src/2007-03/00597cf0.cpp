// roc 2007-03 00597cf0  unit: seg_00590000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00597cf0
//
// 00597cf0  64a100000000         mov eax, dword ptr fs:[0]
// 00597cf6  6aff                 push -1
// 00597cf8  68a08b7500           push 0x758ba0
// 00597cfd  50                   push eax
// 00597cfe  64892500000000       mov dword ptr fs:[0], esp
// 00597d05  8b442428             mov eax, dword ptr [esp + 0x28]
// 00597d09  8b542420             mov edx, dword ptr [esp + 0x20]
// 00597d0d  56                   push esi
// 00597d0e  50                   push eax
// 00597d0f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00597d13  8bf1                 mov esi, ecx
// 00597d15  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00597d19  51                   push ecx
// 00597d1a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00597d1e  52                   push edx
// 00597d1f  50                   push eax
// 00597d20  51                   push ecx
// 00597d21  8d542440             lea edx, [esp + 0x40]
// 00597d25  52                   push edx
// 00597d26  e865b5ffff           call 0x593290
// 00597d2b  8b10                 mov edx, dword ptr [eax]
// 00597d2d  83c410               add esp, 0x10
// 00597d30  8bcc                 mov ecx, esp
// 00597d32  c70000000000         mov dword ptr [eax], 0
// 00597d38  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00597d40  8964242c             mov dword ptr [esp + 0x2c], esp
// 00597d44  8911                 mov dword ptr [ecx], edx
// 00597d46  8b542420             mov edx, dword ptr [esp + 0x20]
// 00597d4a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00597d4e  52                   push edx
// 00597d4f  50                   push eax
// 00597d50  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00597d55  e8a6fcffff           call 0x597a00
// 00597d5a  50                   push eax
// 00597d5b  8bce                 mov ecx, esi
// 00597d5d  c644242000           mov byte ptr [esp + 0x20], 0
// 00597d62  e8b9abeaff           call 0x442920
// 00597d67  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00597d6b  51                   push ecx
// 00597d6c  e87f630800           call 0x61e0f0
// 00597d71  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597d75  83c404               add esp, 4
// 00597d78  c706101c7b00         mov dword ptr [esi], 0x7b1c10
// 00597d7e  8bc6                 mov eax, esi
// 00597d80  64890d00000000       mov dword ptr fs:[0], ecx
// 00597d87  5e                   pop esi
// 00597d88  83c40c               add esp, 0xc
// 00597d8b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

// roc 2007-08 0056d7d0  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d7d0
//
// 0056d7d0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d7d6  6aff                 push -1
// 0056d7d8  68ee497500           push 0x7549ee
// 0056d7dd  50                   push eax
// 0056d7de  b801000000           mov eax, 1
// 0056d7e3  64892500000000       mov dword ptr fs:[0], esp
// 0056d7ea  840560248c00         test byte ptr [0x8c2460], al
// 0056d7f0  752f                 jne 0x56d821
// 0056d7f2  090560248c00         or dword ptr [0x8c2460], eax
// 0056d7f8  68d4278800           push 0x8827d4
// 0056d7fd  6854a67900           push 0x79a654
// 0056d802  b950248c00           mov ecx, 0x8c2450
// 0056d807  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d80f  e8ecedffff           call 0x56c600
// 0056d814  68009f7700           push 0x779f00
// 0056d819  e805350c00           call 0x630d23
// 0056d81e  83c404               add esp, 4
// 0056d821  8b0c24               mov ecx, dword ptr [esp]
// 0056d824  b850248c00           mov eax, 0x8c2450
// 0056d829  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d830  83c40c               add esp, 0xc
// 0056d833  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@H@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp

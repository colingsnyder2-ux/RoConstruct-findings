// roc 2007-03 0056d550  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d550
//
// 0056d550  64a100000000         mov eax, dword ptr fs:[0]
// 0056d556  6aff                 push -1
// 0056d558  681e5f7500           push 0x755f1e
// 0056d55d  50                   push eax
// 0056d55e  b801000000           mov eax, 1
// 0056d563  64892500000000       mov dword ptr fs:[0], esp
// 0056d56a  8405dcc78b00         test byte ptr [0x8bc7dc], al
// 0056d570  752f                 jne 0x56d5a1
// 0056d572  0905dcc78b00         or dword ptr [0x8bc7dc], eax
// 0056d578  68b47d8900           push 0x897db4
// 0056d57d  68e8b67a00           push 0x7ab6e8
// 0056d582  b9ccc78b00           mov ecx, 0x8bc7cc
// 0056d587  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d58f  e8bcecffff           call 0x56c250
// 0056d594  68509c7700           push 0x779c50
// 0056d599  e8151c0b00           call 0x61f1b3
// 0056d59e  83c404               add esp, 4
// 0056d5a1  8b0c24               mov ecx, dword ptr [esp]
// 0056d5a4  b8ccc78b00           mov eax, 0x8bc7cc
// 0056d5a9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d5b0  83c40c               add esp, 0xc
// 0056d5b3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@VColor3@G3D@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp

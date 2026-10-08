// roc 2008-06 0056cfb0  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056cfb0
//
// 0056cfb0  64a100000000         mov eax, dword ptr fs:[0]
// 0056cfb6  6aff                 push -1
// 0056cfb8  685efe7c00           push 0x7cfe5e
// 0056cfbd  50                   push eax
// 0056cfbe  b801000000           mov eax, 1
// 0056cfc3  64892500000000       mov dword ptr fs:[0], esp
// 0056cfca  8405584c9700         test byte ptr [0x974c58], al
// 0056cfd0  752f                 jne 0x56d001
// 0056cfd2  0905584c9700         or dword ptr [0x974c58], eax
// 0056cfd8  6860bf9200           push 0x92bf60
// 0056cfdd  68e0f68200           push 0x82f6e0
// 0056cfe2  b9484c9700           mov ecx, 0x974c48
// 0056cfe7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056cfef  e89cedffff           call 0x56bd90
// 0056cff4  68d0d27f00           push 0x7fd2d0
// 0056cff9  e8b1471300           call 0x6a17af
// 0056cffe  83c404               add esp, 4
// 0056d001  8b0c24               mov ecx, dword ptr [esp]
// 0056d004  b8484c9700           mov eax, 0x974c48
// 0056d009  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d010  83c40c               add esp, 0xc
// 0056d013  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp

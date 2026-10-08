// roc 2008-06 0056cd10  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056cd10
//
// 0056cd10  64a100000000         mov eax, dword ptr fs:[0]
// 0056cd16  6aff                 push -1
// 0056cd18  689efd7c00           push 0x7cfd9e
// 0056cd1d  50                   push eax
// 0056cd1e  b801000000           mov eax, 1
// 0056cd23  64892500000000       mov dword ptr fs:[0], esp
// 0056cd2a  8405e04b9700         test byte ptr [0x974be0], al
// 0056cd30  752f                 jne 0x56cd61
// 0056cd32  0905e04b9700         or dword ptr [0x974be0], eax
// 0056cd38  68e8be9200           push 0x92bee8
// 0056cd3d  68a8f68200           push 0x82f6a8
// 0056cd42  b9d04b9700           mov ecx, 0x974bd0
// 0056cd47  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056cd4f  e83cf0ffff           call 0x56bd90
// 0056cd54  6870d27f00           push 0x7fd270
// 0056cd59  e8514a1300           call 0x6a17af
// 0056cd5e  83c404               add esp, 4
// 0056cd61  8b0c24               mov ecx, dword ptr [esp]
// 0056cd64  b8d04b9700           mov eax, 0x974bd0
// 0056cd69  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cd70  83c40c               add esp, 0xc
// 0056cd73  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@N@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp

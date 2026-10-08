// roc 2008-06 0056cf40  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056cf40
//
// 0056cf40  64a100000000         mov eax, dword ptr fs:[0]
// 0056cf46  6aff                 push -1
// 0056cf48  683efe7c00           push 0x7cfe3e
// 0056cf4d  50                   push eax
// 0056cf4e  b801000000           mov eax, 1
// 0056cf53  64892500000000       mov dword ptr fs:[0], esp
// 0056cf5a  8405444c9700         test byte ptr [0x974c44], al
// 0056cf60  752f                 jne 0x56cf91
// 0056cf62  0905444c9700         or dword ptr [0x974c44], eax
// 0056cf68  68a4639400           push 0x9463a4
// 0056cf6d  68d8f68200           push 0x82f6d8
// 0056cf72  b9344c9700           mov ecx, 0x974c34
// 0056cf77  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056cf7f  e80ceeffff           call 0x56bd90
// 0056cf84  68c0d27f00           push 0x7fd2c0
// 0056cf89  e821481300           call 0x6a17af
// 0056cf8e  83c404               add esp, 4
// 0056cf91  8b0c24               mov ecx, dword ptr [esp]
// 0056cf94  b8344c9700           mov eax, 0x974c34
// 0056cf99  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cfa0  83c40c               add esp, 0xc
// 0056cfa3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@VColor3@G3D@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp

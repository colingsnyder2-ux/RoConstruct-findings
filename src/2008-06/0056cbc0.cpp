// roc 2008-06 0056cbc0  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056cbc0
//
// 0056cbc0  64a100000000         mov eax, dword ptr fs:[0]
// 0056cbc6  6aff                 push -1
// 0056cbc8  683efd7c00           push 0x7cfd3e
// 0056cbcd  50                   push eax
// 0056cbce  b801000000           mov eax, 1
// 0056cbd3  64892500000000       mov dword ptr fs:[0], esp
// 0056cbda  8405a44b9700         test byte ptr [0x974ba4], al
// 0056cbe0  752f                 jne 0x56cc11
// 0056cbe2  0905a44b9700         or dword ptr [0x974ba4], eax
// 0056cbe8  68d0be9200           push 0x92bed0
// 0056cbed  68f40d8200           push 0x820df4
// 0056cbf2  b9944b9700           mov ecx, 0x974b94
// 0056cbf7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056cbff  e88cf1ffff           call 0x56bd90
// 0056cc04  6840d27f00           push 0x7fd240
// 0056cc09  e8a14b1300           call 0x6a17af
// 0056cc0e  83c404               add esp, 4
// 0056cc11  8b0c24               mov ecx, dword ptr [esp]
// 0056cc14  b8944b9700           mov eax, 0x974b94
// 0056cc19  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cc20  83c40c               add esp, 0xc
// 0056cc23  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@H@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp

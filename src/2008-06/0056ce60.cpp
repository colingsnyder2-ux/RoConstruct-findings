// roc 2008-06 0056ce60  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056ce60
//
// 0056ce60  64a100000000         mov eax, dword ptr fs:[0]
// 0056ce66  6aff                 push -1
// 0056ce68  68fefd7c00           push 0x7cfdfe
// 0056ce6d  50                   push eax
// 0056ce6e  b801000000           mov eax, 1
// 0056ce73  64892500000000       mov dword ptr fs:[0], esp
// 0056ce7a  84051c4c9700         test byte ptr [0x974c1c], al
// 0056ce80  752f                 jne 0x56ceb1
// 0056ce82  09051c4c9700         or dword ptr [0x974c1c], eax
// 0056ce88  6864639400           push 0x946364
// 0056ce8d  68c0f68200           push 0x82f6c0
// 0056ce92  b90c4c9700           mov ecx, 0x974c0c
// 0056ce97  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056ce9f  e8eceeffff           call 0x56bd90
// 0056cea4  68a0d27f00           push 0x7fd2a0
// 0056cea9  e801491300           call 0x6a17af
// 0056ceae  83c404               add esp, 4
// 0056ceb1  8b0c24               mov ecx, dword ptr [esp]
// 0056ceb4  b80c4c9700           mov eax, 0x974c0c
// 0056ceb9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cec0  83c40c               add esp, 0xc
// 0056cec3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@VVector3@G3D@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp

// roc 2008-06 007f4bc0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4bc0
//
// 007f4bc0  53                   push ebx
// 007f4bc1  55                   push ebp
// 007f4bc2  56                   push esi
// 007f4bc3  57                   push edi
// 007f4bc4  6a04                 push 4
// 007f4bc6  83ec0c               sub esp, 0xc
// 007f4bc9  8bc4                 mov eax, esp
// 007f4bcb  b920dd5900           mov ecx, 0x59dd20
// 007f4bd0  8908                 mov dword ptr [eax], ecx
// 007f4bd2  33d2                 xor edx, edx
// 007f4bd4  895004               mov dword ptr [eax + 4], edx
// 007f4bd7  83ec0c               sub esp, 0xc
// 007f4bda  33f6                 xor esi, esi
// 007f4bdc  897008               mov dword ptr [eax + 8], esi
// 007f4bdf  8bc4                 mov eax, esp
// 007f4be1  bf108d5900           mov edi, 0x598d10
// 007f4be6  8938                 mov dword ptr [eax], edi
// 007f4be8  6844d98200           push 0x82d944
// 007f4bed  33db                 xor ebx, ebx
// 007f4bef  33ed                 xor ebp, ebp
// 007f4bf1  895804               mov dword ptr [eax + 4], ebx
// 007f4bf4  68ec318300           push 0x8331ec
// 007f4bf9  b9c85f9700           mov ecx, 0x975fc8
// 007f4bfe  896808               mov dword ptr [eax + 8], ebp
// 007f4c01  e86a80daff           call 0x59cc70
// 007f4c06  6830dd7f00           push 0x7fdd30
// 007f4c0b  e89fcbeaff           call 0x6a17af
// 007f4c10  83c404               add esp, 4
// 007f4c13  5f                   pop edi
// 007f4c14  5e                   pop esi
// 007f4c15  5d                   pop ebp
// 007f4c16  5b                   pop ebx
// 007f4c17  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Dragging@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp

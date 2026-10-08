// roc 2008-06 007f3d70  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3d70
//
// 007f3d70  53                   push ebx
// 007f3d71  55                   push ebp
// 007f3d72  56                   push esi
// 007f3d73  57                   push edi
// 007f3d74  6a04                 push 4
// 007f3d76  83ec0c               sub esp, 0xc
// 007f3d79  8bc4                 mov eax, esp
// 007f3d7b  b9c0345800           mov ecx, 0x5834c0
// 007f3d80  8908                 mov dword ptr [eax], ecx
// 007f3d82  33d2                 xor edx, edx
// 007f3d84  895004               mov dword ptr [eax + 4], edx
// 007f3d87  83ec0c               sub esp, 0xc
// 007f3d8a  33f6                 xor esi, esi
// 007f3d8c  897008               mov dword ptr [eax + 8], esi
// 007f3d8f  8bc4                 mov eax, esp
// 007f3d91  bfb0345800           mov edi, 0x5834b0
// 007f3d96  8938                 mov dword ptr [eax], edi
// 007f3d98  6890248200           push 0x822490
// 007f3d9d  33db                 xor ebx, ebx
// 007f3d9f  33ed                 xor ebp, ebp
// 007f3da1  895804               mov dword ptr [eax + 4], ebx
// 007f3da4  6800108300           push 0x831000
// 007f3da9  b954549700           mov ecx, 0x975454
// 007f3dae  896808               mov dword ptr [eax + 8], ebp
// 007f3db1  e8ba13d9ff           call 0x585170
// 007f3db6  6890d77f00           push 0x7fd790
// 007f3dbb  e8efd9eaff           call 0x6a17af
// 007f3dc0  83c404               add esp, 4
// 007f3dc3  5f                   pop edi
// 007f3dc4  5e                   pop esi
// 007f3dc5  5d                   pop ebp
// 007f3dc6  5b                   pop ebx
// 007f3dc7  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Edesc_ModelInPrimary@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp

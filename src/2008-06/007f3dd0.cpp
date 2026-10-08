// roc 2008-06 007f3dd0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3dd0
//
// 007f3dd0  53                   push ebx
// 007f3dd1  55                   push ebp
// 007f3dd2  56                   push esi
// 007f3dd3  57                   push edi
// 007f3dd4  6a05                 push 5
// 007f3dd6  83ec0c               sub esp, 0xc
// 007f3dd9  8bc4                 mov eax, esp
// 007f3ddb  b9305b5800           mov ecx, 0x585b30
// 007f3de0  8908                 mov dword ptr [eax], ecx
// 007f3de2  33d2                 xor edx, edx
// 007f3de4  895004               mov dword ptr [eax + 4], edx
// 007f3de7  83ec0c               sub esp, 0xc
// 007f3dea  33f6                 xor esi, esi
// 007f3dec  897008               mov dword ptr [eax + 8], esi
// 007f3def  8bc4                 mov eax, esp
// 007f3df1  bf00415800           mov edi, 0x584100
// 007f3df6  8938                 mov dword ptr [eax], edi
// 007f3df8  6890248200           push 0x822490
// 007f3dfd  33db                 xor ebx, ebx
// 007f3dff  33ed                 xor ebp, ebp
// 007f3e01  895804               mov dword ptr [eax + 4], ebx
// 007f3e04  6810108300           push 0x831010
// 007f3e09  b934549700           mov ecx, 0x975434
// 007f3e0e  896808               mov dword ptr [eax + 8], ebp
// 007f3e11  e82a14d9ff           call 0x585240
// 007f3e16  6870d77f00           push 0x7fd770
// 007f3e1b  e88fd9eaff           call 0x6a17af
// 007f3e20  83c404               add esp, 4
// 007f3e23  5f                   pop edi
// 007f3e24  5e                   pop esi
// 007f3e25  5d                   pop ebp
// 007f3e26  5b                   pop ebx
// 007f3e27  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__EprimaryPartProp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp

// roc 2007-03 00775260  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00775260
//
// 00775260  53                   push ebx
// 00775261  55                   push ebp
// 00775262  56                   push esi
// 00775263  57                   push edi
// 00775264  6a01                 push 1
// 00775266  83ec0c               sub esp, 0xc
// 00775269  8bc4                 mov eax, esp
// 0077526b  b9a0225d00           mov ecx, 0x5d22a0
// 00775270  8908                 mov dword ptr [eax], ecx
// 00775272  33d2                 xor edx, edx
// 00775274  895004               mov dword ptr [eax + 4], edx
// 00775277  83ec0c               sub esp, 0xc
// 0077527a  33f6                 xor esi, esi
// 0077527c  897008               mov dword ptr [eax + 8], esi
// 0077527f  8bc4                 mov eax, esp
// 00775281  bf30fd5c00           mov edi, 0x5cfd30
// 00775286  8938                 mov dword ptr [eax], edi
// 00775288  6814bf7a00           push 0x7abf14
// 0077528d  33db                 xor ebx, ebx
// 0077528f  33ed                 xor ebp, ebp
// 00775291  895804               mov dword ptr [eax + 4], ebx
// 00775294  6864bd7b00           push 0x7bbd64
// 00775299  b9d4008c00           mov ecx, 0x8c00d4
// 0077529e  896808               mov dword ptr [eax + 8], ebp
// 007752a1  e8bacae5ff           call 0x5d1d60
// 007752a6  68a0b57700           push 0x77b5a0
// 007752ab  e8039feaff           call 0x61f1b3
// 007752b0  83c404               add esp, 4
// 007752b3  5f                   pop edi
// 007752b4  5e                   pop esi
// 007752b5  5d                   pop ebp
// 007752b6  5b                   pop ebx
// 007752b7  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripUp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp

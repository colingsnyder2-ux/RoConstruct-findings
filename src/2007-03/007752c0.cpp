// roc 2007-03 007752c0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007752c0
//
// 007752c0  53                   push ebx
// 007752c1  55                   push ebp
// 007752c2  56                   push esi
// 007752c3  57                   push edi
// 007752c4  6a01                 push 1
// 007752c6  83ec0c               sub esp, 0xc
// 007752c9  8bc4                 mov eax, esp
// 007752cb  b910245d00           mov ecx, 0x5d2410
// 007752d0  8908                 mov dword ptr [eax], ecx
// 007752d2  33d2                 xor edx, edx
// 007752d4  895004               mov dword ptr [eax + 4], edx
// 007752d7  83ec0c               sub esp, 0xc
// 007752da  33f6                 xor esi, esi
// 007752dc  897008               mov dword ptr [eax + 8], esi
// 007752df  8bc4                 mov eax, esp
// 007752e1  bf50fd5c00           mov edi, 0x5cfd50
// 007752e6  8938                 mov dword ptr [eax], edi
// 007752e8  6814bf7a00           push 0x7abf14
// 007752ed  33db                 xor ebx, ebx
// 007752ef  33ed                 xor ebp, ebp
// 007752f1  895804               mov dword ptr [eax + 4], ebx
// 007752f4  686cbd7b00           push 0x7bbd6c
// 007752f9  b978008c00           mov ecx, 0x8c0078
// 007752fe  896808               mov dword ptr [eax + 8], ebp
// 00775301  e85acae5ff           call 0x5d1d60
// 00775306  68c0b57700           push 0x77b5c0
// 0077530b  e8a39eeaff           call 0x61f1b3
// 00775310  83c404               add esp, 4
// 00775313  5f                   pop edi
// 00775314  5e                   pop esi
// 00775315  5d                   pop ebp
// 00775316  5b                   pop ebx
// 00775317  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripRight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp

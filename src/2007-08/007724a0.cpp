// roc 2007-08 007724a0  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007724a0
//
// 007724a0  53                   push ebx
// 007724a1  55                   push ebp
// 007724a2  56                   push esi
// 007724a3  57                   push edi
// 007724a4  6a05                 push 5
// 007724a6  83ec0c               sub esp, 0xc
// 007724a9  8bc4                 mov eax, esp
// 007724ab  b970865700           mov ecx, 0x578670
// 007724b0  8908                 mov dword ptr [eax], ecx
// 007724b2  33d2                 xor edx, edx
// 007724b4  895004               mov dword ptr [eax + 4], edx
// 007724b7  83ec0c               sub esp, 0xc
// 007724ba  33f6                 xor esi, esi
// 007724bc  897008               mov dword ptr [eax + 8], esi
// 007724bf  8bc4                 mov eax, esp
// 007724c1  bfb0405700           mov edi, 0x5740b0
// 007724c6  8938                 mov dword ptr [eax], edi
// 007724c8  33db                 xor ebx, ebx
// 007724ca  895804               mov dword ptr [eax + 4], ebx
// 007724cd  33ed                 xor ebp, ebp
// 007724cf  896808               mov dword ptr [eax + 8], ebp
// 007724d2  a128048a00           mov eax, dword ptr [0x8a0428]
// 007724d7  50                   push eax
// 007724d8  68a0b07a00           push 0x7ab0a0
// 007724dd  b9a0278c00           mov ecx, 0x8c27a0
// 007724e2  e85951e0ff           call 0x577640
// 007724e7  68d0a17700           push 0x77a1d0
// 007724ec  e832e8ebff           call 0x630d23
// 007724f1  83c404               add esp, 4
// 007724f4  5f                   pop edi
// 007724f5  5e                   pop esi
// 007724f6  5d                   pop ebp
// 007724f7  5b                   pop ebx
// 007724f8  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Elasticity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp

// roc 2008-06 007f49f0  unit: seg_007f0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f49f0
//
// 007f49f0  53                   push ebx
// 007f49f1  55                   push ebp
// 007f49f2  56                   push esi
// 007f49f3  57                   push edi
// 007f49f4  6a01                 push 1
// 007f49f6  83ec0c               sub esp, 0xc
// 007f49f9  8bc4                 mov eax, esp
// 007f49fb  b9a0df5900           mov ecx, 0x59dfa0
// 007f4a00  8908                 mov dword ptr [eax], ecx
// 007f4a02  33d2                 xor edx, edx
// 007f4a04  895004               mov dword ptr [eax + 4], edx
// 007f4a07  83ec0c               sub esp, 0xc
// 007f4a0a  33f6                 xor esi, esi
// 007f4a0c  897008               mov dword ptr [eax + 8], esi
// 007f4a0f  8bc4                 mov eax, esp
// 007f4a11  bfd08b5900           mov edi, 0x598bd0
// 007f4a16  8938                 mov dword ptr [eax], edi
// 007f4a18  33db                 xor ebx, ebx
// 007f4a1a  895804               mov dword ptr [eax + 4], ebx
// 007f4a1d  33ed                 xor ebp, ebp
// 007f4a1f  896808               mov dword ptr [eax + 8], ebp
// 007f4a22  a148a29400           mov eax, dword ptr [0x94a248]
// 007f4a27  50                   push eax
// 007f4a28  68b0318300           push 0x8331b0
// 007f4a2d  b9e8609700           mov ecx, 0x9760e8
// 007f4a32  e85989daff           call 0x59d390
// 007f4a37  68d0dc7f00           push 0x7fdcd0
// 007f4a3c  e86ecdeaff           call 0x6a17af
// 007f4a41  83c404               add esp, 4
// 007f4a44  5f                   pop edi
// 007f4a45  5e                   pop esi
// 007f4a46  5d                   pop ebp
// 007f4a47  5b                   pop ebx
// 007f4a48  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_formFactorUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp

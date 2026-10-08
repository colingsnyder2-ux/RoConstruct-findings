// roc 2007-08 007750c0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007750c0
//
// 007750c0  53                   push ebx
// 007750c1  55                   push ebp
// 007750c2  56                   push esi
// 007750c3  57                   push edi
// 007750c4  6a05                 push 5
// 007750c6  83ec0c               sub esp, 0xc
// 007750c9  8bc4                 mov eax, esp
// 007750cb  b900705e00           mov ecx, 0x5e7000
// 007750d0  8908                 mov dword ptr [eax], ecx
// 007750d2  33d2                 xor edx, edx
// 007750d4  895004               mov dword ptr [eax + 4], edx
// 007750d7  83ec0c               sub esp, 0xc
// 007750da  33f6                 xor esi, esi
// 007750dc  897008               mov dword ptr [eax + 8], esi
// 007750df  8bc4                 mov eax, esp
// 007750e1  bf20615e00           mov edi, 0x5e6120
// 007750e6  8938                 mov dword ptr [eax], edi
// 007750e8  6898b67900           push 0x79b698
// 007750ed  33db                 xor ebx, ebx
// 007750ef  33ed                 xor ebp, ebp
// 007750f1  895804               mov dword ptr [eax + 4], ebx
// 007750f4  68f0b67900           push 0x79b6f0
// 007750f9  b9346f8c00           mov ecx, 0x8c6f34
// 007750fe  896808               mov dword ptr [eax + 8], ebp
// 00775101  e81a1fe7ff           call 0x5e7020
// 00775106  6810bf7700           push 0x77bf10
// 0077510b  e813bcebff           call 0x630d23
// 00775110  83c404               add esp, 4
// 00775113  5f                   pop edi
// 00775114  5e                   pop esi
// 00775115  5d                   pop ebp
// 00775116  5b                   pop ebx
// 00775117  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??__Eprop_Color@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp

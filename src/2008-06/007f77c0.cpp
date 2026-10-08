// roc 2008-06 007f77c0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f77c0
//
// 007f77c0  53                   push ebx
// 007f77c1  55                   push ebp
// 007f77c2  56                   push esi
// 007f77c3  57                   push edi
// 007f77c4  6a01                 push 1
// 007f77c6  83ec0c               sub esp, 0xc
// 007f77c9  8bc4                 mov eax, esp
// 007f77cb  b940ff5f00           mov ecx, 0x5fff40
// 007f77d0  8908                 mov dword ptr [eax], ecx
// 007f77d2  33d2                 xor edx, edx
// 007f77d4  895004               mov dword ptr [eax + 4], edx
// 007f77d7  83ec0c               sub esp, 0xc
// 007f77da  33f6                 xor esi, esi
// 007f77dc  897008               mov dword ptr [eax + 8], esi
// 007f77df  8bc4                 mov eax, esp
// 007f77e1  bfa0d55f00           mov edi, 0x5fd5a0
// 007f77e6  8938                 mov dword ptr [eax], edi
// 007f77e8  68ac298300           push 0x8329ac
// 007f77ed  33db                 xor ebx, ebx
// 007f77ef  33ed                 xor ebp, ebp
// 007f77f1  895804               mov dword ptr [eax + 4], ebx
// 007f77f4  68541e8400           push 0x841e54
// 007f77f9  b93cb79700           mov ecx, 0x97b73c
// 007f77fe  896808               mov dword ptr [eax + 8], ebp
// 007f7801  e82a71e0ff           call 0x5fe930
// 007f7806  6860ff7f00           push 0x7fff60
// 007f780b  e89f9feaff           call 0x6a17af
// 007f7810  83c404               add esp, 4
// 007f7813  5f                   pop edi
// 007f7814  5e                   pop esi
// 007f7815  5d                   pop ebp
// 007f7816  5b                   pop ebx
// 007f7817  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripRight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp

// from server: 100% by colin
// roc 2008-06 007f6330  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6330
//
// 007f6330  53                   push ebx
// 007f6331  55                   push ebp
// 007f6332  56                   push esi
// 007f6333  57                   push edi
// 007f6334  6a01                 push 1
// 007f6336  83ec0c               sub esp, 0xc
// 007f6339  8bc4                 mov eax, esp
// 007f633b  b980c45d00           mov ecx, 0x5dc480
// 007f6340  8908                 mov dword ptr [eax], ecx
// 007f6342  bab4feffff           mov edx, 0xfffffeb4
// 007f6347  895004               mov dword ptr [eax + 4], edx
// 007f634a  83ec0c               sub esp, 0xc
// 007f634d  33f6                 xor esi, esi
// 007f634f  897008               mov dword ptr [eax + 8], esi
// 007f6352  8bc4                 mov eax, esp
// 007f6354  bf108c5d00           mov edi, 0x5d8c10
// 007f6359  8bda                 mov ebx, edx
// 007f635b  8938                 mov dword ptr [eax], edi
// 007f635d  6890248200           push 0x822490
// 007f6362  33ed                 xor ebp, ebp
// 007f6364  895804               mov dword ptr [eax + 4], ebx
// 007f6367  6808d88300           push 0x83d808
// 007f636c  b9b0a39700           mov ecx, 0x97a3b0
// 007f6371  896808               mov dword ptr [eax + 8], ebp
// 007f6374  e86741deff           call 0x5da4e0
// 007f6379  68e0f27f00           push 0x7ff2e0
// 007f637e  e82cb4eaff           call 0x6a17af
// 007f6383  83c404               add esp, 4
// 007f6386  5f                   pop edi
// 007f6387  5e                   pop esi
// 007f6388  5d                   pop ebp
// 007f6389  5b                   pop ebx
// 007f638a  c3                   ret 

// from server: 98% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_d25716957c544124.cpp

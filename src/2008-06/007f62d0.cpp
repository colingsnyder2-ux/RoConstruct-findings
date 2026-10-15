// from server: 100% by colin
// roc 2008-06 007f62d0  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f62d0
//
// 007f62d0  53                   push ebx
// 007f62d1  55                   push ebp
// 007f62d2  56                   push esi
// 007f62d3  57                   push edi
// 007f62d4  6a01                 push 1
// 007f62d6  83ec0c               sub esp, 0xc
// 007f62d9  8bc4                 mov eax, esp
// 007f62db  b900c65d00           mov ecx, 0x5dc600
// 007f62e0  8908                 mov dword ptr [eax], ecx
// 007f62e2  bab4feffff           mov edx, 0xfffffeb4
// 007f62e7  895004               mov dword ptr [eax + 4], edx
// 007f62ea  83ec0c               sub esp, 0xc
// 007f62ed  33f6                 xor esi, esi
// 007f62ef  897008               mov dword ptr [eax + 8], esi
// 007f62f2  8bc4                 mov eax, esp
// 007f62f4  bf108b5d00           mov edi, 0x5d8b10
// 007f62f9  8bda                 mov ebx, edx
// 007f62fb  8938                 mov dword ptr [eax], edi
// 007f62fd  6890248200           push 0x822490
// 007f6302  33ed                 xor ebp, ebp
// 007f6304  895804               mov dword ptr [eax + 4], ebx
// 007f6307  681c2a8300           push 0x832a1c
// 007f630c  b938a59700           mov ecx, 0x97a538
// 007f6311  896808               mov dword ptr [eax + 8], ebp
// 007f6314  e8c741deff           call 0x5da4e0
// 007f6319  6800f37f00           push 0x7ff300
// 007f631e  e88cb4eaff           call 0x6a17af
// 007f6323  83c404               add esp, 4
// 007f6326  5f                   pop edi
// 007f6327  5e                   pop esi
// 007f6328  5d                   pop ebp
// 007f6329  5b                   pop ebx
// 007f632a  c3                   ret 

// from server: 98% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_d25716957c544124.cpp

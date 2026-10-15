// roc 2008-06 007f6510  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6510
//
// 007f6510  53                   push ebx
// 007f6511  55                   push ebp
// 007f6512  56                   push esi
// 007f6513  57                   push edi
// 007f6514  6a04                 push 4
// 007f6516  83ec0c               sub esp, 0xc
// 007f6519  8bc4                 mov eax, esp
// 007f651b  b990c05d00           mov ecx, 0x5dc090
// 007f6520  8908                 mov dword ptr [eax], ecx
// 007f6522  bab4feffff           mov edx, 0xfffffeb4
// 007f6527  895004               mov dword ptr [eax + 4], edx
// 007f652a  83ec0c               sub esp, 0xc
// 007f652d  33f6                 xor esi, esi
// 007f652f  897008               mov dword ptr [eax + 8], esi
// 007f6532  8bc4                 mov eax, esp
// 007f6534  bf00755d00           mov edi, 0x5d7500
// 007f6539  8bda                 mov ebx, edx
// 007f653b  8938                 mov dword ptr [eax], edi
// 007f653d  6828d88300           push 0x83d828
// 007f6542  33ed                 xor ebp, ebp
// 007f6544  895804               mov dword ptr [eax + 4], ebx
// 007f6547  684cd88300           push 0x83d84c
// 007f654c  b9d8a29700           mov ecx, 0x97a2d8
// 007f6551  896808               mov dword ptr [eax + 8], ebp
// 007f6554  e88742deff           call 0x5da7e0
// 007f6559  68e0f37f00           push 0x7ff3e0
// 007f655e  e84cb2eaff           call 0x6a17af
// 007f6563  83c404               add esp, 4
// 007f6566  5f                   pop edi
// 007f6567  5e                   pop esi
// 007f6568  5d                   pop ebp
// 007f6569  5b                   pop ebx
// 007f656a  c3                   ret 
// library rbxgs/roc_unit_4349f38f33416276.cpp (function ??__EpropWalkRotationalVelocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4349f38f33416276.cpp

// roc 2008-06 007f65d0  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f65d0
//
// 007f65d0  53                   push ebx
// 007f65d1  55                   push ebp
// 007f65d2  56                   push esi
// 007f65d3  57                   push edi
// 007f65d4  6a04                 push 4
// 007f65d6  83ec0c               sub esp, 0xc
// 007f65d9  8bc4                 mov eax, esp
// 007f65db  b9f0c25d00           mov ecx, 0x5dc2f0
// 007f65e0  8908                 mov dword ptr [eax], ecx
// 007f65e2  bab4feffff           mov edx, 0xfffffeb4
// 007f65e7  895004               mov dword ptr [eax + 4], edx
// 007f65ea  83ec0c               sub esp, 0xc
// 007f65ed  33f6                 xor esi, esi
// 007f65ef  897008               mov dword ptr [eax + 8], esi
// 007f65f2  8bc4                 mov eax, esp
// 007f65f4  bf50755d00           mov edi, 0x5d7550
// 007f65f9  8bda                 mov ebx, edx
// 007f65fb  8938                 mov dword ptr [eax], edi
// 007f65fd  6828d88300           push 0x83d828
// 007f6602  33ed                 xor ebp, ebp
// 007f6604  895804               mov dword ptr [eax + 4], ebx
// 007f6607  686cd88300           push 0x83d86c
// 007f660c  b9b0a49700           mov ecx, 0x97a4b0
// 007f6611  896808               mov dword ptr [eax + 8], ebp
// 007f6614  e82740deff           call 0x5da640
// 007f6619  68a0f37f00           push 0x7ff3a0
// 007f661e  e88cb1eaff           call 0x6a17af
// 007f6623  83c404               add esp, 4
// 007f6626  5f                   pop edi
// 007f6627  5e                   pop esi
// 007f6628  5d                   pop ebp
// 007f6629  5b                   pop ebx
// 007f662a  c3                   ret 
// library rbxgs/roc_unit_4349f38f33416276.cpp (function ??__EpropTargetPoint@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4349f38f33416276.cpp

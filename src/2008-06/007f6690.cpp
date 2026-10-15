// from server: 100% by colin
// roc 2008-06 007f6690  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6690
//
// 007f6690  53                   push ebx
// 007f6691  55                   push ebp
// 007f6692  56                   push esi
// 007f6693  57                   push edi
// 007f6694  6a04                 push 4
// 007f6696  83ec0c               sub esp, 0xc
// 007f6699  8bc4                 mov eax, esp
// 007f669b  b930c25d00           mov ecx, 0x5dc230
// 007f66a0  8908                 mov dword ptr [eax], ecx
// 007f66a2  bab4feffff           mov edx, 0xfffffeb4
// 007f66a7  895004               mov dword ptr [eax + 4], edx
// 007f66aa  83ec0c               sub esp, 0xc
// 007f66ad  33f6                 xor esi, esi
// 007f66af  897008               mov dword ptr [eax + 8], esi
// 007f66b2  8bc4                 mov eax, esp
// 007f66b4  bf40755d00           mov edi, 0x5d7540
// 007f66b9  8bda                 mov ebx, edx
// 007f66bb  8938                 mov dword ptr [eax], edi
// 007f66bd  6828d88300           push 0x83d828
// 007f66c2  33ed                 xor ebp, ebp
// 007f66c4  895804               mov dword ptr [eax + 4], ebx
// 007f66c7  687cd88300           push 0x83d87c
// 007f66cc  b9c0a59700           mov ecx, 0x97a5c0
// 007f66d1  896808               mov dword ptr [eax + 8], ebp
// 007f66d4  e8d741deff           call 0x5da8b0
// 007f66d9  6840f37f00           push 0x7ff340
// 007f66de  e8ccb0eaff           call 0x6a17af
// 007f66e3  83c404               add esp, 4
// 007f66e6  5f                   pop edi
// 007f66e7  5e                   pop esi
// 007f66e8  5d                   pop ebp
// 007f66e9  5b                   pop ebx
// 007f66ea  c3                   ret 

// from server: 99% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_da4cac2552115496.cpp

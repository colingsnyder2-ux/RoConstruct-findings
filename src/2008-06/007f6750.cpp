// from server: 100% by colin
// roc 2008-06 007f6750  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6750
//
// 007f6750  53                   push ebx
// 007f6751  55                   push ebp
// 007f6752  56                   push esi
// 007f6753  57                   push edi
// 007f6754  6a05                 push 5
// 007f6756  83ec0c               sub esp, 0xc
// 007f6759  8bc4                 mov eax, esp
// 007f675b  b910bf5d00           mov ecx, 0x5dbf10
// 007f6760  8908                 mov dword ptr [eax], ecx
// 007f6762  bab4feffff           mov edx, 0xfffffeb4
// 007f6767  895004               mov dword ptr [eax + 4], edx
// 007f676a  83ec0c               sub esp, 0xc
// 007f676d  33f6                 xor esi, esi
// 007f676f  897008               mov dword ptr [eax + 8], esi
// 007f6772  8bc4                 mov eax, esp
// 007f6774  bfc0745d00           mov edi, 0x5d74c0
// 007f6779  8bda                 mov ebx, edx
// 007f677b  8938                 mov dword ptr [eax], edi
// 007f677d  688cd88300           push 0x83d88c
// 007f6782  33ed                 xor ebp, ebp
// 007f6784  895804               mov dword ptr [eax + 4], ebx
// 007f6787  6894d88300           push 0x83d894
// 007f678c  b9d0a39700           mov ecx, 0x97a3d0
// 007f6791  896808               mov dword ptr [eax + 8], ebp
// 007f6794  e8e741deff           call 0x5da980
// 007f6799  6860f37f00           push 0x7ff360
// 007f679e  e80cb0eaff           call 0x6a17af
// 007f67a3  83c404               add esp, 4
// 007f67a6  5f                   pop edi
// 007f67a7  5e                   pop esi
// 007f67a8  5d                   pop ebp
// 007f67a9  5b                   pop ebx
// 007f67aa  c3                   ret 

// from server: 99% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_da4cac2552115496.cpp

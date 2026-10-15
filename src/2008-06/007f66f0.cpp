// from server: 100% by colin
// roc 2008-06 007f66f0  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f66f0
//
// 007f66f0  53                   push ebx
// 007f66f1  55                   push ebp
// 007f66f2  56                   push esi
// 007f66f3  57                   push edi
// 007f66f4  6a05                 push 5
// 007f66f6  83ec0c               sub esp, 0xc
// 007f66f9  8bc4                 mov eax, esp
// 007f66fb  b970be5d00           mov ecx, 0x5dbe70
// 007f6700  8908                 mov dword ptr [eax], ecx
// 007f6702  bab4feffff           mov edx, 0xfffffeb4
// 007f6707  895004               mov dword ptr [eax + 4], edx
// 007f670a  83ec0c               sub esp, 0xc
// 007f670d  33f6                 xor esi, esi
// 007f670f  897008               mov dword ptr [eax + 8], esi
// 007f6712  8bc4                 mov eax, esp
// 007f6714  bfb0745d00           mov edi, 0x5d74b0
// 007f6719  8bda                 mov ebx, edx
// 007f671b  8938                 mov dword ptr [eax], edi
// 007f671d  688cd88300           push 0x83d88c
// 007f6722  33ed                 xor ebp, ebp
// 007f6724  895804               mov dword ptr [eax + 4], ebx
// 007f6727  6884d88300           push 0x83d884
// 007f672c  b960a49700           mov ecx, 0x97a460
// 007f6731  896808               mov dword ptr [eax + 8], ebp
// 007f6734  e84742deff           call 0x5da980
// 007f6739  6880f37f00           push 0x7ff380
// 007f673e  e86cb0eaff           call 0x6a17af
// 007f6743  83c404               add esp, 4
// 007f6746  5f                   pop edi
// 007f6747  5e                   pop esi
// 007f6748  5d                   pop ebp
// 007f6749  5b                   pop ebx
// 007f674a  c3                   ret 

// from server: 99% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_da4cac2552115496.cpp

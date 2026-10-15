// roc 2008-06 007f6630  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6630
//
// 007f6630  53                   push ebx
// 007f6631  55                   push ebp
// 007f6632  56                   push esi
// 007f6633  57                   push edi
// 007f6634  6a04                 push 4
// 007f6636  83ec0c               sub esp, 0xc
// 007f6639  8bc4                 mov eax, esp
// 007f663b  b9b0c25d00           mov ecx, 0x5dc2b0
// 007f6640  8908                 mov dword ptr [eax], ecx
// 007f6642  bab4feffff           mov edx, 0xfffffeb4
// 007f6647  895004               mov dword ptr [eax + 4], edx
// 007f664a  83ec0c               sub esp, 0xc
// 007f664d  33f6                 xor esi, esi
// 007f664f  897008               mov dword ptr [eax + 8], esi
// 007f6652  8bc4                 mov eax, esp
// 007f6654  bf30755d00           mov edi, 0x5d7530
// 007f6659  8bda                 mov ebx, edx
// 007f665b  8938                 mov dword ptr [eax], edi
// 007f665d  6828d88300           push 0x83d828
// 007f6662  33ed                 xor ebp, ebp
// 007f6664  895804               mov dword ptr [eax + 4], ebx
// 007f6667  6878d88300           push 0x83d878
// 007f666c  b9eca39700           mov ecx, 0x97a3ec
// 007f6671  896808               mov dword ptr [eax + 8], ebp
// 007f6674  e83742deff           call 0x5da8b0
// 007f6679  6820f37f00           push 0x7ff320
// 007f667e  e82cb1eaff           call 0x6a17af
// 007f6683  83c404               add esp, 4
// 007f6686  5f                   pop edi
// 007f6687  5e                   pop esi
// 007f6688  5d                   pop ebp
// 007f6689  5b                   pop ebx
// 007f668a  c3                   ret 
// library rbxgs/roc_unit_4349f38f33416276.cpp (function ??__EpropSit@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4349f38f33416276.cpp

// roc 2008-06 007f6450  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6450
//
// 007f6450  53                   push ebx
// 007f6451  55                   push ebp
// 007f6452  56                   push esi
// 007f6453  57                   push edi
// 007f6454  6a04                 push 4
// 007f6456  83ec0c               sub esp, 0xc
// 007f6459  8bc4                 mov eax, esp
// 007f645b  b9c0c05d00           mov ecx, 0x5dc0c0
// 007f6460  8908                 mov dword ptr [eax], ecx
// 007f6462  bab4feffff           mov edx, 0xfffffeb4
// 007f6467  895004               mov dword ptr [eax + 4], edx
// 007f646a  83ec0c               sub esp, 0xc
// 007f646d  33f6                 xor esi, esi
// 007f646f  897008               mov dword ptr [eax + 8], esi
// 007f6472  8bc4                 mov eax, esp
// 007f6474  bf10755d00           mov edi, 0x5d7510
// 007f6479  8bda                 mov ebx, edx
// 007f647b  8938                 mov dword ptr [eax], edi
// 007f647d  6828d88300           push 0x83d828
// 007f6482  33ed                 xor ebp, ebp
// 007f6484  895804               mov dword ptr [eax + 4], ebx
// 007f6487  6830d88300           push 0x83d830
// 007f648c  b9cca49700           mov ecx, 0x97a4cc
// 007f6491  896808               mov dword ptr [eax + 8], ebp
// 007f6494  e8a741deff           call 0x5da640
// 007f6499  6820f47f00           push 0x7ff420
// 007f649e  e80cb3eaff           call 0x6a17af
// 007f64a3  83c404               add esp, 4
// 007f64a6  5f                   pop edi
// 007f64a7  5e                   pop esi
// 007f64a8  5d                   pop ebp
// 007f64a9  5b                   pop ebx
// 007f64aa  c3                   ret 
// library rbxgs/roc_unit_4349f38f33416276.cpp (function ??__EpropWalkToPoint@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4349f38f33416276.cpp

// roc 2008-06 007f64b0  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f64b0
//
// 007f64b0  53                   push ebx
// 007f64b1  55                   push ebp
// 007f64b2  56                   push esi
// 007f64b3  57                   push edi
// 007f64b4  6a04                 push 4
// 007f64b6  83ec0c               sub esp, 0xc
// 007f64b9  8bc4                 mov eax, esp
// 007f64bb  b980bf5d00           mov ecx, 0x5dbf80
// 007f64c0  8908                 mov dword ptr [eax], ecx
// 007f64c2  bab4feffff           mov edx, 0xfffffeb4
// 007f64c7  895004               mov dword ptr [eax + 4], edx
// 007f64ca  83ec0c               sub esp, 0xc
// 007f64cd  33f6                 xor esi, esi
// 007f64cf  897008               mov dword ptr [eax + 8], esi
// 007f64d2  8bc4                 mov eax, esp
// 007f64d4  bfd0745d00           mov edi, 0x5d74d0
// 007f64d9  8bda                 mov ebx, edx
// 007f64db  8938                 mov dword ptr [eax], edi
// 007f64dd  6828d88300           push 0x83d828
// 007f64e2  33ed                 xor ebp, ebp
// 007f64e4  895804               mov dword ptr [eax + 4], ebx
// 007f64e7  683cd88300           push 0x83d83c
// 007f64ec  b9e8a49700           mov ecx, 0x97a4e8
// 007f64f1  896808               mov dword ptr [eax + 8], ebp
// 007f64f4  e81742deff           call 0x5da710
// 007f64f9  6800f47f00           push 0x7ff400
// 007f64fe  e8acb2eaff           call 0x6a17af
// 007f6503  83c404               add esp, 4
// 007f6506  5f                   pop edi
// 007f6507  5e                   pop esi
// 007f6508  5d                   pop ebp
// 007f6509  5b                   pop ebx
// 007f650a  c3                   ret 
// library rbxgs/roc_unit_4349f38f33416276.cpp (function ??__EpropWalkDirection@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4349f38f33416276.cpp

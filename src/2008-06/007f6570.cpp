// roc 2008-06 007f6570  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6570
//
// 007f6570  53                   push ebx
// 007f6571  55                   push ebp
// 007f6572  56                   push esi
// 007f6573  57                   push edi
// 007f6574  6a04                 push 4
// 007f6576  83ec0c               sub esp, 0xc
// 007f6579  8bc4                 mov eax, esp
// 007f657b  b970c25d00           mov ecx, 0x5dc270
// 007f6580  8908                 mov dword ptr [eax], ecx
// 007f6582  bab4feffff           mov edx, 0xfffffeb4
// 007f6587  895004               mov dword ptr [eax + 4], edx
// 007f658a  83ec0c               sub esp, 0xc
// 007f658d  33f6                 xor esi, esi
// 007f658f  897008               mov dword ptr [eax + 8], esi
// 007f6592  8bc4                 mov eax, esp
// 007f6594  bf20755d00           mov edi, 0x5d7520
// 007f6599  8bda                 mov ebx, edx
// 007f659b  8938                 mov dword ptr [eax], edi
// 007f659d  6828d88300           push 0x83d828
// 007f65a2  33ed                 xor ebp, ebp
// 007f65a4  895804               mov dword ptr [eax + 4], ebx
// 007f65a7  6864d88300           push 0x83d864
// 007f65ac  b96ca29700           mov ecx, 0x97a26c
// 007f65b1  896808               mov dword ptr [eax + 8], ebp
// 007f65b4  e8f742deff           call 0x5da8b0
// 007f65b9  68c0f37f00           push 0x7ff3c0
// 007f65be  e8ecb1eaff           call 0x6a17af
// 007f65c3  83c404               add esp, 4
// 007f65c6  5f                   pop edi
// 007f65c7  5e                   pop esi
// 007f65c8  5d                   pop ebp
// 007f65c9  5b                   pop ebx
// 007f65ca  c3                   ret 
// library rbxgs/roc_unit_4349f38f33416276.cpp (function ??__EpropJump@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4349f38f33416276.cpp

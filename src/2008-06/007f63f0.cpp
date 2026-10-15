// roc 2008-06 007f63f0  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f63f0
//
// 007f63f0  53                   push ebx
// 007f63f1  55                   push ebp
// 007f63f2  56                   push esi
// 007f63f3  57                   push edi
// 007f63f4  6a04                 push 4
// 007f63f6  83ec0c               sub esp, 0xc
// 007f63f9  8bc4                 mov eax, esp
// 007f63fb  b950c15d00           mov ecx, 0x5dc150
// 007f6400  8908                 mov dword ptr [eax], ecx
// 007f6402  bab4feffff           mov edx, 0xfffffeb4
// 007f6407  895004               mov dword ptr [eax + 4], edx
// 007f640a  83ec0c               sub esp, 0xc
// 007f640d  33f6                 xor esi, esi
// 007f640f  897008               mov dword ptr [eax + 8], esi
// 007f6412  8bc4                 mov eax, esp
// 007f6414  bf80795d00           mov edi, 0x5d7980
// 007f6419  8bda                 mov ebx, edx
// 007f641b  8938                 mov dword ptr [eax], edi
// 007f641d  6828d88300           push 0x83d828
// 007f6422  33ed                 xor ebp, ebp
// 007f6424  895804               mov dword ptr [eax + 4], ebx
// 007f6427  681cd88300           push 0x83d81c
// 007f642c  b928a39700           mov ecx, 0x97a328
// 007f6431  896808               mov dword ptr [eax + 8], ebp
// 007f6434  e8a740deff           call 0x5da4e0
// 007f6439  68c0f27f00           push 0x7ff2c0
// 007f643e  e86cb3eaff           call 0x6a17af
// 007f6443  83c404               add esp, 4
// 007f6446  5f                   pop edi
// 007f6447  5e                   pop esi
// 007f6448  5d                   pop ebp
// 007f6449  5b                   pop ebx
// 007f644a  c3                   ret 
// library rbxgs/roc_unit_4349f38f33416276.cpp (function ??__EpropWalkToPart@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4349f38f33416276.cpp

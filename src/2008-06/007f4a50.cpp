// roc 2008-06 007f4a50  unit: seg_007f0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4a50
//
// 007f4a50  53                   push ebx
// 007f4a51  55                   push ebp
// 007f4a52  56                   push esi
// 007f4a53  57                   push edi
// 007f4a54  6a04                 push 4
// 007f4a56  83ec0c               sub esp, 0xc
// 007f4a59  8bc4                 mov eax, esp
// 007f4a5b  b970df5900           mov ecx, 0x59df70
// 007f4a60  8908                 mov dword ptr [eax], ecx
// 007f4a62  33d2                 xor edx, edx
// 007f4a64  895004               mov dword ptr [eax + 4], edx
// 007f4a67  83ec0c               sub esp, 0xc
// 007f4a6a  33f6                 xor esi, esi
// 007f4a6c  897008               mov dword ptr [eax + 8], esi
// 007f4a6f  8bc4                 mov eax, esp
// 007f4a71  bfd08b5900           mov edi, 0x598bd0
// 007f4a76  8938                 mov dword ptr [eax], edi
// 007f4a78  33db                 xor ebx, ebx
// 007f4a7a  895804               mov dword ptr [eax + 4], ebx
// 007f4a7d  33ed                 xor ebp, ebp
// 007f4a7f  896808               mov dword ptr [eax + 8], ebp
// 007f4a82  a148a29400           mov eax, dword ptr [0x94a248]
// 007f4a87  50                   push eax
// 007f4a88  68f02d8300           push 0x832df0
// 007f4a8d  b9ec629700           mov ecx, 0x9762ec
// 007f4a92  e8f988daff           call 0x59d390
// 007f4a97  68b0dc7f00           push 0x7fdcb0
// 007f4a9c  e80ecdeaff           call 0x6a17af
// 007f4aa1  83c404               add esp, 4
// 007f4aa4  5f                   pop edi
// 007f4aa5  5e                   pop esi
// 007f4aa6  5d                   pop ebp
// 007f4aa7  5b                   pop ebx
// 007f4aa8  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_formFactor@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp

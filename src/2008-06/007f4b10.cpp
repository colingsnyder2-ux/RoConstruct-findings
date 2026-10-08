// roc 2008-06 007f4b10  unit: seg_007f0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4b10
//
// 007f4b10  53                   push ebx
// 007f4b11  55                   push ebp
// 007f4b12  56                   push esi
// 007f4b13  57                   push edi
// 007f4b14  6a05                 push 5
// 007f4b16  83ec0c               sub esp, 0xc
// 007f4b19  8bc4                 mov eax, esp
// 007f4b1b  b990e05900           mov ecx, 0x59e090
// 007f4b20  8908                 mov dword ptr [eax], ecx
// 007f4b22  33d2                 xor edx, edx
// 007f4b24  895004               mov dword ptr [eax + 4], edx
// 007f4b27  83ec0c               sub esp, 0xc
// 007f4b2a  33f6                 xor esi, esi
// 007f4b2c  897008               mov dword ptr [eax + 8], esi
// 007f4b2f  8bc4                 mov eax, esp
// 007f4b31  bf508d5900           mov edi, 0x598d50
// 007f4b36  8938                 mov dword ptr [eax], edi
// 007f4b38  33db                 xor ebx, ebx
// 007f4b3a  895804               mov dword ptr [eax + 4], ebx
// 007f4b3d  33ed                 xor ebp, ebp
// 007f4b3f  896808               mov dword ptr [eax + 8], ebp
// 007f4b42  a148a29400           mov eax, dword ptr [0x94a248]
// 007f4b47  50                   push eax
// 007f4b48  68c8318300           push 0x8331c8
// 007f4b4d  b9b8619700           mov ecx, 0x9761b8
// 007f4b52  e84980daff           call 0x59cba0
// 007f4b57  6810dd7f00           push 0x7fdd10
// 007f4b5c  e84ecceaff           call 0x6a17af
// 007f4b61  83c404               add esp, 4
// 007f4b64  5f                   pop edi
// 007f4b65  5e                   pop esi
// 007f4b66  5d                   pop ebp
// 007f4b67  5b                   pop ebx
// 007f4b68  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Friction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp

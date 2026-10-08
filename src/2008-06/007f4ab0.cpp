// roc 2008-06 007f4ab0  unit: seg_007f0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4ab0
//
// 007f4ab0  53                   push ebx
// 007f4ab1  55                   push ebp
// 007f4ab2  56                   push esi
// 007f4ab3  57                   push edi
// 007f4ab4  6a05                 push 5
// 007f4ab6  83ec0c               sub esp, 0xc
// 007f4ab9  8bc4                 mov eax, esp
// 007f4abb  b9f0e05900           mov ecx, 0x59e0f0
// 007f4ac0  8908                 mov dword ptr [eax], ecx
// 007f4ac2  33d2                 xor edx, edx
// 007f4ac4  895004               mov dword ptr [eax + 4], edx
// 007f4ac7  83ec0c               sub esp, 0xc
// 007f4aca  33f6                 xor esi, esi
// 007f4acc  897008               mov dword ptr [eax + 8], esi
// 007f4acf  8bc4                 mov eax, esp
// 007f4ad1  bf608d5900           mov edi, 0x598d60
// 007f4ad6  8938                 mov dword ptr [eax], edi
// 007f4ad8  33db                 xor ebx, ebx
// 007f4ada  895804               mov dword ptr [eax + 4], ebx
// 007f4add  33ed                 xor ebp, ebp
// 007f4adf  896808               mov dword ptr [eax + 8], ebp
// 007f4ae2  a148a29400           mov eax, dword ptr [0x94a248]
// 007f4ae7  50                   push eax
// 007f4ae8  68bc318300           push 0x8331bc
// 007f4aed  b9905f9700           mov ecx, 0x975f90
// 007f4af2  e8a980daff           call 0x59cba0
// 007f4af7  68f0dc7f00           push 0x7fdcf0
// 007f4afc  e8aecceaff           call 0x6a17af
// 007f4b01  83c404               add esp, 4
// 007f4b04  5f                   pop edi
// 007f4b05  5e                   pop esi
// 007f4b06  5d                   pop ebp
// 007f4b07  5b                   pop ebx
// 007f4b08  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Elasticity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp

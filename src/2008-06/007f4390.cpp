// roc 2008-06 007f4390  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4390
//
// 007f4390  53                   push ebx
// 007f4391  55                   push ebp
// 007f4392  56                   push esi
// 007f4393  57                   push edi
// 007f4394  6a01                 push 1
// 007f4396  83ec0c               sub esp, 0xc
// 007f4399  8bc4                 mov eax, esp
// 007f439b  b950d95900           mov ecx, 0x59d950
// 007f43a0  8908                 mov dword ptr [eax], ecx
// 007f43a2  33d2                 xor edx, edx
// 007f43a4  895004               mov dword ptr [eax + 4], edx
// 007f43a7  83ec0c               sub esp, 0xc
// 007f43aa  33f6                 xor esi, esi
// 007f43ac  897008               mov dword ptr [eax + 8], esi
// 007f43af  8bc4                 mov eax, esp
// 007f43b1  bf30985900           mov edi, 0x599830
// 007f43b6  8938                 mov dword ptr [eax], edi
// 007f43b8  6890248200           push 0x822490
// 007f43bd  33db                 xor ebx, ebx
// 007f43bf  33ed                 xor ebp, ebp
// 007f43c1  895804               mov dword ptr [eax + 4], ebx
// 007f43c4  681c318300           push 0x83311c
// 007f43c9  b9ac5f9700           mov ecx, 0x975fac
// 007f43ce  896808               mov dword ptr [eax + 8], ebp
// 007f43d1  e85a85daff           call 0x59c930
// 007f43d6  6870dd7f00           push 0x7fdd70
// 007f43db  e8cfd3eaff           call 0x6a17af
// 007f43e0  83c404               add esp, 4
// 007f43e3  5f                   pop edi
// 007f43e4  5e                   pop esi
// 007f43e5  5d                   pop ebp
// 007f43e6  5b                   pop ebx
// 007f43e7  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_PositionUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp

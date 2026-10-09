// roc 2009-06 005eb280  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb280
//
// 005eb280  64a100000000         mov eax, dword ptr fs:[0]
// 005eb286  6aff                 push -1
// 005eb288  683e508600           push 0x86503e
// 005eb28d  50                   push eax
// 005eb28e  b801000000           mov eax, 1
// 005eb293  64892500000000       mov dword ptr fs:[0], esp
// 005eb29a  84055865a400         test byte ptr [0xa46558], al
// 005eb2a0  7530                 jne 0x5eb2d2
// 005eb2a2  09055865a400         or dword ptr [0xa46558], eax
// 005eb2a8  68a04b8e00           push 0x8e4ba0
// 005eb2ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb2b5  e896fdffff           call 0x5eb050
// 005eb2ba  50                   push eax
// 005eb2bb  b99864a400           mov ecx, 0xa46498
// 005eb2c0  e81be50000           call 0x5f97e0
// 005eb2c5  68c0878900           push 0x8987c0
// 005eb2ca  e82ce81200           call 0x719afb
// 005eb2cf  83c404               add esp, 4
// 005eb2d2  8b0c24               mov ecx, dword ptr [esp]
// 005eb2d5  b89864a400           mov eax, 0xa46498
// 005eb2da  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb2e1  83c40c               add esp, 0xc
// 005eb2e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

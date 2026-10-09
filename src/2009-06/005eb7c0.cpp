// roc 2009-06 005eb7c0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb7c0
//
// 005eb7c0  64a100000000         mov eax, dword ptr fs:[0]
// 005eb7c6  6aff                 push -1
// 005eb7c8  68be518600           push 0x8651be
// 005eb7cd  50                   push eax
// 005eb7ce  b801000000           mov eax, 1
// 005eb7d3  64892500000000       mov dword ptr fs:[0], esp
// 005eb7da  8405b86ea400         test byte ptr [0xa46eb8], al
// 005eb7e0  7530                 jne 0x5eb812
// 005eb7e2  0905b86ea400         or dword ptr [0xa46eb8], eax
// 005eb7e8  6838898e00           push 0x8e8938
// 005eb7ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb7f5  e8f6ece1ff           call 0x40a4f0
// 005eb7fa  50                   push eax
// 005eb7fb  b9f86da400           mov ecx, 0xa46df8
// 005eb800  e8dbdf0000           call 0x5f97e0
// 005eb805  6800878900           push 0x898700
// 005eb80a  e8ece21200           call 0x719afb
// 005eb80f  83c404               add esp, 4
// 005eb812  8b0c24               mov ecx, dword ptr [esp]
// 005eb815  b8f86da400           mov eax, 0xa46df8
// 005eb81a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb821  83c40c               add esp, 0xc
// 005eb824  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

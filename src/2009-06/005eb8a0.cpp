// roc 2009-06 005eb8a0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb8a0
//
// 005eb8a0  64a100000000         mov eax, dword ptr fs:[0]
// 005eb8a6  6aff                 push -1
// 005eb8a8  68fe518600           push 0x8651fe
// 005eb8ad  50                   push eax
// 005eb8ae  b801000000           mov eax, 1
// 005eb8b3  64892500000000       mov dword ptr fs:[0], esp
// 005eb8ba  84054870a400         test byte ptr [0xa47048], al
// 005eb8c0  7530                 jne 0x5eb8f2
// 005eb8c2  09054870a400         or dword ptr [0xa47048], eax
// 005eb8c8  68b0f48d00           push 0x8df4b0
// 005eb8cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb8d5  e816ece1ff           call 0x40a4f0
// 005eb8da  50                   push eax
// 005eb8db  b9886fa400           mov ecx, 0xa46f88
// 005eb8e0  e8fbde0000           call 0x5f97e0
// 005eb8e5  68e0868900           push 0x8986e0
// 005eb8ea  e80ce21200           call 0x719afb
// 005eb8ef  83c404               add esp, 4
// 005eb8f2  8b0c24               mov ecx, dword ptr [esp]
// 005eb8f5  b8886fa400           mov eax, 0xa46f88
// 005eb8fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb901  83c40c               add esp, 0xc
// 005eb904  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

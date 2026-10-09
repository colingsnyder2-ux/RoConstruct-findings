// roc 2009-06 005ea3a0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea3a0
//
// 005ea3a0  64a100000000         mov eax, dword ptr fs:[0]
// 005ea3a6  6aff                 push -1
// 005ea3a8  68fe4b8600           push 0x864bfe
// 005ea3ad  50                   push eax
// 005ea3ae  b801000000           mov eax, 1
// 005ea3b3  64892500000000       mov dword ptr fs:[0], esp
// 005ea3ba  8405c84aa400         test byte ptr [0xa44ac8], al
// 005ea3c0  7530                 jne 0x5ea3f2
// 005ea3c2  0905c84aa400         or dword ptr [0xa44ac8], eax
// 005ea3c8  68e0b88d00           push 0x8db8e0
// 005ea3cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea3d5  e81601e2ff           call 0x40a4f0
// 005ea3da  50                   push eax
// 005ea3db  b9084aa400           mov ecx, 0xa44a08
// 005ea3e0  e8fbf30000           call 0x5f97e0
// 005ea3e5  68e0898900           push 0x8989e0
// 005ea3ea  e80cf71200           call 0x719afb
// 005ea3ef  83c404               add esp, 4
// 005ea3f2  8b0c24               mov ecx, dword ptr [esp]
// 005ea3f5  b8084aa400           mov eax, 0xa44a08
// 005ea3fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea401  83c40c               add esp, 0xc
// 005ea404  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

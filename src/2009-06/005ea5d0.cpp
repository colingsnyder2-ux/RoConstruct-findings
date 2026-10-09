// roc 2009-06 005ea5d0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea5d0
//
// 005ea5d0  64a100000000         mov eax, dword ptr fs:[0]
// 005ea5d6  6aff                 push -1
// 005ea5d8  689e4c8600           push 0x864c9e
// 005ea5dd  50                   push eax
// 005ea5de  b801000000           mov eax, 1
// 005ea5e3  64892500000000       mov dword ptr fs:[0], esp
// 005ea5ea  8405b04ea400         test byte ptr [0xa44eb0], al
// 005ea5f0  7530                 jne 0x5ea622
// 005ea5f2  0905b04ea400         or dword ptr [0xa44eb0], eax
// 005ea5f8  68489a8d00           push 0x8d9a48
// 005ea5fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea605  e8e6fee1ff           call 0x40a4f0
// 005ea60a  50                   push eax
// 005ea60b  b9f04da400           mov ecx, 0xa44df0
// 005ea610  e8cbf10000           call 0x5f97e0
// 005ea615  6890898900           push 0x898990
// 005ea61a  e8dcf41200           call 0x719afb
// 005ea61f  83c404               add esp, 4
// 005ea622  8b0c24               mov ecx, dword ptr [esp]
// 005ea625  b8f04da400           mov eax, 0xa44df0
// 005ea62a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea631  83c40c               add esp, 0xc
// 005ea634  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2009-06 005ea790  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea790
//
// 005ea790  64a100000000         mov eax, dword ptr fs:[0]
// 005ea796  6aff                 push -1
// 005ea798  681e4d8600           push 0x864d1e
// 005ea79d  50                   push eax
// 005ea79e  b801000000           mov eax, 1
// 005ea7a3  64892500000000       mov dword ptr fs:[0], esp
// 005ea7aa  8405d051a400         test byte ptr [0xa451d0], al
// 005ea7b0  7530                 jne 0x5ea7e2
// 005ea7b2  0905d051a400         or dword ptr [0xa451d0], eax
// 005ea7b8  68a0378e00           push 0x8e37a0
// 005ea7bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea7c5  e826fde1ff           call 0x40a4f0
// 005ea7ca  50                   push eax
// 005ea7cb  b91051a400           mov ecx, 0xa45110
// 005ea7d0  e80bf00000           call 0x5f97e0
// 005ea7d5  6850898900           push 0x898950
// 005ea7da  e81cf31200           call 0x719afb
// 005ea7df  83c404               add esp, 4
// 005ea7e2  8b0c24               mov ecx, dword ptr [esp]
// 005ea7e5  b81051a400           mov eax, 0xa45110
// 005ea7ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea7f1  83c40c               add esp, 0xc
// 005ea7f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

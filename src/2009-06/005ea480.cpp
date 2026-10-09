// roc 2009-06 005ea480  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea480
//
// 005ea480  64a100000000         mov eax, dword ptr fs:[0]
// 005ea486  6aff                 push -1
// 005ea488  683e4c8600           push 0x864c3e
// 005ea48d  50                   push eax
// 005ea48e  b801000000           mov eax, 1
// 005ea493  64892500000000       mov dword ptr fs:[0], esp
// 005ea49a  8405584ca400         test byte ptr [0xa44c58], al
// 005ea4a0  7530                 jne 0x5ea4d2
// 005ea4a2  0905584ca400         or dword ptr [0xa44c58], eax
// 005ea4a8  68209a8d00           push 0x8d9a20
// 005ea4ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea4b5  e83600e2ff           call 0x40a4f0
// 005ea4ba  50                   push eax
// 005ea4bb  b9984ba400           mov ecx, 0xa44b98
// 005ea4c0  e81bf30000           call 0x5f97e0
// 005ea4c5  68c0898900           push 0x8989c0
// 005ea4ca  e82cf61200           call 0x719afb
// 005ea4cf  83c404               add esp, 4
// 005ea4d2  8b0c24               mov ecx, dword ptr [esp]
// 005ea4d5  b8984ba400           mov eax, 0xa44b98
// 005ea4da  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea4e1  83c40c               add esp, 0xc
// 005ea4e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

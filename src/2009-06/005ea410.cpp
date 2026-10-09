// roc 2009-06 005ea410  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea410
//
// 005ea410  64a100000000         mov eax, dword ptr fs:[0]
// 005ea416  6aff                 push -1
// 005ea418  681e4c8600           push 0x864c1e
// 005ea41d  50                   push eax
// 005ea41e  b801000000           mov eax, 1
// 005ea423  64892500000000       mov dword ptr fs:[0], esp
// 005ea42a  8405904ba400         test byte ptr [0xa44b90], al
// 005ea430  7530                 jne 0x5ea462
// 005ea432  0905904ba400         or dword ptr [0xa44b90], eax
// 005ea438  68f0b88d00           push 0x8db8f0
// 005ea43d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea445  e856ffffff           call 0x5ea3a0
// 005ea44a  50                   push eax
// 005ea44b  b9d04aa400           mov ecx, 0xa44ad0
// 005ea450  e88bf30000           call 0x5f97e0
// 005ea455  68d0898900           push 0x8989d0
// 005ea45a  e89cf61200           call 0x719afb
// 005ea45f  83c404               add esp, 4
// 005ea462  8b0c24               mov ecx, dword ptr [esp]
// 005ea465  b8d04aa400           mov eax, 0xa44ad0
// 005ea46a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea471  83c40c               add esp, 0xc
// 005ea474  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

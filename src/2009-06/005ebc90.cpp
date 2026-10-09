// roc 2009-06 005ebc90  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebc90
//
// 005ebc90  64a100000000         mov eax, dword ptr fs:[0]
// 005ebc96  6aff                 push -1
// 005ebc98  681e538600           push 0x86531e
// 005ebc9d  50                   push eax
// 005ebc9e  b801000000           mov eax, 1
// 005ebca3  64892500000000       mov dword ptr fs:[0], esp
// 005ebcaa  84055077a400         test byte ptr [0xa47750], al
// 005ebcb0  7530                 jne 0x5ebce2
// 005ebcb2  09055077a400         or dword ptr [0xa47750], eax
// 005ebcb8  686084a100           push 0xa18460
// 005ebcbd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebcc5  e826e8e1ff           call 0x40a4f0
// 005ebcca  50                   push eax
// 005ebccb  b99076a400           mov ecx, 0xa47690
// 005ebcd0  e80bdb0000           call 0x5f97e0
// 005ebcd5  6850868900           push 0x898650
// 005ebcda  e81cde1200           call 0x719afb
// 005ebcdf  83c404               add esp, 4
// 005ebce2  8b0c24               mov ecx, dword ptr [esp]
// 005ebce5  b89076a400           mov eax, 0xa47690
// 005ebcea  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebcf1  83c40c               add esp, 0xc
// 005ebcf4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2009-06 005eaf00  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eaf00
//
// 005eaf00  64a100000000         mov eax, dword ptr fs:[0]
// 005eaf06  6aff                 push -1
// 005eaf08  683e4f8600           push 0x864f3e
// 005eaf0d  50                   push eax
// 005eaf0e  b801000000           mov eax, 1
// 005eaf13  64892500000000       mov dword ptr fs:[0], esp
// 005eaf1a  8405185fa400         test byte ptr [0xa45f18], al
// 005eaf20  7530                 jne 0x5eaf52
// 005eaf22  0905185fa400         or dword ptr [0xa45f18], eax
// 005eaf28  68b8f18d00           push 0x8df1b8
// 005eaf2d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eaf35  e8b6f5e1ff           call 0x40a4f0
// 005eaf3a  50                   push eax
// 005eaf3b  b9585ea400           mov ecx, 0xa45e58
// 005eaf40  e89be80000           call 0x5f97e0
// 005eaf45  6840888900           push 0x898840
// 005eaf4a  e8aceb1200           call 0x719afb
// 005eaf4f  83c404               add esp, 4
// 005eaf52  8b0c24               mov ecx, dword ptr [esp]
// 005eaf55  b8585ea400           mov eax, 0xa45e58
// 005eaf5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eaf61  83c40c               add esp, 0xc
// 005eaf64  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

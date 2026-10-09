// roc 2009-06 005ebb40  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebb40
//
// 005ebb40  64a100000000         mov eax, dword ptr fs:[0]
// 005ebb46  6aff                 push -1
// 005ebb48  68be528600           push 0x8652be
// 005ebb4d  50                   push eax
// 005ebb4e  b801000000           mov eax, 1
// 005ebb53  64892500000000       mov dword ptr fs:[0], esp
// 005ebb5a  8405f874a400         test byte ptr [0xa474f8], al
// 005ebb60  7530                 jne 0x5ebb92
// 005ebb62  0905f874a400         or dword ptr [0xa474f8], eax
// 005ebb68  68d8cea100           push 0xa1ced8
// 005ebb6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebb75  e876e9e1ff           call 0x40a4f0
// 005ebb7a  50                   push eax
// 005ebb7b  b93874a400           mov ecx, 0xa47438
// 005ebb80  e85bdc0000           call 0x5f97e0
// 005ebb85  6880868900           push 0x898680
// 005ebb8a  e86cdf1200           call 0x719afb
// 005ebb8f  83c404               add esp, 4
// 005ebb92  8b0c24               mov ecx, dword ptr [esp]
// 005ebb95  b83874a400           mov eax, 0xa47438
// 005ebb9a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebba1  83c40c               add esp, 0xc
// 005ebba4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

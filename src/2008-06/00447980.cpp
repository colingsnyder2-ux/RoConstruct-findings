// roc 2008-06 00447980  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447980
//
// 00447980  64a100000000         mov eax, dword ptr fs:[0]
// 00447986  6aff                 push -1
// 00447988  686e0e7c00           push 0x7c0e6e
// 0044798d  50                   push eax
// 0044798e  b801000000           mov eax, 1
// 00447993  64892500000000       mov dword ptr fs:[0], esp
// 0044799a  8405f0d59600         test byte ptr [0x96d5f0], al
// 004479a0  7530                 jne 0x4479d2
// 004479a2  0905f0d59600         or dword ptr [0x96d5f0], eax
// 004479a8  68d45b8100           push 0x815bd4
// 004479ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004479b5  e8c633fcff           call 0x40ad80
// 004479ba  50                   push eax
// 004479bb  b930d59600           mov ecx, 0x96d530
// 004479c0  e82b8f1200           call 0x5708f0
// 004479c5  6870ad7f00           push 0x7fad70
// 004479ca  e8e09d2500           call 0x6a17af
// 004479cf  83c404               add esp, 4
// 004479d2  8b0c24               mov ecx, dword ptr [esp]
// 004479d5  b830d59600           mov eax, 0x96d530
// 004479da  64890d00000000       mov dword ptr fs:[0], ecx
// 004479e1  83c40c               add esp, 0xc
// 004479e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

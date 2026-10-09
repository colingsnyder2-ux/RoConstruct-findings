// roc 2009-06 005eaaa0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eaaa0
//
// 005eaaa0  64a100000000         mov eax, dword ptr fs:[0]
// 005eaaa6  6aff                 push -1
// 005eaaa8  68fe4d8600           push 0x864dfe
// 005eaaad  50                   push eax
// 005eaaae  b801000000           mov eax, 1
// 005eaab3  64892500000000       mov dword ptr fs:[0], esp
// 005eaaba  84054857a400         test byte ptr [0xa45748], al
// 005eaac0  7530                 jne 0x5eaaf2
// 005eaac2  09054857a400         or dword ptr [0xa45748], eax
// 005eaac8  68cc3d8e00           push 0x8e3dcc
// 005eaacd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eaad5  e816fae1ff           call 0x40a4f0
// 005eaada  50                   push eax
// 005eaadb  b98856a400           mov ecx, 0xa45688
// 005eaae0  e8fbec0000           call 0x5f97e0
// 005eaae5  68e0888900           push 0x8988e0
// 005eaaea  e80cf01200           call 0x719afb
// 005eaaef  83c404               add esp, 4
// 005eaaf2  8b0c24               mov ecx, dword ptr [esp]
// 005eaaf5  b88856a400           mov eax, 0xa45688
// 005eaafa  64890d00000000       mov dword ptr fs:[0], ecx
// 005eab01  83c40c               add esp, 0xc
// 005eab04  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

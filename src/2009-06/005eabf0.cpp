// roc 2009-06 005eabf0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eabf0
//
// 005eabf0  64a100000000         mov eax, dword ptr fs:[0]
// 005eabf6  6aff                 push -1
// 005eabf8  685e4e8600           push 0x864e5e
// 005eabfd  50                   push eax
// 005eabfe  b801000000           mov eax, 1
// 005eac03  64892500000000       mov dword ptr fs:[0], esp
// 005eac0a  8405a059a400         test byte ptr [0xa459a0], al
// 005eac10  7530                 jne 0x5eac42
// 005eac12  0905a059a400         or dword ptr [0xa459a0], eax
// 005eac18  6824e3a100           push 0xa1e324
// 005eac1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eac25  e8c6f8e1ff           call 0x40a4f0
// 005eac2a  50                   push eax
// 005eac2b  b9e058a400           mov ecx, 0xa458e0
// 005eac30  e8abeb0000           call 0x5f97e0
// 005eac35  68b0888900           push 0x8988b0
// 005eac3a  e8bcee1200           call 0x719afb
// 005eac3f  83c404               add esp, 4
// 005eac42  8b0c24               mov ecx, dword ptr [esp]
// 005eac45  b8e058a400           mov eax, 0xa458e0
// 005eac4a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eac51  83c40c               add esp, 0xc
// 005eac54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

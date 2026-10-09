// roc 2009-06 005ebec0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebec0
//
// 005ebec0  64a100000000         mov eax, dword ptr fs:[0]
// 005ebec6  6aff                 push -1
// 005ebec8  68be538600           push 0x8653be
// 005ebecd  50                   push eax
// 005ebece  b801000000           mov eax, 1
// 005ebed3  64892500000000       mov dword ptr fs:[0], esp
// 005ebeda  8405387ba400         test byte ptr [0xa47b38], al
// 005ebee0  7530                 jne 0x5ebf12
// 005ebee2  0905387ba400         or dword ptr [0xa47b38], eax
// 005ebee8  68c8478e00           push 0x8e47c8
// 005ebeed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebef5  e8f6e5e1ff           call 0x40a4f0
// 005ebefa  50                   push eax
// 005ebefb  b9787aa400           mov ecx, 0xa47a78
// 005ebf00  e8dbd80000           call 0x5f97e0
// 005ebf05  6800868900           push 0x898600
// 005ebf0a  e8ecdb1200           call 0x719afb
// 005ebf0f  83c404               add esp, 4
// 005ebf12  8b0c24               mov ecx, dword ptr [esp]
// 005ebf15  b8787aa400           mov eax, 0xa47a78
// 005ebf1a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebf21  83c40c               add esp, 0xc
// 005ebf24  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

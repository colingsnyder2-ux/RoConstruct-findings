// roc 2009-06 005ecc60  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ecc60
//
// 005ecc60  64a100000000         mov eax, dword ptr fs:[0]
// 005ecc66  6aff                 push -1
// 005ecc68  683e568600           push 0x86563e
// 005ecc6d  50                   push eax
// 005ecc6e  b801000000           mov eax, 1
// 005ecc73  64892500000000       mov dword ptr fs:[0], esp
// 005ecc7a  8405d88aa400         test byte ptr [0xa48ad8], al
// 005ecc80  7530                 jne 0x5eccb2
// 005ecc82  0905d88aa400         or dword ptr [0xa48ad8], eax
// 005ecc88  6864afa100           push 0xa1af64
// 005ecc8d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ecc95  e856d8e1ff           call 0x40a4f0
// 005ecc9a  50                   push eax
// 005ecc9b  b9188aa400           mov ecx, 0xa48a18
// 005ecca0  e83bcb0000           call 0x5f97e0
// 005ecca5  68c0848900           push 0x8984c0
// 005eccaa  e84cce1200           call 0x719afb
// 005eccaf  83c404               add esp, 4
// 005eccb2  8b0c24               mov ecx, dword ptr [esp]
// 005eccb5  b8188aa400           mov eax, 0xa48a18
// 005eccba  64890d00000000       mov dword ptr fs:[0], ecx
// 005eccc1  83c40c               add esp, 0xc
// 005eccc4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

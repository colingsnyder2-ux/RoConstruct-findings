// roc 2009-06 005ebf30  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebf30
//
// 005ebf30  64a100000000         mov eax, dword ptr fs:[0]
// 005ebf36  6aff                 push -1
// 005ebf38  68de538600           push 0x8653de
// 005ebf3d  50                   push eax
// 005ebf3e  b801000000           mov eax, 1
// 005ebf43  64892500000000       mov dword ptr fs:[0], esp
// 005ebf4a  8405007ca400         test byte ptr [0xa47c00], al
// 005ebf50  7530                 jne 0x5ebf82
// 005ebf52  0905007ca400         or dword ptr [0xa47c00], eax
// 005ebf58  68400aa200           push 0xa20a40
// 005ebf5d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebf65  e876e9ffff           call 0x5ea8e0
// 005ebf6a  50                   push eax
// 005ebf6b  b9407ba400           mov ecx, 0xa47b40
// 005ebf70  e86bd80000           call 0x5f97e0
// 005ebf75  68f0858900           push 0x8985f0
// 005ebf7a  e87cdb1200           call 0x719afb
// 005ebf7f  83c404               add esp, 4
// 005ebf82  8b0c24               mov ecx, dword ptr [esp]
// 005ebf85  b8407ba400           mov eax, 0xa47b40
// 005ebf8a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebf91  83c40c               add esp, 0xc
// 005ebf94  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

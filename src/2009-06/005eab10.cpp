// roc 2009-06 005eab10  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eab10
//
// 005eab10  64a100000000         mov eax, dword ptr fs:[0]
// 005eab16  6aff                 push -1
// 005eab18  681e4e8600           push 0x864e1e
// 005eab1d  50                   push eax
// 005eab1e  b801000000           mov eax, 1
// 005eab23  64892500000000       mov dword ptr fs:[0], esp
// 005eab2a  84051058a400         test byte ptr [0xa45810], al
// 005eab30  7530                 jne 0x5eab62
// 005eab32  09051058a400         or dword ptr [0xa45810], eax
// 005eab38  68c43d8e00           push 0x8e3dc4
// 005eab3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eab45  e8a6f9e1ff           call 0x40a4f0
// 005eab4a  50                   push eax
// 005eab4b  b95057a400           mov ecx, 0xa45750
// 005eab50  e88bec0000           call 0x5f97e0
// 005eab55  68d0888900           push 0x8988d0
// 005eab5a  e89cef1200           call 0x719afb
// 005eab5f  83c404               add esp, 4
// 005eab62  8b0c24               mov ecx, dword ptr [esp]
// 005eab65  b85057a400           mov eax, 0xa45750
// 005eab6a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eab71  83c40c               add esp, 0xc
// 005eab74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2009-06 005ea800  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea800
//
// 005ea800  64a100000000         mov eax, dword ptr fs:[0]
// 005ea806  6aff                 push -1
// 005ea808  683e4d8600           push 0x864d3e
// 005ea80d  50                   push eax
// 005ea80e  b801000000           mov eax, 1
// 005ea813  64892500000000       mov dword ptr fs:[0], esp
// 005ea81a  84059852a400         test byte ptr [0xa45298], al
// 005ea820  7530                 jne 0x5ea852
// 005ea822  09059852a400         or dword ptr [0xa45298], eax
// 005ea828  68e09b8e00           push 0x8e9be0
// 005ea82d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea835  e8b6fce1ff           call 0x40a4f0
// 005ea83a  50                   push eax
// 005ea83b  b9d851a400           mov ecx, 0xa451d8
// 005ea840  e89bef0000           call 0x5f97e0
// 005ea845  6840898900           push 0x898940
// 005ea84a  e8acf21200           call 0x719afb
// 005ea84f  83c404               add esp, 4
// 005ea852  8b0c24               mov ecx, dword ptr [esp]
// 005ea855  b8d851a400           mov eax, 0xa451d8
// 005ea85a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea861  83c40c               add esp, 0xc
// 005ea864  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

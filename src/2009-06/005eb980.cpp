// roc 2009-06 005eb980  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb980
//
// 005eb980  64a100000000         mov eax, dword ptr fs:[0]
// 005eb986  6aff                 push -1
// 005eb988  683e528600           push 0x86523e
// 005eb98d  50                   push eax
// 005eb98e  b801000000           mov eax, 1
// 005eb993  64892500000000       mov dword ptr fs:[0], esp
// 005eb99a  8405d871a400         test byte ptr [0xa471d8], al
// 005eb9a0  7530                 jne 0x5eb9d2
// 005eb9a2  0905d871a400         or dword ptr [0xa471d8], eax
// 005eb9a8  68e8cea100           push 0xa1cee8
// 005eb9ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb9b5  e836ebe1ff           call 0x40a4f0
// 005eb9ba  50                   push eax
// 005eb9bb  b91871a400           mov ecx, 0xa47118
// 005eb9c0  e81bde0000           call 0x5f97e0
// 005eb9c5  68c0868900           push 0x8986c0
// 005eb9ca  e82ce11200           call 0x719afb
// 005eb9cf  83c404               add esp, 4
// 005eb9d2  8b0c24               mov ecx, dword ptr [esp]
// 005eb9d5  b81871a400           mov eax, 0xa47118
// 005eb9da  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb9e1  83c40c               add esp, 0xc
// 005eb9e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

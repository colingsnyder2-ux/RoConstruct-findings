// roc 2008-06 005bf280  unit: RBX::VGameSettings::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf280
//
// 005bf280  64a100000000         mov eax, dword ptr fs:[0]
// 005bf286  6aff                 push -1
// 005bf288  68fe3f7d00           push 0x7d3ffe
// 005bf28d  50                   push eax
// 005bf28e  b801000000           mov eax, 1
// 005bf293  64892500000000       mov dword ptr fs:[0], esp
// 005bf29a  8405d8769700         test byte ptr [0x9776d8], al
// 005bf2a0  7530                 jne 0x5bf2d2
// 005bf2a2  0905d8769700         or dword ptr [0x9776d8], eax
// 005bf2a8  6878848300           push 0x838478
// 005bf2ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005bf2b5  e8c6bae4ff           call 0x40ad80
// 005bf2ba  50                   push eax
// 005bf2bb  b918769700           mov ecx, 0x977618
// 005bf2c0  e82b16fbff           call 0x5708f0
// 005bf2c5  6860e67f00           push 0x7fe660
// 005bf2ca  e8e0240e00           call 0x6a17af
// 005bf2cf  83c404               add esp, 4
// 005bf2d2  8b0c24               mov ecx, dword ptr [esp]
// 005bf2d5  b818769700           mov eax, 0x977618
// 005bf2da  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf2e1  83c40c               add esp, 0xc
// 005bf2e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

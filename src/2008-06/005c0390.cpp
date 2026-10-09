// roc 2008-06 005c0390  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0390
//
// 005c0390  64a100000000         mov eax, dword ptr fs:[0]
// 005c0396  6aff                 push -1
// 005c0398  688e437d00           push 0x7d438e
// 005c039d  50                   push eax
// 005c039e  b801000000           mov eax, 1
// 005c03a3  64892500000000       mov dword ptr fs:[0], esp
// 005c03aa  8405707e9700         test byte ptr [0x977e70], al
// 005c03b0  7530                 jne 0x5c03e2
// 005c03b2  0905707e9700         or dword ptr [0x977e70], eax
// 005c03b8  68185f8400           push 0x845f18
// 005c03bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c03c5  e8b6a9e4ff           call 0x40ad80
// 005c03ca  50                   push eax
// 005c03cb  b9b07d9700           mov ecx, 0x977db0
// 005c03d0  e81b05fbff           call 0x5708f0
// 005c03d5  6830e77f00           push 0x7fe730
// 005c03da  e8d0130e00           call 0x6a17af
// 005c03df  83c404               add esp, 4
// 005c03e2  8b0c24               mov ecx, dword ptr [esp]
// 005c03e5  b8b07d9700           mov eax, 0x977db0
// 005c03ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005c03f1  83c40c               add esp, 0xc
// 005c03f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

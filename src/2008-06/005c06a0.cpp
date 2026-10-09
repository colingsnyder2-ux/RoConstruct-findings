// roc 2008-06 005c06a0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c06a0
//
// 005c06a0  64a100000000         mov eax, dword ptr fs:[0]
// 005c06a6  6aff                 push -1
// 005c06a8  686e447d00           push 0x7d446e
// 005c06ad  50                   push eax
// 005c06ae  b801000000           mov eax, 1
// 005c06b3  64892500000000       mov dword ptr fs:[0], esp
// 005c06ba  8405e8839700         test byte ptr [0x9783e8], al
// 005c06c0  7530                 jne 0x5c06f2
// 005c06c2  0905e8839700         or dword ptr [0x9783e8], eax
// 005c06c8  68f0119600           push 0x9611f0
// 005c06cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c06d5  e8a6a6e4ff           call 0x40ad80
// 005c06da  50                   push eax
// 005c06db  b928839700           mov ecx, 0x978328
// 005c06e0  e80b02fbff           call 0x5708f0
// 005c06e5  68c0e67f00           push 0x7fe6c0
// 005c06ea  e8c0100e00           call 0x6a17af
// 005c06ef  83c404               add esp, 4
// 005c06f2  8b0c24               mov ecx, dword ptr [esp]
// 005c06f5  b828839700           mov eax, 0x978328
// 005c06fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0701  83c40c               add esp, 0xc
// 005c0704  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

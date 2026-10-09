// roc 2008-06 005c02b0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c02b0
//
// 005c02b0  64a100000000         mov eax, dword ptr fs:[0]
// 005c02b6  6aff                 push -1
// 005c02b8  684e437d00           push 0x7d434e
// 005c02bd  50                   push eax
// 005c02be  b801000000           mov eax, 1
// 005c02c3  64892500000000       mov dword ptr fs:[0], esp
// 005c02ca  8405e07c9700         test byte ptr [0x977ce0], al
// 005c02d0  7530                 jne 0x5c0302
// 005c02d2  0905e07c9700         or dword ptr [0x977ce0], eax
// 005c02d8  68c8b39500           push 0x95b3c8
// 005c02dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c02e5  e896aae4ff           call 0x40ad80
// 005c02ea  50                   push eax
// 005c02eb  b9207c9700           mov ecx, 0x977c20
// 005c02f0  e8fb05fbff           call 0x5708f0
// 005c02f5  6800e87f00           push 0x7fe800
// 005c02fa  e8b0140e00           call 0x6a17af
// 005c02ff  83c404               add esp, 4
// 005c0302  8b0c24               mov ecx, dword ptr [esp]
// 005c0305  b8207c9700           mov eax, 0x977c20
// 005c030a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0311  83c40c               add esp, 0xc
// 005c0314  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

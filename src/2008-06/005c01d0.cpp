// roc 2008-06 005c01d0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c01d0
//
// 005c01d0  64a100000000         mov eax, dword ptr fs:[0]
// 005c01d6  6aff                 push -1
// 005c01d8  680e437d00           push 0x7d430e
// 005c01dd  50                   push eax
// 005c01de  b801000000           mov eax, 1
// 005c01e3  64892500000000       mov dword ptr fs:[0], esp
// 005c01ea  8405507b9700         test byte ptr [0x977b50], al
// 005c01f0  7530                 jne 0x5c0222
// 005c01f2  0905507b9700         or dword ptr [0x977b50], eax
// 005c01f8  68a0c18300           push 0x83c1a0
// 005c01fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0205  e876abe4ff           call 0x40ad80
// 005c020a  50                   push eax
// 005c020b  b9907a9700           mov ecx, 0x977a90
// 005c0210  e8db06fbff           call 0x5708f0
// 005c0215  6820e87f00           push 0x7fe820
// 005c021a  e890150e00           call 0x6a17af
// 005c021f  83c404               add esp, 4
// 005c0222  8b0c24               mov ecx, dword ptr [esp]
// 005c0225  b8907a9700           mov eax, 0x977a90
// 005c022a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0231  83c40c               add esp, 0xc
// 005c0234  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

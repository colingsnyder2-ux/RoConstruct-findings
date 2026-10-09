// roc 2008-06 005c0240  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0240
//
// 005c0240  64a100000000         mov eax, dword ptr fs:[0]
// 005c0246  6aff                 push -1
// 005c0248  682e437d00           push 0x7d432e
// 005c024d  50                   push eax
// 005c024e  b801000000           mov eax, 1
// 005c0253  64892500000000       mov dword ptr fs:[0], esp
// 005c025a  8405187c9700         test byte ptr [0x977c18], al
// 005c0260  7530                 jne 0x5c0292
// 005c0262  0905187c9700         or dword ptr [0x977c18], eax
// 005c0268  68c4c18300           push 0x83c1c4
// 005c026d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0275  e806abe4ff           call 0x40ad80
// 005c027a  50                   push eax
// 005c027b  b9587b9700           mov ecx, 0x977b58
// 005c0280  e86b06fbff           call 0x5708f0
// 005c0285  6810e87f00           push 0x7fe810
// 005c028a  e820150e00           call 0x6a17af
// 005c028f  83c404               add esp, 4
// 005c0292  8b0c24               mov ecx, dword ptr [esp]
// 005c0295  b8587b9700           mov eax, 0x977b58
// 005c029a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c02a1  83c40c               add esp, 0xc
// 005c02a4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

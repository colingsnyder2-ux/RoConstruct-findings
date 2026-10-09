// roc 2008-06 005c0160  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0160
//
// 005c0160  64a100000000         mov eax, dword ptr fs:[0]
// 005c0166  6aff                 push -1
// 005c0168  68ee427d00           push 0x7d42ee
// 005c016d  50                   push eax
// 005c016e  b801000000           mov eax, 1
// 005c0173  64892500000000       mov dword ptr fs:[0], esp
// 005c017a  8405887a9700         test byte ptr [0x977a88], al
// 005c0180  7530                 jne 0x5c01b2
// 005c0182  0905887a9700         or dword ptr [0x977a88], eax
// 005c0188  6838b78300           push 0x83b738
// 005c018d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0195  e8e6abe4ff           call 0x40ad80
// 005c019a  50                   push eax
// 005c019b  b9c8799700           mov ecx, 0x9779c8
// 005c01a0  e84b07fbff           call 0x5708f0
// 005c01a5  6830e87f00           push 0x7fe830
// 005c01aa  e800160e00           call 0x6a17af
// 005c01af  83c404               add esp, 4
// 005c01b2  8b0c24               mov ecx, dword ptr [esp]
// 005c01b5  b8c8799700           mov eax, 0x9779c8
// 005c01ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005c01c1  83c40c               add esp, 0xc
// 005c01c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

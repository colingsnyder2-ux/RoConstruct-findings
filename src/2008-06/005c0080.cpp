// roc 2008-06 005c0080  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0080
//
// 005c0080  64a100000000         mov eax, dword ptr fs:[0]
// 005c0086  6aff                 push -1
// 005c0088  68ae427d00           push 0x7d42ae
// 005c008d  50                   push eax
// 005c008e  b801000000           mov eax, 1
// 005c0093  64892500000000       mov dword ptr fs:[0], esp
// 005c009a  8405f8789700         test byte ptr [0x9778f8], al
// 005c00a0  7530                 jne 0x5c00d2
// 005c00a2  0905f8789700         or dword ptr [0x9778f8], eax
// 005c00a8  684ca78300           push 0x83a74c
// 005c00ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c00b5  e8c6ace4ff           call 0x40ad80
// 005c00ba  50                   push eax
// 005c00bb  b938789700           mov ecx, 0x977838
// 005c00c0  e82b08fbff           call 0x5708f0
// 005c00c5  6850e87f00           push 0x7fe850
// 005c00ca  e8e0160e00           call 0x6a17af
// 005c00cf  83c404               add esp, 4
// 005c00d2  8b0c24               mov ecx, dword ptr [esp]
// 005c00d5  b838789700           mov eax, 0x977838
// 005c00da  64890d00000000       mov dword ptr fs:[0], ecx
// 005c00e1  83c40c               add esp, 0xc
// 005c00e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

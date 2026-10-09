// roc 2008-06 005c0780  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0780
//
// 005c0780  64a100000000         mov eax, dword ptr fs:[0]
// 005c0786  6aff                 push -1
// 005c0788  68ae447d00           push 0x7d44ae
// 005c078d  50                   push eax
// 005c078e  b801000000           mov eax, 1
// 005c0793  64892500000000       mov dword ptr fs:[0], esp
// 005c079a  840578859700         test byte ptr [0x978578], al
// 005c07a0  7530                 jne 0x5c07d2
// 005c07a2  090578859700         or dword ptr [0x978578], eax
// 005c07a8  681c189600           push 0x96181c
// 005c07ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c07b5  e8c6a5e4ff           call 0x40ad80
// 005c07ba  50                   push eax
// 005c07bb  b9b8849700           mov ecx, 0x9784b8
// 005c07c0  e82b01fbff           call 0x5708f0
// 005c07c5  6890e67f00           push 0x7fe690
// 005c07ca  e8e00f0e00           call 0x6a17af
// 005c07cf  83c404               add esp, 4
// 005c07d2  8b0c24               mov ecx, dword ptr [esp]
// 005c07d5  b8b8849700           mov eax, 0x9784b8
// 005c07da  64890d00000000       mov dword ptr fs:[0], ecx
// 005c07e1  83c40c               add esp, 0xc
// 005c07e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2008-06 005c0400  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0400
//
// 005c0400  64a100000000         mov eax, dword ptr fs:[0]
// 005c0406  6aff                 push -1
// 005c0408  68ae437d00           push 0x7d43ae
// 005c040d  50                   push eax
// 005c040e  b801000000           mov eax, 1
// 005c0413  64892500000000       mov dword ptr fs:[0], esp
// 005c041a  8405387f9700         test byte ptr [0x977f38], al
// 005c0420  7530                 jne 0x5c0452
// 005c0422  0905387f9700         or dword ptr [0x977f38], eax
// 005c0428  68a8c39500           push 0x95c3a8
// 005c042d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0435  e846a9e4ff           call 0x40ad80
// 005c043a  50                   push eax
// 005c043b  b9787e9700           mov ecx, 0x977e78
// 005c0440  e8ab04fbff           call 0x5708f0
// 005c0445  6820e77f00           push 0x7fe720
// 005c044a  e860130e00           call 0x6a17af
// 005c044f  83c404               add esp, 4
// 005c0452  8b0c24               mov ecx, dword ptr [esp]
// 005c0455  b8787e9700           mov eax, 0x977e78
// 005c045a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0461  83c40c               add esp, 0xc
// 005c0464  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

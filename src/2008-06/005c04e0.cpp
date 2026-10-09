// roc 2008-06 005c04e0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c04e0
//
// 005c04e0  64a100000000         mov eax, dword ptr fs:[0]
// 005c04e6  6aff                 push -1
// 005c04e8  68ee437d00           push 0x7d43ee
// 005c04ed  50                   push eax
// 005c04ee  b801000000           mov eax, 1
// 005c04f3  64892500000000       mov dword ptr fs:[0], esp
// 005c04fa  8405c8809700         test byte ptr [0x9780c8], al
// 005c0500  7530                 jne 0x5c0532
// 005c0502  0905c8809700         or dword ptr [0x9780c8], eax
// 005c0508  6878108400           push 0x841078
// 005c050d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0515  e866a8e4ff           call 0x40ad80
// 005c051a  50                   push eax
// 005c051b  b908809700           mov ecx, 0x978008
// 005c0520  e8cb03fbff           call 0x5708f0
// 005c0525  6800e77f00           push 0x7fe700
// 005c052a  e880120e00           call 0x6a17af
// 005c052f  83c404               add esp, 4
// 005c0532  8b0c24               mov ecx, dword ptr [esp]
// 005c0535  b808809700           mov eax, 0x978008
// 005c053a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0541  83c40c               add esp, 0xc
// 005c0544  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

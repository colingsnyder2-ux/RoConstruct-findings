// roc 2008-06 005c00f0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c00f0
//
// 005c00f0  64a100000000         mov eax, dword ptr fs:[0]
// 005c00f6  6aff                 push -1
// 005c00f8  68ce427d00           push 0x7d42ce
// 005c00fd  50                   push eax
// 005c00fe  b801000000           mov eax, 1
// 005c0103  64892500000000       mov dword ptr fs:[0], esp
// 005c010a  8405c0799700         test byte ptr [0x9779c0], al
// 005c0110  7530                 jne 0x5c0142
// 005c0112  0905c0799700         or dword ptr [0x9779c0], eax
// 005c0118  6858a78300           push 0x83a758
// 005c011d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0125  e856ace4ff           call 0x40ad80
// 005c012a  50                   push eax
// 005c012b  b900799700           mov ecx, 0x977900
// 005c0130  e8bb07fbff           call 0x5708f0
// 005c0135  6840e87f00           push 0x7fe840
// 005c013a  e870160e00           call 0x6a17af
// 005c013f  83c404               add esp, 4
// 005c0142  8b0c24               mov ecx, dword ptr [esp]
// 005c0145  b800799700           mov eax, 0x977900
// 005c014a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0151  83c40c               add esp, 0xc
// 005c0154  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

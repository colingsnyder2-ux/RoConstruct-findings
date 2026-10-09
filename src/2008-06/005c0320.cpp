// roc 2008-06 005c0320  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0320
//
// 005c0320  64a100000000         mov eax, dword ptr fs:[0]
// 005c0326  6aff                 push -1
// 005c0328  686e437d00           push 0x7d436e
// 005c032d  50                   push eax
// 005c032e  b801000000           mov eax, 1
// 005c0333  64892500000000       mov dword ptr fs:[0], esp
// 005c033a  8405a87d9700         test byte ptr [0x977da8], al
// 005c0340  7530                 jne 0x5c0372
// 005c0342  0905a87d9700         or dword ptr [0x977da8], eax
// 005c0348  68d4b69500           push 0x95b6d4
// 005c034d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0355  e826aae4ff           call 0x40ad80
// 005c035a  50                   push eax
// 005c035b  b9e87c9700           mov ecx, 0x977ce8
// 005c0360  e88b05fbff           call 0x5708f0
// 005c0365  68f0e77f00           push 0x7fe7f0
// 005c036a  e840140e00           call 0x6a17af
// 005c036f  83c404               add esp, 4
// 005c0372  8b0c24               mov ecx, dword ptr [esp]
// 005c0375  b8e87c9700           mov eax, 0x977ce8
// 005c037a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0381  83c40c               add esp, 0xc
// 005c0384  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

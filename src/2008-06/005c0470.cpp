// roc 2008-06 005c0470  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0470
//
// 005c0470  64a100000000         mov eax, dword ptr fs:[0]
// 005c0476  6aff                 push -1
// 005c0478  68ce437d00           push 0x7d43ce
// 005c047d  50                   push eax
// 005c047e  b801000000           mov eax, 1
// 005c0483  64892500000000       mov dword ptr fs:[0], esp
// 005c048a  840500809700         test byte ptr [0x978000], al
// 005c0490  7530                 jne 0x5c04c2
// 005c0492  090500809700         or dword ptr [0x978000], eax
// 005c0498  6830c59500           push 0x95c530
// 005c049d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c04a5  e8d6a8e4ff           call 0x40ad80
// 005c04aa  50                   push eax
// 005c04ab  b9407f9700           mov ecx, 0x977f40
// 005c04b0  e83b04fbff           call 0x5708f0
// 005c04b5  6810e77f00           push 0x7fe710
// 005c04ba  e8f0120e00           call 0x6a17af
// 005c04bf  83c404               add esp, 4
// 005c04c2  8b0c24               mov ecx, dword ptr [esp]
// 005c04c5  b8407f9700           mov eax, 0x977f40
// 005c04ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005c04d1  83c40c               add esp, 0xc
// 005c04d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

// roc 2008-06 005c0860  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0860
//
// 005c0860  64a100000000         mov eax, dword ptr fs:[0]
// 005c0866  6aff                 push -1
// 005c0868  68ee447d00           push 0x7d44ee
// 005c086d  50                   push eax
// 005c086e  b801000000           mov eax, 1
// 005c0873  64892500000000       mov dword ptr fs:[0], esp
// 005c087a  840508879700         test byte ptr [0x978708], al
// 005c0880  7530                 jne 0x5c08b2
// 005c0882  090508879700         or dword ptr [0x978708], eax
// 005c0888  68e8379500           push 0x9537e8
// 005c088d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0895  e8e6a4e4ff           call 0x40ad80
// 005c089a  50                   push eax
// 005c089b  b948869700           mov ecx, 0x978648
// 005c08a0  e84b00fbff           call 0x5708f0
// 005c08a5  6870e67f00           push 0x7fe670
// 005c08aa  e8000f0e00           call 0x6a17af
// 005c08af  83c404               add esp, 4
// 005c08b2  8b0c24               mov ecx, dword ptr [esp]
// 005c08b5  b848869700           mov eax, 0x978648
// 005c08ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005c08c1  83c40c               add esp, 0xc
// 005c08c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

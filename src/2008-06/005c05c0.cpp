// roc 2008-06 005c05c0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c05c0
//
// 005c05c0  64a100000000         mov eax, dword ptr fs:[0]
// 005c05c6  6aff                 push -1
// 005c05c8  682e447d00           push 0x7d442e
// 005c05cd  50                   push eax
// 005c05ce  b801000000           mov eax, 1
// 005c05d3  64892500000000       mov dword ptr fs:[0], esp
// 005c05da  840558829700         test byte ptr [0x978258], al
// 005c05e0  7530                 jne 0x5c0612
// 005c05e2  090558829700         or dword ptr [0x978258], eax
// 005c05e8  68ccf69400           push 0x94f6cc
// 005c05ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c05f5  e886a7e4ff           call 0x40ad80
// 005c05fa  50                   push eax
// 005c05fb  b998819700           mov ecx, 0x978198
// 005c0600  e8eb02fbff           call 0x5708f0
// 005c0605  68e0e67f00           push 0x7fe6e0
// 005c060a  e8a0110e00           call 0x6a17af
// 005c060f  83c404               add esp, 4
// 005c0612  8b0c24               mov ecx, dword ptr [esp]
// 005c0615  b898819700           mov eax, 0x978198
// 005c061a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0621  83c40c               add esp, 0xc
// 005c0624  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

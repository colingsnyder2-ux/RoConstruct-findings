// roc 2008-06 00630ea0  unit: RBX::BodyMover  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630ea0
//
// 00630ea0  64a100000000         mov eax, dword ptr fs:[0]
// 00630ea6  6aff                 push -1
// 00630ea8  684e9c7d00           push 0x7d9c4e
// 00630ead  50                   push eax
// 00630eae  b801000000           mov eax, 1
// 00630eb3  64892500000000       mov dword ptr fs:[0], esp
// 00630eba  840508c39700         test byte ptr [0x97c308], al
// 00630ec0  7530                 jne 0x630ef2
// 00630ec2  090508c39700         or dword ptr [0x97c308], eax
// 00630ec8  6808c79500           push 0x95c708
// 00630ecd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00630ed5  e8a69eddff           call 0x40ad80
// 00630eda  50                   push eax
// 00630edb  b948c29700           mov ecx, 0x97c248
// 00630ee0  e80bfaf3ff           call 0x5708f0
// 00630ee5  6890088000           push 0x800890
// 00630eea  e8c0080700           call 0x6a17af
// 00630eef  83c404               add esp, 4
// 00630ef2  8b0c24               mov ecx, dword ptr [esp]
// 00630ef5  b848c29700           mov eax, 0x97c248
// 00630efa  64890d00000000       mov dword ptr fs:[0], ecx
// 00630f01  83c40c               add esp, 0xc
// 00630f04  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

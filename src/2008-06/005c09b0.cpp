// roc 2008-06 005c09b0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c09b0
//
// 005c09b0  64a100000000         mov eax, dword ptr fs:[0]
// 005c09b6  6aff                 push -1
// 005c09b8  684e457d00           push 0x7d454e
// 005c09bd  50                   push eax
// 005c09be  b801000000           mov eax, 1
// 005c09c3  64892500000000       mov dword ptr fs:[0], esp
// 005c09ca  840560899700         test byte ptr [0x978960], al
// 005c09d0  7530                 jne 0x5c0a02
// 005c09d2  090560899700         or dword ptr [0x978960], eax
// 005c09d8  6830a78300           push 0x83a730
// 005c09dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c09e5  e896a3e4ff           call 0x40ad80
// 005c09ea  50                   push eax
// 005c09eb  b9a0889700           mov ecx, 0x9788a0
// 005c09f0  e8fbfefaff           call 0x5708f0
// 005c09f5  68a0e87f00           push 0x7fe8a0
// 005c09fa  e8b00d0e00           call 0x6a17af
// 005c09ff  83c404               add esp, 4
// 005c0a02  8b0c24               mov ecx, dword ptr [esp]
// 005c0a05  b8a0889700           mov eax, 0x9788a0
// 005c0a0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0a11  83c40c               add esp, 0xc
// 005c0a14  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

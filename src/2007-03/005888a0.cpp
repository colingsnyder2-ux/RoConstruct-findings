// roc 2007-03 005888a0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005888a0
//
// 005888a0  64a100000000         mov eax, dword ptr fs:[0]
// 005888a6  6aff                 push -1
// 005888a8  68de757500           push 0x7575de
// 005888ad  50                   push eax
// 005888ae  b801000000           mov eax, 1
// 005888b3  64892500000000       mov dword ptr fs:[0], esp
// 005888ba  840528df8b00         test byte ptr [0x8bdf28], al
// 005888c0  7530                 jne 0x5888f2
// 005888c2  090528df8b00         or dword ptr [0x8bdf28], eax
// 005888c8  6824ac7b00           push 0x7bac24
// 005888cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005888d5  e88612e9ff           call 0x419b60
// 005888da  50                   push eax
// 005888db  b9a0de8b00           mov ecx, 0x8bdea0
// 005888e0  e8fb84feff           call 0x570de0
// 005888e5  6870a57700           push 0x77a570
// 005888ea  e8c4680900           call 0x61f1b3
// 005888ef  83c404               add esp, 4
// 005888f2  8b0c24               mov ecx, dword ptr [esp]
// 005888f5  b8a0de8b00           mov eax, 0x8bdea0
// 005888fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00588901  83c40c               add esp, 0xc
// 00588904  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

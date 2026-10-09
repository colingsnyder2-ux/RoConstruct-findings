// roc 2007-03 00588590  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588590
//
// 00588590  64a100000000         mov eax, dword ptr fs:[0]
// 00588596  6aff                 push -1
// 00588598  68fe747500           push 0x7574fe
// 0058859d  50                   push eax
// 0058859e  b801000000           mov eax, 1
// 005885a3  64892500000000       mov dword ptr fs:[0], esp
// 005885aa  840538db8b00         test byte ptr [0x8bdb38], al
// 005885b0  7530                 jne 0x5885e2
// 005885b2  090538db8b00         or dword ptr [0x8bdb38], eax
// 005885b8  6820387b00           push 0x7b3820
// 005885bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005885c5  e89615e9ff           call 0x419b60
// 005885ca  50                   push eax
// 005885cb  b9b0da8b00           mov ecx, 0x8bdab0
// 005885d0  e80b88feff           call 0x570de0
// 005885d5  68e0a57700           push 0x77a5e0
// 005885da  e8d46b0900           call 0x61f1b3
// 005885df  83c404               add esp, 4
// 005885e2  8b0c24               mov ecx, dword ptr [esp]
// 005885e5  b8b0da8b00           mov eax, 0x8bdab0
// 005885ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005885f1  83c40c               add esp, 0xc
// 005885f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

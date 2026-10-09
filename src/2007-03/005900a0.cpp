// roc 2007-03 005900a0  unit: seg_00590000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005900a0
//
// 005900a0  64a100000000         mov eax, dword ptr fs:[0]
// 005900a6  6aff                 push -1
// 005900a8  689e7c7500           push 0x757c9e
// 005900ad  50                   push eax
// 005900ae  b801000000           mov eax, 1
// 005900b3  64892500000000       mov dword ptr fs:[0], esp
// 005900ba  8405f0e68b00         test byte ptr [0x8be6f0], al
// 005900c0  7530                 jne 0x5900f2
// 005900c2  0905f0e68b00         or dword ptr [0x8be6f0], eax
// 005900c8  685c268a00           push 0x8a265c
// 005900cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005900d5  e8869ae8ff           call 0x419b60
// 005900da  50                   push eax
// 005900db  b968e68b00           mov ecx, 0x8be668
// 005900e0  e8fb0cfeff           call 0x570de0
// 005900e5  6810a97700           push 0x77a910
// 005900ea  e8c4f00800           call 0x61f1b3
// 005900ef  83c404               add esp, 4
// 005900f2  8b0c24               mov ecx, dword ptr [esp]
// 005900f5  b868e68b00           mov eax, 0x8be668
// 005900fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00590101  83c40c               add esp, 0xc
// 00590104  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

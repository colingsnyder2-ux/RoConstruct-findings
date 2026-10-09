// roc 2007-03 0058a1a0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058a1a0
//
// 0058a1a0  64a100000000         mov eax, dword ptr fs:[0]
// 0058a1a6  6aff                 push -1
// 0058a1a8  68ee777500           push 0x7577ee
// 0058a1ad  50                   push eax
// 0058a1ae  b801000000           mov eax, 1
// 0058a1b3  64892500000000       mov dword ptr fs:[0], esp
// 0058a1ba  8405a8e38b00         test byte ptr [0x8be3a8], al
// 0058a1c0  7530                 jne 0x58a1f2
// 0058a1c2  0905a8e38b00         or dword ptr [0x8be3a8], eax
// 0058a1c8  68285d7b00           push 0x7b5d28
// 0058a1cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a1d5  e8a6e7ffff           call 0x588980
// 0058a1da  50                   push eax
// 0058a1db  b920e38b00           mov ecx, 0x8be320
// 0058a1e0  e8fb6bfeff           call 0x570de0
// 0058a1e5  6810a57700           push 0x77a510
// 0058a1ea  e8c44f0900           call 0x61f1b3
// 0058a1ef  83c404               add esp, 4
// 0058a1f2  8b0c24               mov ecx, dword ptr [esp]
// 0058a1f5  b820e38b00           mov eax, 0x8be320
// 0058a1fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a201  83c40c               add esp, 0xc
// 0058a204  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp

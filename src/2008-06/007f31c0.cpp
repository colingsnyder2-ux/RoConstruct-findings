// roc 2008-06 007f31c0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f31c0
//
// 007f31c0  56                   push esi
// 007f31c1  6a05                 push 5
// 007f31c3  33c9                 xor ecx, ecx
// 007f31c5  51                   push ecx
// 007f31c6  b8a05d5600           mov eax, 0x565da0
// 007f31cb  50                   push eax
// 007f31cc  33f6                 xor esi, esi
// 007f31ce  56                   push esi
// 007f31cf  ba10315600           mov edx, 0x563110
// 007f31d4  52                   push edx
// 007f31d5  68b4e78200           push 0x82e7b4
// 007f31da  68a0e38200           push 0x82e3a0
// 007f31df  b930469700           mov ecx, 0x974630
// 007f31e4  e8a725d7ff           call 0x565790
// 007f31e9  6850ce7f00           push 0x7fce50
// 007f31ee  e8bce5eaff           call 0x6a17af
// 007f31f3  83c404               add esp, 4
// 007f31f6  5e                   pop esi
// 007f31f7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_assertAction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp

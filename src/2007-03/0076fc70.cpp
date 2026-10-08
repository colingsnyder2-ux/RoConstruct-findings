// roc 2007-03 0076fc70  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fc70
//
// 0076fc70  33c9                 xor ecx, ecx
// 0076fc72  51                   push ecx
// 0076fc73  681ca77900           push 0x79a71c
// 0076fc78  51                   push ecx
// 0076fc79  b8c0a84800           mov eax, 0x48a8c0
// 0076fc7e  50                   push eax
// 0076fc7f  b918848b00           mov ecx, 0x8b8418
// 0076fc84  e807a0d1ff           call 0x489c90
// 0076fc89  68e0817700           push 0x7781e0
// 0076fc8e  e820f5eaff           call 0x61f1b3
// 0076fc93  59                   pop ecx
// 0076fc94  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__EremoveCharacterFunction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp

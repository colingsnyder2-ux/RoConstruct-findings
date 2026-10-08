// roc 2010-06 00779af0  unit: RBX::GroupDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00779af0
//
// 00779af0  68c09a7700           push 0x779ac0
// 00779af5  684834c200           push 0xc23448
// 00779afa  e8917bc8ff           call 0x401690
// 00779aff  83c408               add esp, 8
// 00779b02  e909ffffff           jmp 0x779a10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

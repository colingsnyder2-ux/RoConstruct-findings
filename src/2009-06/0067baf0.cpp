// roc 2009-06 0067baf0  unit: RBX::VGlue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067baf0
//
// 0067baf0  6820424e00           push 0x4e4220
// 0067baf5  68b4f2a300           push 0xa3f2b4
// 0067bafa  e8115cd8ff           call 0x401710
// 0067baff  83c408               add esp, 8
// 0067bb02  e93979e6ff           jmp 0x4e3440
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-06 00695f40  unit: RBX::VClickDetector::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695f40
//
// 00695f40  68c0a05e00           push 0x5ea0c0
// 00695f45  687c49a400           push 0xa4497c
// 00695f4a  e8c1b7d6ff           call 0x401710
// 00695f4f  83c408               add esp, 8
// 00695f52  e98932f5ff           jmp 0x5e91e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

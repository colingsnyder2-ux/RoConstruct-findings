// roc 2009-06 006cca40  unit: RBX::GameTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cca40
//
// 006cca40  6890356500           push 0x653590
// 006cca45  68b4c7a400           push 0xa4c7b4
// 006cca4a  e8c14cd3ff           call 0x401710
// 006cca4f  83c408               add esp, 8
// 006cca52  e9d967f8ff           jmp 0x653230
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

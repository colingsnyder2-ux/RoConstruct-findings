// roc 2010-06 00647c50  unit: RBX::AnchorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647c50
//
// 00647c50  68b0676400           push 0x6467b0
// 00647c55  6890b8c100           push 0xc1b890
// 00647c5a  e8319adbff           call 0x401690
// 00647c5f  83c408               add esp, 8
// 00647c62  e939e4ffff           jmp 0x6460a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

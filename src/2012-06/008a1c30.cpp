// roc 2012-06 008a1c30  unit: RBX::ToolMouseCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a1c30
//
// 008a1c30  68901b8a00           push 0x8a1b90
// 008a1c35  68d02be500           push 0xe52bd0
// 008a1c3a  e861f9b5ff           call 0x4015a0
// 008a1c3f  83c408               add esp, 8
// 008a1c42  e969fcffff           jmp 0x8a18b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

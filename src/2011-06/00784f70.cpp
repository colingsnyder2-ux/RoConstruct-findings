// roc 2011-06 00784f70  unit: RBX::ToolMouseCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00784f70
//
// 00784f70  68604f7800           push 0x784f60
// 00784f75  680053cd00           push 0xcd5300
// 00784f7a  e891c6c7ff           call 0x401610
// 00784f7f  83c408               add esp, 8
// 00784f82  e989fdffff           jmp 0x784d10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

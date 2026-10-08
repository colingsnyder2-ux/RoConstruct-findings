// roc 2012-06 00954b70  unit: RBX::PartDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00954b70
//
// 00954b70  6850499500           push 0x954950
// 00954b75  68546fe500           push 0xe56f54
// 00954b7a  e821caaaff           call 0x4015a0
// 00954b7f  83c408               add esp, 8
// 00954b82  e989fbffff           jmp 0x954710
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

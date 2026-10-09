// roc 2009-12 007cce30  unit: RBX::PartDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007cce30
//
// 007cce30  6860cc7c00           push 0x7ccc60
// 007cce35  68bc8db900           push 0xb98dbc
// 007cce3a  e8f147c3ff           call 0x401630
// 007cce3f  83c408               add esp, 8
// 007cce42  e949fcffff           jmp 0x7cca90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

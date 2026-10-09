// roc 2009-12 006d5a50  unit: RBX::RightMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5a50
//
// 006d5a50  6870496d00           push 0x6d4970
// 006d5a55  68302db900           push 0xb92d30
// 006d5a5a  e8d1bbd2ff           call 0x401630
// 006d5a5f  83c408               add esp, 8
// 006d5a62  e979e6ffff           jmp 0x6d40e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

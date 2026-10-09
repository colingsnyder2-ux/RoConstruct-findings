// roc 2009-12 00787b20  unit: RBX::NullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00787b20
//
// 00787b20  68404a6d00           push 0x6d4a40
// 00787b25  68642db900           push 0xb92d64
// 00787b2a  e8019bc7ff           call 0x401630
// 00787b2f  83c408               add esp, 8
// 00787b32  e959cbf4ff           jmp 0x6d4690
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

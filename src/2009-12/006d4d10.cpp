// roc 2009-12 006d4d10  unit: RBX::ResizeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d4d10
//
// 006d4d10  68f0496d00           push 0x6d49f0
// 006d4d15  68502db900           push 0xb92d50
// 006d4d1a  e811c9d2ff           call 0x401630
// 006d4d1f  83c408               add esp, 8
// 006d4d22  e939f7ffff           jmp 0x6d4460
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

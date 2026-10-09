// roc 2009-12 006d6160  unit: RBX::MaterialTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6160
//
// 006d6160  68f0486d00           push 0x6d48f0
// 006d6165  68102db900           push 0xb92d10
// 006d616a  e8c1b4d2ff           call 0x401630
// 006d616f  83c408               add esp, 8
// 006d6172  e9e9dbffff           jmp 0x6d3d60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

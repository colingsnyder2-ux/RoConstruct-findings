// roc 2009-12 006d6010  unit: RBX::FillTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6010
//
// 006d6010  68d0486d00           push 0x6d48d0
// 006d6015  68082db900           push 0xb92d08
// 006d601a  e811b6d2ff           call 0x401630
// 006d601f  83c408               add esp, 8
// 006d6022  e959dcffff           jmp 0x6d3c80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

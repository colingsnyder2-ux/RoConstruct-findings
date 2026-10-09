// roc 2009-12 006d6b60  unit: RBX::LaserTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6b60
//
// 006d6b60  68104a6d00           push 0x6d4a10
// 006d6b65  68582db900           push 0xb92d58
// 006d6b6a  e8c1aad2ff           call 0x401630
// 006d6b6f  83c408               add esp, 8
// 006d6b72  e9c9d9ffff           jmp 0x6d4540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

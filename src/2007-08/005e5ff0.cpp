// roc 2007-08 005e5ff0  unit: RBX::NewNullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5ff0
//
// 005e5ff0  68186f8c00           push 0x8c6f18
// 005e5ff5  68005f5e00           push 0x5e5f00
// 005e5ffa  e821f51300           call 0x725520
// 005e5fff  83c408               add esp, 8
// 005e6002  e9a9fdffff           jmp 0x5e5db0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

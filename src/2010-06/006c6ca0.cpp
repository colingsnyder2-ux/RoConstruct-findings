// roc 2010-06 006c6ca0  unit: RBX::VGeometryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c6ca0
//
// 006c6ca0  6860c45a00           push 0x5ac460
// 006c6ca5  68d8c1c000           push 0xc0c1d8
// 006c6caa  e8e1a9d3ff           call 0x401690
// 006c6caf  83c408               add esp, 8
// 006c6cb2  e9b942eeff           jmp 0x5aaf70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

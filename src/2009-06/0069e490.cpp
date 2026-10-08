// roc 2009-06 0069e490  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069e490
//
// 0069e490  6800a25e00           push 0x5ea200
// 0069e495  68cc49a400           push 0xa449cc
// 0069e49a  e87132d6ff           call 0x401710
// 0069e49f  83c408               add esp, 8
// 0069e4a2  e9f9b5f4ff           jmp 0x5e9aa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

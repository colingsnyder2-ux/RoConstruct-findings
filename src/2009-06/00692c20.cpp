// roc 2009-06 00692c20  unit: RBX::VBodyPosition::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00692c20
//
// 00692c20  68a0a15e00           push 0x5ea1a0
// 00692c25  68b449a400           push 0xa449b4
// 00692c2a  e8e1ead6ff           call 0x401710
// 00692c2f  83c408               add esp, 8
// 00692c32  e9c96bf5ff           jmp 0x5e9800
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

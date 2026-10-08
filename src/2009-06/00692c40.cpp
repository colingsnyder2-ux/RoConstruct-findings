// roc 2009-06 00692c40  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00692c40
//
// 00692c40  68b0a15e00           push 0x5ea1b0
// 00692c45  68b849a400           push 0xa449b8
// 00692c4a  e8c1ead6ff           call 0x401710
// 00692c4f  83c408               add esp, 8
// 00692c52  e9196cf5ff           jmp 0x5e9870
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

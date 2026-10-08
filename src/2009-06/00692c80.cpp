// roc 2009-06 00692c80  unit: RBX::VRocket::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00692c80
//
// 00692c80  68d0a15e00           push 0x5ea1d0
// 00692c85  68c049a400           push 0xa449c0
// 00692c8a  e881ead6ff           call 0x401710
// 00692c8f  83c408               add esp, 8
// 00692c92  e9b96cf5ff           jmp 0x5e9950
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

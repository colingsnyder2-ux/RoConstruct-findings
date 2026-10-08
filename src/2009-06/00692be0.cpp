// roc 2009-06 00692be0  unit: RBX::VBodyForce::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00692be0
//
// 00692be0  6880a15e00           push 0x5ea180
// 00692be5  68ac49a400           push 0xa449ac
// 00692bea  e821ebd6ff           call 0x401710
// 00692bef  83c408               add esp, 8
// 00692bf2  e9296bf5ff           jmp 0x5e9720
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

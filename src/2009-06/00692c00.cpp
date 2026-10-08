// roc 2009-06 00692c00  unit: RBX::VBodyThrust::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00692c00
//
// 00692c00  6890a15e00           push 0x5ea190
// 00692c05  68b049a400           push 0xa449b0
// 00692c0a  e801ebd6ff           call 0x401710
// 00692c0f  83c408               add esp, 8
// 00692c12  e9796bf5ff           jmp 0x5e9790
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

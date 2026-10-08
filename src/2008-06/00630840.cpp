// roc 2008-06 00630840  unit: RBX::VRocket::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630840
//
// 00630840  6824789700           push 0x977824
// 00630845  6830005c00           push 0x5c0030
// 0063084a  e8e16af2ff           call 0x557330
// 0063084f  83c408               add esp, 8
// 00630852  e9e9f4f8ff           jmp 0x5bfd40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

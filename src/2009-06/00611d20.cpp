// roc 2009-06 00611d20  unit: RBX::VModelInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00611d20
//
// 00611d20  6820404100           push 0x414020
// 00611d25  68e8a0a300           push 0xa3a0e8
// 00611d2a  e8e1f9deff           call 0x401710
// 00611d2f  83c408               add esp, 8
// 00611d32  e9191fe0ff           jmp 0x413c50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

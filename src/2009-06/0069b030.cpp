// roc 2009-06 0069b030  unit: RBX::VFlag::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069b030
//
// 0069b030  6820a15e00           push 0x5ea120
// 0069b035  689449a400           push 0xa44994
// 0069b03a  e8d166d6ff           call 0x401710
// 0069b03f  83c408               add esp, 8
// 0069b042  e939e4f4ff           jmp 0x5e9480
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

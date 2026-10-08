// roc 2007-08 0059f340  unit: RBX::VBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f340
//
// 0059f340  6898dc8b00           push 0x8bdc98
// 0059f345  6820794800           push 0x487920
// 0059f34a  e8d1611800           call 0x725520
// 0059f34f  83c408               add esp, 8
// 0059f352  e9197aeeff           jmp 0x486d70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

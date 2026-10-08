// roc 2007-08 0059f780  unit: RBX::VGameSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f780
//
// 0059f780  689cdc8b00           push 0x8bdc9c
// 0059f785  6830794800           push 0x487930
// 0059f78a  e8915d1800           call 0x725520
// 0059f78f  83c408               add esp, 8
// 0059f792  e95976eeff           jmp 0x486df0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

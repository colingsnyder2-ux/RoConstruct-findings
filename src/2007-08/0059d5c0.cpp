// roc 2007-08 0059d5c0  unit: RBX::VStarterPackService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d5c0
//
// 0059d5c0  6890dc8b00           push 0x8bdc90
// 0059d5c5  6800794800           push 0x487900
// 0059d5ca  e8517f1800           call 0x725520
// 0059d5cf  83c408               add esp, 8
// 0059d5d2  e99996eeff           jmp 0x486c70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

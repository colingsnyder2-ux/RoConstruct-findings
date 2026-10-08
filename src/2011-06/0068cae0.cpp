// roc 2011-06 0068cae0  unit: RBX::VBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068cae0
//
// 0068cae0  6890584a00           push 0x4a5890
// 0068cae5  68cc53cb00           push 0xcb53cc
// 0068caea  e8214bd7ff           call 0x401610
// 0068caef  83c408               add esp, 8
// 0068caf2  e93971e1ff           jmp 0x4a3c30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

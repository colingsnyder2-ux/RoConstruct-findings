// roc 2011-06 0065cf10  unit: RBX::Stats::VItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065cf10
//
// 0065cf10  6800cf6500           push 0x65cf00
// 0065cf15  68a8d8cc00           push 0xccd8a8
// 0065cf1a  e8f146daff           call 0x401610
// 0065cf1f  83c408               add esp, 8
// 0065cf22  e969ffffff           jmp 0x65ce90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

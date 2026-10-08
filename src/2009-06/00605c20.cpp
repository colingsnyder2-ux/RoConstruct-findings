// roc 2009-06 00605c20  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00605c20
//
// 00605c20  68009d4100           push 0x419d00
// 00605c25  68a8a1a300           push 0xa3a1a8
// 00605c2a  e8e1badfff           call 0x401710
// 00605c2f  83c408               add esp, 8
// 00605c32  e9993ee1ff           jmp 0x419ad0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

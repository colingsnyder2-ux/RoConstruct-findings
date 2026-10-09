// roc 2009-12 00771cc0  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00771cc0
//
// 00771cc0  68b01c7700           push 0x771cb0
// 00771cc5  684c82b900           push 0xb9824c
// 00771cca  e861f9c8ff           call 0x401630
// 00771ccf  83c408               add esp, 8
// 00771cd2  e969ffffff           jmp 0x771c40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 00676a10  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00676a10
//
// 00676a10  68006a6700           push 0x676a00
// 00676a15  68700bb900           push 0xb90b70
// 00676a1a  e811acd8ff           call 0x401630
// 00676a1f  83c408               add esp, 8
// 00676a22  e969ffffff           jmp 0x676990
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

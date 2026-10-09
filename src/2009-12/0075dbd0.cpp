// roc 2009-12 0075dbd0  unit: RBX::VLuaDragger::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075dbd0
//
// 0075dbd0  68609b6400           push 0x649b60
// 0075dbd5  686c60b800           push 0xb8606c
// 0075dbda  e8513acaff           call 0x401630
// 0075dbdf  83c408               add esp, 8
// 0075dbe2  e999b7eeff           jmp 0x649380
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 00748cd0  unit: RBX::VHandles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00748cd0
//
// 00748cd0  68109a6400           push 0x649a10
// 00748cd5  681860b800           push 0xb86018
// 00748cda  e85189cbff           call 0x401630
// 00748cdf  83c408               add esp, 8
// 00748ce2  e969fdefff           jmp 0x648a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 006f1010  unit: RBX::VSparkles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f1010
//
// 006f1010  6810054c00           push 0x4c0510
// 006f1015  6868cfb700           push 0xb7cf68
// 006f101a  e81106d1ff           call 0x401630
// 006f101f  83c408               add esp, 8
// 006f1022  e9b9f0dcff           jmp 0x4c00e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

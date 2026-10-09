// roc 2009-12 0065e050  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065e050
//
// 0065e050  68b0316500           push 0x6531b0
// 0065e055  68fcfcb800           push 0xb8fcfc
// 0065e05a  e8d135daff           call 0x401630
// 0065e05f  83c408               add esp, 8
// 0065e062  e9e950ffff           jmp 0x653150
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

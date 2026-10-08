// roc 2007-08 00588fc0  unit: VStockSound::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588fc0
//
// 00588fc0  68fc348c00           push 0x8c34fc
// 00588fc5  6820815800           push 0x588120
// 00588fca  e851c51900           call 0x725520
// 00588fcf  83c408               add esp, 8
// 00588fd2  e959edffff           jmp 0x587d30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

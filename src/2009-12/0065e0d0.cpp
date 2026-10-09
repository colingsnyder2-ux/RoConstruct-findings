// roc 2009-12 0065e0d0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065e0d0
//
// 0065e0d0  6840386500           push 0x653840
// 0065e0d5  6838fdb800           push 0xb8fd38
// 0065e0da  e85135daff           call 0x401630
// 0065e0df  83c408               add esp, 8
// 0065e0e2  e9f956ffff           jmp 0x6537e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

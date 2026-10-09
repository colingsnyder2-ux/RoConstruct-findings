// roc 2009-12 0065e030  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065e030
//
// 0065e030  68300c6300           push 0x630c30
// 0065e035  68d448b800           push 0xb848d4
// 0065e03a  e8f135daff           call 0x401630
// 0065e03f  83c408               add esp, 8
// 0065e042  e9892bfdff           jmp 0x630bd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

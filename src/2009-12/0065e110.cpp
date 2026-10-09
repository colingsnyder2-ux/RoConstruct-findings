// roc 2009-12 0065e110  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065e110
//
// 0065e110  68a00c6300           push 0x630ca0
// 0065e115  68d848b800           push 0xb848d8
// 0065e11a  e81135daff           call 0x401630
// 0065e11f  83c408               add esp, 8
// 0065e122  e9192bfdff           jmp 0x630c40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

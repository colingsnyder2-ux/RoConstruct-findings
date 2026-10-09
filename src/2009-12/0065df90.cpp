// roc 2009-12 0065df90  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065df90
//
// 0065df90  68500b6300           push 0x630b50
// 0065df95  68cc48b800           push 0xb848cc
// 0065df9a  e89136daff           call 0x401630
// 0065df9f  83c408               add esp, 8
// 0065dfa2  e9492bfdff           jmp 0x630af0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

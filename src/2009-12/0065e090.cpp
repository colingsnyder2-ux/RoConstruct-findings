// roc 2009-12 0065e090  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065e090
//
// 0065e090  6830356500           push 0x653530
// 0065e095  681cfdb800           push 0xb8fd1c
// 0065e09a  e89135daff           call 0x401630
// 0065e09f  83c408               add esp, 8
// 0065e0a2  e92954ffff           jmp 0x6534d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

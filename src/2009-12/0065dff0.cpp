// roc 2009-12 0065dff0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065dff0
//
// 0065dff0  68d0306500           push 0x6530d0
// 0065dff5  68f4fcb800           push 0xb8fcf4
// 0065dffa  e83136daff           call 0x401630
// 0065dfff  83c408               add esp, 8
// 0065e002  e96950ffff           jmp 0x653070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

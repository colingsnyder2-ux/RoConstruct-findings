// roc 2009-12 0065dfd0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065dfd0
//
// 0065dfd0  68e00a6300           push 0x630ae0
// 0065dfd5  68c848b800           push 0xb848c8
// 0065dfda  e85136daff           call 0x401630
// 0065dfdf  83c408               add esp, 8
// 0065dfe2  e9992afdff           jmp 0x630a80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

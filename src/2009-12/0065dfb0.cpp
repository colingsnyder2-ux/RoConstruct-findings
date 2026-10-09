// roc 2009-12 0065dfb0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065dfb0
//
// 0065dfb0  68c00b6300           push 0x630bc0
// 0065dfb5  68d048b800           push 0xb848d0
// 0065dfba  e87136daff           call 0x401630
// 0065dfbf  83c408               add esp, 8
// 0065dfc2  e9992bfdff           jmp 0x630b60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

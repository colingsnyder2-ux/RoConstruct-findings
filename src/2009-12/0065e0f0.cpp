// roc 2009-12 0065e0f0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065e0f0
//
// 0065e0f0  6860464500           push 0x454660
// 0065e0f5  6890b7b700           push 0xb7b790
// 0065e0fa  e83135daff           call 0x401630
// 0065e0ff  83c408               add esp, 8
// 0065e102  e9f964dfff           jmp 0x454600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

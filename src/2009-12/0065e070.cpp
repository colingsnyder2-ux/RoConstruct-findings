// roc 2009-12 0065e070  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065e070
//
// 0065e070  68c0346500           push 0x6534c0
// 0065e075  6818fdb800           push 0xb8fd18
// 0065e07a  e8b135daff           call 0x401630
// 0065e07f  83c408               add esp, 8
// 0065e082  e9d953ffff           jmp 0x653460
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

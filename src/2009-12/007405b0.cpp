// roc 2009-12 007405b0  unit: RBX::VVirtualUser::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007405b0
//
// 007405b0  6800996400           push 0x649900
// 007405b5  68d45fb800           push 0xb85fd4
// 007405ba  e87110ccff           call 0x401630
// 007405bf  83c408               add esp, 8
// 007405c2  e9197df0ff           jmp 0x6482e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 00747080  unit: RBX::VGeometryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00747080
//
// 00747080  6890996400           push 0x649990
// 00747085  68f85fb800           push 0xb85ff8
// 0074708a  e8a1a5cbff           call 0x401630
// 0074708f  83c408               add esp, 8
// 00747092  e93916f0ff           jmp 0x6486d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 0065c810  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065c810
//
// 0065c810  68f09b6400           push 0x649bf0
// 0065c815  689060b800           push 0xb86090
// 0065c81a  e8114edaff           call 0x401630
// 0065c81f  83c408               add esp, 8
// 0065c822  e949cffeff           jmp 0x649770
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

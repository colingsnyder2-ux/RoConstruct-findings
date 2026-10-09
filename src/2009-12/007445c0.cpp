// roc 2009-12 007445c0  unit: RBX::VFlag::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007445c0
//
// 007445c0  6850996400           push 0x649950
// 007445c5  68e85fb800           push 0xb85fe8
// 007445ca  e861d0cbff           call 0x401630
// 007445cf  83c408               add esp, 8
// 007445d2  e9393ff0ff           jmp 0x648510
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

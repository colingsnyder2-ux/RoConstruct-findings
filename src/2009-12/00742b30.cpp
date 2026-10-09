// roc 2009-12 00742b30  unit: RBX::VHole::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00742b30
//
// 00742b30  6830996400           push 0x649930
// 00742b35  68e05fb800           push 0xb85fe0
// 00742b3a  e8f1eacbff           call 0x401630
// 00742b3f  83c408               add esp, 8
// 00742b42  e9e958f0ff           jmp 0x648430
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

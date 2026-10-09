// roc 2009-12 00757780  unit: RBX::VFrame::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00757780
//
// 00757780  68e09a6400           push 0x649ae0
// 00757785  684c60b800           push 0xb8604c
// 0075778a  e8a19ecaff           call 0x401630
// 0075778f  83c408               add esp, 8
// 00757792  e96918efff           jmp 0x649000
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 00757f80  unit: RBX::VGuiImageButton::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00757f80
//
// 00757f80  68f09a6400           push 0x649af0
// 00757f85  685060b800           push 0xb86050
// 00757f8a  e8a196caff           call 0x401630
// 00757f8f  83c408               add esp, 8
// 00757f92  e9d910efff           jmp 0x649070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

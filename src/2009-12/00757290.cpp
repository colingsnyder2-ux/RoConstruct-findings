// roc 2009-12 00757290  unit: RBX::VGuiMain::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00757290
//
// 00757290  68d09a6400           push 0x649ad0
// 00757295  684860b800           push 0xb86048
// 0075729a  e891a3caff           call 0x401630
// 0075729f  83c408               add esp, 8
// 007572a2  e9e91cefff           jmp 0x648f90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

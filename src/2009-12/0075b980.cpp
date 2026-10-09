// roc 2009-12 0075b980  unit: RBX::VTextBox::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075b980
//
// 0075b980  68309b6400           push 0x649b30
// 0075b985  686060b800           push 0xb86060
// 0075b98a  e8a15ccaff           call 0x401630
// 0075b98f  83c408               add esp, 8
// 0075b992  e999d8eeff           jmp 0x649230
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 00759630  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00759630
//
// 00759630  68109b6400           push 0x649b10
// 00759635  685860b800           push 0xb86058
// 0075963a  e8f17fcaff           call 0x401630
// 0075963f  83c408               add esp, 8
// 00759642  e909fbeeff           jmp 0x649150
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

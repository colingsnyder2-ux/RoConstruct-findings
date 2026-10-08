// roc 2012-06 008e5a70  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e5a70
//
// 008e5a70  68605a8e00           push 0x8e5a60
// 008e5a75  68dc5ae500           push 0xe55adc
// 008e5a7a  e821bbb1ff           call 0x4015a0
// 008e5a7f  83c408               add esp, 8
// 008e5a82  e969ffffff           jmp 0x8e59f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-06 00625080  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00625080
//
// 00625080  68b0496200           push 0x6249b0
// 00625085  6800b5a400           push 0xa4b500
// 0062508a  e881c6ddff           call 0x401710
// 0062508f  83c408               add esp, 8
// 00625092  e9a9f8ffff           jmp 0x624940
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 0075f350  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075f350
//
// 0075f350  68f0f17500           push 0x75f1f0
// 0075f355  68c079b900           push 0xb979c0
// 0075f35a  e8d122caff           call 0x401630
// 0075f35f  83c408               add esp, 8
// 0075f362  e919feffff           jmp 0x75f180
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

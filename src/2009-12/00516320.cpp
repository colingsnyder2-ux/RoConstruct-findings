// roc 2009-12 00516320  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00516320
//
// 00516320  68d0f94000           push 0x40f9d0
// 00516325  68bca0b700           push 0xb7a0bc
// 0051632a  e801b3eeff           call 0x401630
// 0051632f  83c408               add esp, 8
// 00516332  e9e991efff           jmp 0x40f520
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

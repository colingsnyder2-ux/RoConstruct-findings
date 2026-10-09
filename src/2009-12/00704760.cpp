// roc 2009-12 00704760  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00704760
//
// 00704760  68303a5100           push 0x513a30
// 00704765  6834e9b700           push 0xb7e934
// 0070476a  e8c1cecfff           call 0x401630
// 0070476f  83c408               add esp, 8
// 00704772  e939e4e0ff           jmp 0x512bb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

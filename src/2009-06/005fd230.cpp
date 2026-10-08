// roc 2009-06 005fd230  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fd230
//
// 005fd230  6870b85f00           push 0x5fb870
// 005fd235  68d0a9a400           push 0xa4a9d0
// 005fd23a  e8d144e0ff           call 0x401710
// 005fd23f  83c408               add esp, 8
// 005fd242  e9a9daffff           jmp 0x5facf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

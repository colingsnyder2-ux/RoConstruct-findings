// roc 2007-08 004a9640  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a9640
//
// 004a9640  6858e98b00           push 0x8be958
// 004a9645  6830714a00           push 0x4a7130
// 004a964a  e8d1be2700           call 0x725520
// 004a964f  83c408               add esp, 8
// 004a9652  e999c0ffff           jmp 0x4a56f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

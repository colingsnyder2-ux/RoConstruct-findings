// roc 2012-06 00899640  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00899640
//
// 00899640  68608e8900           push 0x898e60
// 00899645  687c25e500           push 0xe5257c
// 0089964a  e8517fb6ff           call 0x4015a0
// 0089964f  83c408               add esp, 8
// 00899652  e919f7ffff           jmp 0x898d70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2012-06 00783970  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783970
//
// 00783970  6870c36700           push 0x67c370
// 00783975  68d094e200           push 0xe294d0
// 0078397a  e821dcc7ff           call 0x4015a0
// 0078397f  83c408               add esp, 8
// 00783982  e98989efff           jmp 0x67c310
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

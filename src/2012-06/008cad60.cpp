// roc 2012-06 008cad60  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cad60
//
// 008cad60  6800d78a00           push 0x8ad700
// 008cad65  688830e500           push 0xe53088
// 008cad6a  e83168b3ff           call 0x4015a0
// 008cad6f  83c408               add esp, 8
// 008cad72  e9f927feff           jmp 0x8ad570
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

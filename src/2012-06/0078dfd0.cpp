// roc 2012-06 0078dfd0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0078dfd0
//
// 0078dfd0  6810ce4700           push 0x47ce10
// 0078dfd5  6814a6e100           push 0xe1a614
// 0078dfda  e8c135c7ff           call 0x4015a0
// 0078dfdf  83c408               add esp, 8
// 0078dfe2  e929cdceff           jmp 0x47ad10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

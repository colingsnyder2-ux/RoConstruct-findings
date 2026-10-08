// roc 2012-06 008cf640  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cf640
//
// 008cf640  6820c98c00           push 0x8cc920
// 008cf645  68f83be500           push 0xe53bf8
// 008cf64a  e8511fb3ff           call 0x4015a0
// 008cf64f  83c408               add esp, 8
// 008cf652  e9b9ceffff           jmp 0x8cc510
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

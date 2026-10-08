// roc 2012-06 007d1130  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d1130
//
// 007d1130  68e00f7d00           push 0x7d0fe0
// 007d1135  6868dbe400           push 0xe4db68
// 007d113a  e86104c3ff           call 0x4015a0
// 007d113f  83c408               add esp, 8
// 007d1142  e9c9fcffff           jmp 0x7d0e10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

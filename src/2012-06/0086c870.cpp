// roc 2012-06 0086c870  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086c870
//
// 0086c870  68701f6d00           push 0x6d1f70
// 0086c875  6840f9e200           push 0xe2f940
// 0086c87a  e8214db9ff           call 0x4015a0
// 0086c87f  83c408               add esp, 8
// 0086c882  e9193be6ff           jmp 0x6d03a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

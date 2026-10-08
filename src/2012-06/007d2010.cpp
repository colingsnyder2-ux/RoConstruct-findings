// roc 2012-06 007d2010  unit: RBX::VCharacterAppearance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d2010
//
// 007d2010  6800207d00           push 0x7d2000
// 007d2015  6874dbe400           push 0xe4db74
// 007d201a  e881f5c2ff           call 0x4015a0
// 007d201f  83c408               add esp, 8
// 007d2022  e959ffffff           jmp 0x7d1f80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-06 0067bb60  unit: RBX::VRotateP::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bb60
//
// 0067bb60  6840424e00           push 0x4e4240
// 0067bb65  68bcf2a300           push 0xa3f2bc
// 0067bb6a  e8a15bd8ff           call 0x401710
// 0067bb6f  83c408               add esp, 8
// 0067bb72  e9a979e6ff           jmp 0x4e3520
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

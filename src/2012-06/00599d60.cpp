// roc 2012-06 00599d60  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00599d60
//
// 00599d60  68509d5900           push 0x599d50
// 00599d65  68c856e200           push 0xe256c8
// 00599d6a  e83178e6ff           call 0x4015a0
// 00599d6f  83c408               add esp, 8
// 00599d72  e969ffffff           jmp 0x599ce0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2010-06 005be2d0  unit: RBX::VBasicPartInstance::?$ActionStation  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005be2d0
//
// 005be2d0  6870494a00           push 0x4a4970
// 005be2d5  68403ec000           push 0xc03e40
// 005be2da  e8b133e4ff           call 0x401690
// 005be2df  83c408               add esp, 8
// 005be2e2  e90956eeff           jmp 0x4a38f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

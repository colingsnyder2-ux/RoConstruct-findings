// roc 2010-06 005be2f0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005be2f0
//
// 005be2f0  6830c55a00           push 0x5ac530
// 005be2f5  680cc2c000           push 0xc0c20c
// 005be2fa  e89133e4ff           call 0x401690
// 005be2ff  83c408               add esp, 8
// 005be302  e919d2feff           jmp 0x5ab520
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

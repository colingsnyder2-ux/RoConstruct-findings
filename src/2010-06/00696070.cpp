// roc 2010-06 00696070  unit: RBX::VRotateP::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00696070
//
// 00696070  68f06d4e00           push 0x4e6df0
// 00696075  687c66c000           push 0xc0667c
// 0069607a  e811b6d6ff           call 0x401690
// 0069607f  83c408               add esp, 8
// 00696082  e959fce4ff           jmp 0x4e5ce0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

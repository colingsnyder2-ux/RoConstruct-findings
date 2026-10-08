// roc 2010-06 00696000  unit: RBX::VRotate::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00696000
//
// 00696000  68e06d4e00           push 0x4e6de0
// 00696005  687866c000           push 0xc06678
// 0069600a  e881b6d6ff           call 0x401690
// 0069600f  83c408               add esp, 8
// 00696012  e959fce4ff           jmp 0x4e5c70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

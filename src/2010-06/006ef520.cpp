// roc 2010-06 006ef520  unit: RBX::VPartAdornment::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ef520
//
// 006ef520  6810f56e00           push 0x6ef510
// 006ef525  68c017c200           push 0xc217c0
// 006ef52a  e86121d1ff           call 0x401690
// 006ef52f  83c408               add esp, 8
// 006ef532  e959ffffff           jmp 0x6ef490
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

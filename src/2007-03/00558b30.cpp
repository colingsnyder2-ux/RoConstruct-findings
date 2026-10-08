// roc 2007-03 00558b30  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00558b30
//
// 00558b30  6844c28b00           push 0x8bc244
// 00558b35  68005d5500           push 0x555d00
// 00558b3a  e811dd1c00           call 0x726850
// 00558b3f  83c408               add esp, 8
// 00558b42  e9c9bdffff           jmp 0x554910
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

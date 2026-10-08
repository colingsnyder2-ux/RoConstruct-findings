// roc 2007-03 00558150  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00558150
//
// 00558150  682cc28b00           push 0x8bc22c
// 00558155  68a05c5500           push 0x555ca0
// 0055815a  e8f1e61c00           call 0x726850
// 0055815f  83c408               add esp, 8
// 00558162  e909c5ffff           jmp 0x554670
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

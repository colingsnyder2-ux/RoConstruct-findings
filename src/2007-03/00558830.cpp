// roc 2007-03 00558830  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00558830
//
// 00558830  683cc28b00           push 0x8bc23c
// 00558835  68e05c5500           push 0x555ce0
// 0055883a  e811e01c00           call 0x726850
// 0055883f  83c408               add esp, 8
// 00558842  e9e9bfffff           jmp 0x554830
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

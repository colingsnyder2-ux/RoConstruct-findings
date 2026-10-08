// roc 2007-03 005a9030  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9030
//
// 005a9030  68ccf38b00           push 0x8bf3cc
// 005a9035  68708d5a00           push 0x5a8d70
// 005a903a  e811d81700           call 0x726850
// 005a903f  83c408               add esp, 8
// 005a9042  e9d9fbffff           jmp 0x5a8c20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2007-03 005596b0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005596b0
//
// 005596b0  685cc28b00           push 0x8bc25c
// 005596b5  68605d5500           push 0x555d60
// 005596ba  e891d11c00           call 0x726850
// 005596bf  83c408               add esp, 8
// 005596c2  e9e9b4ffff           jmp 0x554bb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

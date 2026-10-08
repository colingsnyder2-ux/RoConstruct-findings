// roc 2007-03 005dfdf0  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dfdf0
//
// 005dfdf0  68b0078c00           push 0x8c07b0
// 005dfdf5  6880f05d00           push 0x5df080
// 005dfdfa  e8516a1400           call 0x726850
// 005dfdff  83c408               add esp, 8
// 005dfe02  e9f9ecffff           jmp 0x5deb00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

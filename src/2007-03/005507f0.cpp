// roc 2007-03 005507f0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005507f0
//
// 005507f0  68b0548b00           push 0x8b54b0
// 005507f5  68f0e24000           push 0x40e2f0
// 005507fa  e851601d00           call 0x726850
// 005507ff  83c408               add esp, 8
// 00550802  e979d5ebff           jmp 0x40dd80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

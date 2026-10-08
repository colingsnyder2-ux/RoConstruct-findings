// roc 2007-03 005d0bd0  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d0bd0
//
// 005d0bd0  68f0ff8b00           push 0x8bfff0
// 005d0bd5  6830ff5c00           push 0x5cff30
// 005d0bda  e8715c1500           call 0x726850
// 005d0bdf  83c408               add esp, 8
// 005d0be2  e959f2ffff           jmp 0x5cfe40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

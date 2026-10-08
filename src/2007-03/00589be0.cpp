// roc 2007-03 00589be0  unit: seg_00580000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00589be0
//
// 00589be0  6864d88b00           push 0x8bd864
// 00589be5  68b0835800           push 0x5883b0
// 00589bea  e861cc1900           call 0x726850
// 00589bef  83c408               add esp, 8
// 00589bf2  e979e6ffff           jmp 0x588270
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

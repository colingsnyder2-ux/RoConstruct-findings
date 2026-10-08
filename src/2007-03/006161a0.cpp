// roc 2007-03 006161a0  unit: seg_00610000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006161a0
//
// 006161a0  6810138c00           push 0x8c1310
// 006161a5  68805d6100           push 0x615d80
// 006161aa  e8a1061100           call 0x726850
// 006161af  83c408               add esp, 8
// 006161b2  e959fbffff           jmp 0x615d10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

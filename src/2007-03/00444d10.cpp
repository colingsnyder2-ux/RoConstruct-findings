// roc 2007-03 00444d10  unit: seg_00440000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444d10
//
// 00444d10  68e45f8b00           push 0x8b5fe4
// 00444d15  6870464400           push 0x444670
// 00444d1a  e8311b2e00           call 0x726850
// 00444d1f  83c408               add esp, 8
// 00444d22  e909f8ffff           jmp 0x444530
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2007-03 00451bb0  unit: seg_00450000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00451bb0
//
// 00451bb0  68c8648b00           push 0x8b64c8
// 00451bb5  6830154500           push 0x451530
// 00451bba  e8914c2d00           call 0x726850
// 00451bbf  83c408               add esp, 8
// 00451bc2  e939f5ffff           jmp 0x451100
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

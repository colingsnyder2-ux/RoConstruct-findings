// roc 2007-03 0041a0a0  unit: seg_00410000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041a0a0
//
// 0041a0a0  6848578b00           push 0x8b5748
// 0041a0a5  6820524100           push 0x415220
// 0041a0aa  e8a1c73000           call 0x726850
// 0041a0af  83c408               add esp, 8
// 0041a0b2  e9d9a7ffff           jmp 0x414890
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

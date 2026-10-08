// roc 2007-03 005dfeb0  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dfeb0
//
// 005dfeb0  68c8078c00           push 0x8c07c8
// 005dfeb5  68e0f05d00           push 0x5df0e0
// 005dfeba  e891691400           call 0x726850
// 005dfebf  83c408               add esp, 8
// 005dfec2  e9d9eeffff           jmp 0x5deda0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

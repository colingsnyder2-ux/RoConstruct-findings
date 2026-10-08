// roc 2007-03 005d0bb0  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d0bb0
//
// 005d0bb0  68ecff8b00           push 0x8bffec
// 005d0bb5  6820ff5c00           push 0x5cff20
// 005d0bba  e8915c1500           call 0x726850
// 005d0bbf  83c408               add esp, 8
// 005d0bc2  e909f2ffff           jmp 0x5cfdd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

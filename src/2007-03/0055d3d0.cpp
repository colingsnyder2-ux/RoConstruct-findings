// roc 2007-03 0055d3d0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055d3d0
//
// 0055d3d0  6854c38b00           push 0x8bc354
// 0055d3d5  68c0d35500           push 0x55d3c0
// 0055d3da  e871941c00           call 0x726850
// 0055d3df  83c408               add esp, 8
// 0055d3e2  e959ffffff           jmp 0x55d340
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

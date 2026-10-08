// roc 2007-03 00426200  unit: seg_00420000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00426200
//
// 00426200  68185a8b00           push 0x8b5a18
// 00426205  6800604200           push 0x426000
// 0042620a  e841063000           call 0x726850
// 0042620f  83c408               add esp, 8
// 00426212  e969fdffff           jmp 0x425f80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

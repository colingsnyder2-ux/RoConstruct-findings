// roc 2007-03 00557e10  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00557e10
//
// 00557e10  687cc28b00           push 0x8bc27c
// 00557e15  68e05d5500           push 0x555de0
// 00557e1a  e831ea1c00           call 0x726850
// 00557e1f  83c408               add esp, 8
// 00557e22  e909d1ffff           jmp 0x554f30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

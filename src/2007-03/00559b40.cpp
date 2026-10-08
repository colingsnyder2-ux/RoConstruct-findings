// roc 2007-03 00559b40  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00559b40
//
// 00559b40  686cc28b00           push 0x8bc26c
// 00559b45  68a05d5500           push 0x555da0
// 00559b4a  e801cd1c00           call 0x726850
// 00559b4f  83c408               add esp, 8
// 00559b52  e919b2ffff           jmp 0x554d70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

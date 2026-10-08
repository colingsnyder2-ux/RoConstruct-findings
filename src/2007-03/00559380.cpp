// roc 2007-03 00559380  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00559380
//
// 00559380  6820c28b00           push 0x8bc220
// 00559385  68705c5500           push 0x555c70
// 0055938a  e8c1d41c00           call 0x726850
// 0055938f  83c408               add esp, 8
// 00559392  e989b1ffff           jmp 0x554520
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

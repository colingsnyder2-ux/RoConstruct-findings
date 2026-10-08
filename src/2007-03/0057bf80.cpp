// roc 2007-03 0057bf80  unit: seg_00570000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057bf80
//
// 0057bf80  68ac668b00           push 0x8b66ac
// 0057bf85  68d0164600           push 0x4616d0
// 0057bf8a  e8c1a81a00           call 0x726850
// 0057bf8f  83c408               add esp, 8
// 0057bf92  e9694eeeff           jmp 0x460e00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

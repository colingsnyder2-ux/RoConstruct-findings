// roc 2007-03 00571520  unit: seg_00570000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00571520
//
// 00571520  68b0598b00           push 0x8b59b0
// 00571525  6850ce4100           push 0x41ce50
// 0057152a  e821531b00           call 0x726850
// 0057152f  83c408               add esp, 8
// 00571532  e9c9b6eaff           jmp 0x41cc00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

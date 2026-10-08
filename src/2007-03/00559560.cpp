// roc 2007-03 00559560  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00559560
//
// 00559560  6824c28b00           push 0x8bc224
// 00559565  68805c5500           push 0x555c80
// 0055956a  e8e1d21c00           call 0x726850
// 0055956f  83c408               add esp, 8
// 00559572  e919b0ffff           jmp 0x554590
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

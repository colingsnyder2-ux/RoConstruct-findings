// roc 2008-06 00666b00  unit: RBX::HUMAN::Running  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666b00
//
// 00666b00  6890d99700           push 0x97d990
// 00666b05  68f06a6600           push 0x666af0
// 00666b0a  e82108efff           call 0x557330
// 00666b0f  83c408               add esp, 8
// 00666b12  e939ffffff           jmp 0x666a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

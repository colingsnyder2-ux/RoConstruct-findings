// roc 2008-06 00666ff0  unit: RBX::HUMAN::Seated  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666ff0
//
// 00666ff0  68b4d99700           push 0x97d9b4
// 00666ff5  68e06f6600           push 0x666fe0
// 00666ffa  e83103efff           call 0x557330
// 00666fff  83c408               add esp, 8
// 00667002  e969ffffff           jmp 0x666f70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2008-06 00666df0  unit: RBX::HUMAN::Dead  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666df0
//
// 00666df0  68a4d99700           push 0x97d9a4
// 00666df5  68d06d6600           push 0x666dd0
// 00666dfa  e83105efff           call 0x557330
// 00666dff  83c408               add esp, 8
// 00666e02  e949feffff           jmp 0x666c50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

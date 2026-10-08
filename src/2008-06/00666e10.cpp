// roc 2008-06 00666e10  unit: RBX::HUMAN::FallingDown  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666e10
//
// 00666e10  68a8d99700           push 0x97d9a8
// 00666e15  68e06d6600           push 0x666de0
// 00666e1a  e81105efff           call 0x557330
// 00666e1f  83c408               add esp, 8
// 00666e22  e999feffff           jmp 0x666cc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

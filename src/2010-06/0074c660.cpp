// roc 2010-06 0074c660  unit: RBX::HUMAN::Landed  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074c660
//
// 0074c660  6850c67400           push 0x74c650
// 0074c665  68102dc200           push 0xc22d10
// 0074c66a  e82150cbff           call 0x401690
// 0074c66f  83c408               add esp, 8
// 0074c672  e969ffffff           jmp 0x74c5e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

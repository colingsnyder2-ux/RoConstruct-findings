// roc 2010-06 0074c700  unit: RBX::HUMAN::Climbing  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074c700
//
// 0074c700  68f0c67400           push 0x74c6f0
// 0074c705  681c2dc200           push 0xc22d1c
// 0074c70a  e8814fcbff           call 0x401690
// 0074c70f  83c408               add esp, 8
// 0074c712  e969ffffff           jmp 0x74c680
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

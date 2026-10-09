// roc 2009-12 007d8b10  unit: RBX::HUMAN::Jumping  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d8b10
//
// 007d8b10  6870897d00           push 0x7d8970
// 007d8b15  684c8fb900           push 0xb98f4c
// 007d8b1a  e8118bc2ff           call 0x401630
// 007d8b1f  83c408               add esp, 8
// 007d8b22  e9d9fdffff           jmp 0x7d8900
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

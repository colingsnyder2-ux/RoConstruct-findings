// roc 2009-12 007abe10  unit: RBX::HUMAN::Climbing  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007abe10
//
// 007abe10  6800be7a00           push 0x7abe00
// 007abe15  68a48ab900           push 0xb98aa4
// 007abe1a  e81158c5ff           call 0x401630
// 007abe1f  83c408               add esp, 8
// 007abe22  e969ffffff           jmp 0x7abd90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

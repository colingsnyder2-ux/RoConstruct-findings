// roc 2011-06 007ed160  unit: RBX::HUMAN::Freefall  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ed160
//
// 007ed160  6830cd7e00           push 0x7ecd30
// 007ed165  681060cd00           push 0xcd6010
// 007ed16a  e8a144c1ff           call 0x401610
// 007ed16f  83c408               add esp, 8
// 007ed172  e969faffff           jmp 0x7ecbe0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

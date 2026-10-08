// roc 2011-06 007ec570  unit: RBX::HUMAN::PlatformStanding  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ec570
//
// 007ec570  6840c57e00           push 0x7ec540
// 007ec575  68b05fcd00           push 0xcd5fb0
// 007ec57a  e89150c1ff           call 0x401610
// 007ec57f  83c408               add esp, 8
// 007ec582  e959feffff           jmp 0x7ec3e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

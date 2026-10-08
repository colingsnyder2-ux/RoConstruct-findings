// roc 2012-06 0095fc00  unit: RBX::HUMAN::RunningNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095fc00
//
// 0095fc00  68f0fb9500           push 0x95fbf0
// 0095fc05  68f870e500           push 0xe570f8
// 0095fc0a  e89119aaff           call 0x4015a0
// 0095fc0f  83c408               add esp, 8
// 0095fc12  e969ffffff           jmp 0x95fb80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

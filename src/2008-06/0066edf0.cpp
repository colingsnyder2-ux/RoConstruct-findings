// roc 2008-06 0066edf0  unit: RBX::HUMAN::VHumanoidState::?$Named  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066edf0
//
// 0066edf0  6850da9700           push 0x97da50
// 0066edf5  68a0ec6600           push 0x66eca0
// 0066edfa  e83185eeff           call 0x557330
// 0066edff  83c408               add esp, 8
// 0066ee02  e9b9fcffff           jmp 0x66eac0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

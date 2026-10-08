// roc 2012-06 0070ca40  unit: RBX::VHopper::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070ca40
//
// 0070ca40  68e0d05100           push 0x51d0e0
// 0070ca45  6844e1e100           push 0xe1e144
// 0070ca4a  e8514bcfff           call 0x4015a0
// 0070ca4f  83c408               add esp, 8
// 0070ca52  e959ece0ff           jmp 0x51b6b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

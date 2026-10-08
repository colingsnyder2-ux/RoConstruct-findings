// roc 2012-06 007cd290  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007cd290
//
// 007cd290  68b0d05100           push 0x51d0b0
// 007cd295  6838e1e100           push 0xe1e138
// 007cd29a  e80143c3ff           call 0x4015a0
// 007cd29f  83c408               add esp, 8
// 007cd2a2  e9b9e2d4ff           jmp 0x51b560
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2012-06 007ae790  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ae790
//
// 007ae790  6840a64b00           push 0x4ba640
// 007ae795  6864c2e100           push 0xe1c264
// 007ae79a  e8012ec5ff           call 0x4015a0
// 007ae79f  83c408               add esp, 8
// 007ae7a2  e959b2d0ff           jmp 0x4b9a00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

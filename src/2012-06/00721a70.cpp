// roc 2012-06 00721a70  unit: RBX::VRootInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00721a70
//
// 00721a70  6810a64b00           push 0x4ba610
// 00721a75  6858c2e100           push 0xe1c258
// 00721a7a  e821fbcdff           call 0x4015a0
// 00721a7f  83c408               add esp, 8
// 00721a82  e9297ed9ff           jmp 0x4b98b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

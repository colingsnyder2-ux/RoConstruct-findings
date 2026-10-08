// roc 2011-06 00714bd0  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714bd0
//
// 00714bd0  68d0145c00           push 0x5c14d0
// 00714bd5  6840e6cb00           push 0xcbe640
// 00714bda  e831caceff           call 0x401610
// 00714bdf  83c408               add esp, 8
// 00714be2  e959bceaff           jmp 0x5c0840
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

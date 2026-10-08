// roc 2010-06 006da080  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006da080
//
// 006da080  68a0c55a00           push 0x5ac5a0
// 006da085  6828c2c000           push 0xc0c228
// 006da08a  e80176d2ff           call 0x401690
// 006da08f  83c408               add esp, 8
// 006da092  e99917edff           jmp 0x5ab830
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

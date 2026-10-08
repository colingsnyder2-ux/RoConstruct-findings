// roc 2010-06 0065ff60  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065ff60
//
// 0065ff60  6840494a00           push 0x4a4940
// 0065ff65  68343ec000           push 0xc03e34
// 0065ff6a  e82117daff           call 0x401690
// 0065ff6f  83c408               add esp, 8
// 0065ff72  e92938e4ff           jmp 0x4a37a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

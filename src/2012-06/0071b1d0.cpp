// roc 2012-06 0071b1d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071b1d0
//
// 0071b1d0  6820a57100           push 0x71a520
// 0071b1d5  680c21e300           push 0xe3210c
// 0071b1da  e8c163ceff           call 0x4015a0
// 0071b1df  83c408               add esp, 8
// 0071b1e2  e969f1ffff           jmp 0x71a350
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

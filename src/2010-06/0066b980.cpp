// roc 2010-06 0066b980  unit: RBX::VTimerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066b980
//
// 0066b980  68004a4a00           push 0x4a4a00
// 0066b985  68643ec000           push 0xc03e64
// 0066b98a  e8015dd9ff           call 0x401690
// 0066b98f  83c408               add esp, 8
// 0066b992  e94983e3ff           jmp 0x4a3ce0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

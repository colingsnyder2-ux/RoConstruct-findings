// roc 2010-06 0058ed40  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058ed40
//
// 0058ed40  6850174000           push 0x401750
// 0058ed45  68d0f9bf00           push 0xbff9d0
// 0058ed4a  e84129e7ff           call 0x401690
// 0058ed4f  83c408               add esp, 8
// 0058ed52  e94926e7ff           jmp 0x4013a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

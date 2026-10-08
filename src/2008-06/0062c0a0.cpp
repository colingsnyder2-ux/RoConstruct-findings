// roc 2008-06 0062c0a0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062c0a0
//
// 0062c0a0  6800789700           push 0x977800
// 0062c0a5  68a0ff5b00           push 0x5bffa0
// 0062c0aa  e881b2f2ff           call 0x557330
// 0062c0af  83c408               add esp, 8
// 0062c0b2  e99938f9ff           jmp 0x5bf950
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

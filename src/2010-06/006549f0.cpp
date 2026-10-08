// roc 2010-06 006549f0  unit: RBX::VExtrudedPartInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006549f0
//
// 006549f0  68a07d4600           push 0x467da0
// 006549f5  68c81fc000           push 0xc01fc8
// 006549fa  e891ccdaff           call 0x401690
// 006549ff  83c408               add esp, 8
// 00654a02  e94928e1ff           jmp 0x467250
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

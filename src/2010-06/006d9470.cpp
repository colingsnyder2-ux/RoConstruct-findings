// roc 2010-06 006d9470  unit: RBX::VSparkles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d9470
//
// 006d9470  6880c55a00           push 0x5ac580
// 006d9475  6820c2c000           push 0xc0c220
// 006d947a  e81182d2ff           call 0x401690
// 006d947f  83c408               add esp, 8
// 006d9482  e9c922edff           jmp 0x5ab750
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

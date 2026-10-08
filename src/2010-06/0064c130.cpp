// roc 2010-06 0064c130  unit: RBX::VControllerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064c130
//
// 0064c130  68407d4600           push 0x467d40
// 0064c135  68b01fc000           push 0xc01fb0
// 0064c13a  e85155dbff           call 0x401690
// 0064c13f  83c408               add esp, 8
// 0064c142  e969aee1ff           jmp 0x466fb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

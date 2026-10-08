// roc 2009-06 0064c7d0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c7d0
//
// 0064c7d0  68306b4400           push 0x446b30
// 0064c7d5  68dcb1a300           push 0xa3b1dc
// 0064c7da  e8314fdbff           call 0x401710
// 0064c7df  83c408               add esp, 8
// 0064c7e2  e93992dfff           jmp 0x445a20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

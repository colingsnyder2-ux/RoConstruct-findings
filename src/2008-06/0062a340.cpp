// roc 2008-06 0062a340  unit: RBX::VExplosion::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a340
//
// 0062a340  68f8779700           push 0x9777f8
// 0062a345  6880ff5b00           push 0x5bff80
// 0062a34a  e8e1cff2ff           call 0x557330
// 0062a34f  83c408               add esp, 8
// 0062a352  e91955f9ff           jmp 0x5bf870
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

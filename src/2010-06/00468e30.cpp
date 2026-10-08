// roc 2010-06 00468e30  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00468e30
//
// 00468e30  68707d4600           push 0x467d70
// 00468e35  68bc1fc000           push 0xc01fbc
// 00468e3a  e85188f9ff           call 0x401690
// 00468e3f  83c408               add esp, 8
// 00468e42  e9b9e2ffff           jmp 0x467100
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

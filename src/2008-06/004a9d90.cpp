// roc 2008-06 004a9d90  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9d90
//
// 004a9d90  68cc069700           push 0x9706cc
// 004a9d95  6880e54900           push 0x49e580
// 004a9d9a  e891d50a00           call 0x557330
// 004a9d9f  83c408               add esp, 8
// 004a9da2  e96947ffff           jmp 0x49e510
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

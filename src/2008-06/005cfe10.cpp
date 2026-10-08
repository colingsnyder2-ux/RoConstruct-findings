// roc 2008-06 005cfe10  unit: RBX::VStarterPackService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cfe10
//
// 005cfe10  68b4fb9600           push 0x96fbb4
// 005cfe15  6890aa4800           push 0x48aa90
// 005cfe1a  e81175f8ff           call 0x557330
// 005cfe1f  83c408               add esp, 8
// 005cfe22  e9e99eebff           jmp 0x489d10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2008-06 0048fb60  unit: RBX::VClothing::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fb60
//
// 0048fb60  68ccfb9600           push 0x96fbcc
// 0048fb65  68f0aa4800           push 0x48aaf0
// 0048fb6a  e8c1770c00           call 0x557330
// 0048fb6f  83c408               add esp, 8
// 0048fb72  e939a4ffff           jmp 0x489fb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

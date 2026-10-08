// roc 2008-06 0055ddb0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055ddb0
//
// 0055ddb0  68ccd09600           push 0x96d0cc
// 0055ddb5  68f0e04100           push 0x41e0f0
// 0055ddba  e87195ffff           call 0x557330
// 0055ddbf  83c408               add esp, 8
// 0055ddc2  e91902ecff           jmp 0x41dfe0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

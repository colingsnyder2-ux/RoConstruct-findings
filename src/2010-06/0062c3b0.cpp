// roc 2010-06 0062c3b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062c3b0
//
// 0062c3b0  68807c4500           push 0x457c80
// 0062c3b5  68e41dc000           push 0xc01de4
// 0062c3ba  e8d152ddff           call 0x401690
// 0062c3bf  83c408               add esp, 8
// 0062c3c2  e9099ce2ff           jmp 0x455fd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

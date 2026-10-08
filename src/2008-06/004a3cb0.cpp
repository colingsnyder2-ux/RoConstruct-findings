// roc 2008-06 004a3cb0  unit: RBX::VHint::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3cb0
//
// 004a3cb0  68140d9700           push 0x970d14
// 004a3cb5  68601b4a00           push 0x4a1b60
// 004a3cba  e871360b00           call 0x557330
// 004a3cbf  83c408               add esp, 8
// 004a3cc2  e929daffff           jmp 0x4a16f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

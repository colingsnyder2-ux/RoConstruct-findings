// roc 2008-06 005e3040  unit: RBX::VSnap::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3040
//
// 005e3040  6874149700           push 0x971474
// 005e3045  6820c34a00           push 0x4ac320
// 005e304a  e8e142f7ff           call 0x557330
// 005e304f  83c408               add esp, 8
// 005e3052  e90981ecff           jmp 0x4ab160
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

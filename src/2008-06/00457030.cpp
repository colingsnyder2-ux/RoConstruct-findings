// roc 2008-06 00457030  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457030
//
// 00457030  6898dd9600           push 0x96dd98
// 00457035  68f0634500           push 0x4563f0
// 0045703a  e8f1021000           call 0x557330
// 0045703f  83c408               add esp, 8
// 00457042  e979edffff           jmp 0x455dc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

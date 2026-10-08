// roc 2008-06 005a17f0  unit: RBX::VRootInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a17f0
//
// 005a17f0  68acfb9600           push 0x96fbac
// 005a17f5  6870aa4800           push 0x48aa70
// 005a17fa  e8315bfbff           call 0x557330
// 005a17ff  83c408               add esp, 8
// 005a1802  e92984eeff           jmp 0x489c30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

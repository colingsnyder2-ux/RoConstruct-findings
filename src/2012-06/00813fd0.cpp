// roc 2012-06 00813fd0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00813fd0
//
// 00813fd0  68c03f8100           push 0x813fc0
// 00813fd5  68c402e500           push 0xe502c4
// 00813fda  e8c1d5beff           call 0x4015a0
// 00813fdf  83c408               add esp, 8
// 00813fe2  e959ffffff           jmp 0x813f40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

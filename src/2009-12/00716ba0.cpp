// roc 2009-12 00716ba0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00716ba0
//
// 00716ba0  68906b7100           push 0x716b90
// 00716ba5  684456b900           push 0xb95644
// 00716baa  e881aaceff           call 0x401630
// 00716baf  83c408               add esp, 8
// 00716bb2  e969ffffff           jmp 0x716b20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

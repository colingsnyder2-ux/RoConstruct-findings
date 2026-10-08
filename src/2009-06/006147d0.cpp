// roc 2009-06 006147d0  unit: RBX::VLocalScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006147d0
//
// 006147d0  6840404100           push 0x414040
// 006147d5  68f0a0a300           push 0xa3a0f0
// 006147da  e831cfdeff           call 0x401710
// 006147df  83c408               add esp, 8
// 006147e2  e949f5dfff           jmp 0x413d30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

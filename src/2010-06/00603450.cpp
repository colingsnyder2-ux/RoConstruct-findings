// roc 2010-06 00603450  unit: RBX::VRootInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00603450
//
// 00603450  6820494a00           push 0x4a4920
// 00603455  682c3ec000           push 0xc03e2c
// 0060345a  e831e2dfff           call 0x401690
// 0060345f  83c408               add esp, 8
// 00603462  e95902eaff           jmp 0x4a36c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

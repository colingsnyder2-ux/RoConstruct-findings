// roc 2011-06 004cb7a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004cb7a0
//
// 004cb7a0  68c0404100           push 0x4140c0
// 004cb7a5  68dc22cb00           push 0xcb22dc
// 004cb7aa  e8615ef3ff           call 0x401610
// 004cb7af  83c408               add esp, 8
// 004cb7b2  e98984f4ff           jmp 0x413c40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-06 005f29b0  unit: RBX::VLocalBackpackSwitcher::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f29b0
//
// 005f29b0  68f0a15e00           push 0x5ea1f0
// 005f29b5  68c849a400           push 0xa449c8
// 005f29ba  e851ede0ff           call 0x401710
// 005f29bf  83c408               add esp, 8
// 005f29c2  e96970ffff           jmp 0x5e9a30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2010-06 005bd500  unit: RBX::VLocalBackpackSwitcher::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bd500
//
// 005bd500  6810c55a00           push 0x5ac510
// 005bd505  6804c2c000           push 0xc0c204
// 005bd50a  e88141e4ff           call 0x401690
// 005bd50f  83c408               add esp, 8
// 005bd512  e929dffeff           jmp 0x5ab440
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

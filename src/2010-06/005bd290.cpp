// roc 2010-06 005bd290  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bd290
//
// 005bd290  6800c55a00           push 0x5ac500
// 005bd295  6800c2c000           push 0xc0c200
// 005bd29a  e8f143e4ff           call 0x401690
// 005bd29f  83c408               add esp, 8
// 005bd2a2  e929e1feff           jmp 0x5ab3d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

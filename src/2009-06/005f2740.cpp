// roc 2009-06 005f2740  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f2740
//
// 005f2740  68e0a15e00           push 0x5ea1e0
// 005f2745  68c449a400           push 0xa449c4
// 005f274a  e8c1efe0ff           call 0x401710
// 005f274f  83c408               add esp, 8
// 005f2752  e96972ffff           jmp 0x5e99c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

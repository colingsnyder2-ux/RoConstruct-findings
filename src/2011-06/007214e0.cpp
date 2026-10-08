// roc 2011-06 007214e0  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007214e0
//
// 007214e0  6850147200           push 0x721450
// 007214e5  680c40cd00           push 0xcd400c
// 007214ea  e82101ceff           call 0x401610
// 007214ef  83c408               add esp, 8
// 007214f2  e9e9feffff           jmp 0x7213e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

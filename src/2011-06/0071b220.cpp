// roc 2011-06 0071b220  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071b220
//
// 0071b220  6810b27100           push 0x71b210
// 0071b225  68f839cd00           push 0xcd39f8
// 0071b22a  e8e163ceff           call 0x401610
// 0071b22f  83c408               add esp, 8
// 0071b232  e969ffffff           jmp 0x71b1a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

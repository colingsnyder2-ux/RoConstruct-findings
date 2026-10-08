// roc 2011-06 006a9040  unit: RBX::VGuiBase::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a9040
//
// 006a9040  68208e6a00           push 0x6a8e20
// 006a9045  685c00cd00           push 0xcd005c
// 006a904a  e8c185d5ff           call 0x401610
// 006a904f  83c408               add esp, 8
// 006a9052  e949fdffff           jmp 0x6a8da0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

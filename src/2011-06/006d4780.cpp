// roc 2011-06 006d4780  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d4780
//
// 006d4780  6850476d00           push 0x6d4750
// 006d4785  68ec15cd00           push 0xcd15ec
// 006d478a  e881ced2ff           call 0x401610
// 006d478f  83c408               add esp, 8
// 006d4792  e939ffffff           jmp 0x6d46d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

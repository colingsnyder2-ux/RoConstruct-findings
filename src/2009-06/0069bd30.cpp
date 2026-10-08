// roc 2009-06 0069bd30  unit: RBX::VFlagStand::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069bd30
//
// 0069bd30  6830a15e00           push 0x5ea130
// 0069bd35  689849a400           push 0xa44998
// 0069bd3a  e8d159d6ff           call 0x401710
// 0069bd3f  83c408               add esp, 8
// 0069bd42  e9a9d7f4ff           jmp 0x5e94f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

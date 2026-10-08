// roc 2009-06 0069bd50  unit: RBX::VFlagStandService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069bd50
//
// 0069bd50  6840a15e00           push 0x5ea140
// 0069bd55  689c49a400           push 0xa4499c
// 0069bd5a  e8b159d6ff           call 0x401710
// 0069bd5f  83c408               add esp, 8
// 0069bd62  e9f9d7f4ff           jmp 0x5e9560
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

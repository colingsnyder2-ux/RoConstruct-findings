// roc 2010-06 0067cae0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067cae0
//
// 0067cae0  68f00e4c00           push 0x4c0ef0
// 0067cae5  68d049c000           push 0xc049d0
// 0067caea  e8a14bd8ff           call 0x401690
// 0067caef  83c408               add esp, 8
// 0067caf2  e97936e4ff           jmp 0x4c0170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

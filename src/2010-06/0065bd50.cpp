// roc 2010-06 0065bd50  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065bd50
//
// 0065bd50  68f0ca4700           push 0x47caf0
// 0065bd55  681c30c000           push 0xc0301c
// 0065bd5a  e83159daff           call 0x401690
// 0065bd5f  83c408               add esp, 8
// 0065bd62  e92909e2ff           jmp 0x47c690
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

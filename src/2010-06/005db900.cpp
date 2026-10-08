// roc 2010-06 005db900  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005db900
//
// 005db900  68f0a14100           push 0x41a1f0
// 005db905  689807c000           push 0xc00798
// 005db90a  e8815de2ff           call 0x401690
// 005db90f  83c408               add esp, 8
// 005db912  e9a9e6e3ff           jmp 0x419fc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

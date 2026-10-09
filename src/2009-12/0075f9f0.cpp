// roc 2009-12 0075f9f0  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075f9f0
//
// 0075f9f0  68c0f97500           push 0x75f9c0
// 0075f9f5  685c7ab900           push 0xb97a5c
// 0075f9fa  e8311ccaff           call 0x401630
// 0075f9ff  83c408               add esp, 8
// 0075fa02  e939ffffff           jmp 0x75f940
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

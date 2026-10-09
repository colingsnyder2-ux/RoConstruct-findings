// roc 2009-12 0075f9d0  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075f9d0
//
// 0075f9d0  6830f97500           push 0x75f930
// 0075f9d5  68507ab900           push 0xb97a50
// 0075f9da  e8511ccaff           call 0x401630
// 0075f9df  83c408               add esp, 8
// 0075f9e2  e9d9feffff           jmp 0x75f8c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

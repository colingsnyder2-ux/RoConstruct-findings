// roc 2009-06 0064a7f0  unit: RBX::VTexture::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a7f0
//
// 0064a7f0  6800224300           push 0x432200
// 0064a7f5  6810a3a300           push 0xa3a310
// 0064a7fa  e8116fdbff           call 0x401710
// 0064a7ff  83c408               add esp, 8
// 0064a802  e9d96fdeff           jmp 0x4317e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

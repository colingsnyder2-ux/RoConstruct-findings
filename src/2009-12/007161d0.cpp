// roc 2009-12 007161d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007161d0
//
// 007161d0  6850597100           push 0x715950
// 007161d5  683856b900           push 0xb95638
// 007161da  e851b4ceff           call 0x401630
// 007161df  83c408               add esp, 8
// 007161e2  e9d9f5ffff           jmp 0x7157c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

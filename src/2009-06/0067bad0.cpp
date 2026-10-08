// roc 2009-06 0067bad0  unit: RBX::VWeld::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bad0
//
// 0067bad0  6810424e00           push 0x4e4210
// 0067bad5  68b0f2a300           push 0xa3f2b0
// 0067bada  e8315cd8ff           call 0x401710
// 0067badf  83c408               add esp, 8
// 0067bae2  e9e978e6ff           jmp 0x4e33d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

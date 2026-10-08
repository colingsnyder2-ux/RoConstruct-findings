// roc 2011-06 007eaec0  unit: RBX::GroupDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eaec0
//
// 007eaec0  6890ae7e00           push 0x7eae90
// 007eaec5  68005fcd00           push 0xcd5f00
// 007eaeca  e84167c1ff           call 0x401610
// 007eaecf  83c408               add esp, 8
// 007eaed2  e909ffffff           jmp 0x7eade0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

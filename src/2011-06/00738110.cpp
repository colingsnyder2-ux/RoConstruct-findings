// roc 2011-06 00738110  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00738110
//
// 00738110  68607f5e00           push 0x5e7f60
// 00738115  6890b5cc00           push 0xccb590
// 0073811a  e8f194ccff           call 0x401610
// 0073811f  83c408               add esp, 8
// 00738122  e9f9f1eaff           jmp 0x5e7320
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

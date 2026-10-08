// roc 2010-06 00647e60  unit: RBX::FillTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647e60
//
// 00647e60  68d0666400           push 0x6466d0
// 00647e65  6858b8c100           push 0xc1b858
// 00647e6a  e82198dbff           call 0x401690
// 00647e6f  83c408               add esp, 8
// 00647e72  e909dcffff           jmp 0x645a80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

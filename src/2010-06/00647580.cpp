// roc 2010-06 00647580  unit: RBX::InletTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647580
//
// 00647580  6840676400           push 0x646740
// 00647585  6874b8c100           push 0xc1b874
// 0064758a  e801a1dbff           call 0x401690
// 0064758f  83c408               add esp, 8
// 00647592  e9f9e7ffff           jmp 0x645d90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

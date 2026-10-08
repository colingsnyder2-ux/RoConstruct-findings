// roc 2010-06 00647d10  unit: RBX::LockTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647d10
//
// 00647d10  68c0676400           push 0x6467c0
// 00647d15  6894b8c100           push 0xc1b894
// 00647d1a  e87199dbff           call 0x401690
// 00647d1f  83c408               add esp, 8
// 00647d22  e9e9e3ffff           jmp 0x646110
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

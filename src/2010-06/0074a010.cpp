// roc 2010-06 0074a010  unit: RBX::CloneTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074a010
//
// 0074a010  6830686400           push 0x646830
// 0074a015  68b0b8c100           push 0xc1b8b0
// 0074a01a  e87176cbff           call 0x401690
// 0074a01f  83c408               add esp, 8
// 0074a022  e9f9c3efff           jmp 0x646420
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

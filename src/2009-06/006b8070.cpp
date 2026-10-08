// roc 2009-06 006b8070  unit: RBX::NewNullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8070
//
// 006b8070  68807f6b00           push 0x6b7f80
// 006b8075  6804fda400           push 0xa4fd04
// 006b807a  e89196d4ff           call 0x401710
// 006b807f  83c408               add esp, 8
// 006b8082  e9a9fdffff           jmp 0x6b7e30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

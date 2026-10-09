// roc 2009-12 00787b40  unit: RBX::NewNullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00787b40
//
// 00787b40  68507a7800           push 0x787a50
// 00787b45  68c088b900           push 0xb988c0
// 00787b4a  e8e19ac7ff           call 0x401630
// 00787b4f  83c408               add esp, 8
// 00787b52  e999fdffff           jmp 0x7878f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2012-06 00968d00  unit: RBX::LuaDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00968d00
//
// 00968d00  68d08c9600           push 0x968cd0
// 00968d05  681872e500           push 0xe57218
// 00968d0a  e89188a9ff           call 0x4015a0
// 00968d0f  83c408               add esp, 8
// 00968d12  e9a9fcffff           jmp 0x9689c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 00662e70  unit: RBX::Reflection::EnumDescriptor  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00662e70
//
// 00662e70  68602e6600           push 0x662e60
// 00662e75  681402b900           push 0xb90214
// 00662e7a  e8b1e7d9ff           call 0x401630
// 00662e7f  83c408               add esp, 8
// 00662e82  e979ffffff           jmp 0x662e00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

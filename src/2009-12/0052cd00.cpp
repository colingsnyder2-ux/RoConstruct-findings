// roc 2009-12 0052cd00  unit: RBX::VMessage::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052cd00
//
// 0052cd00  68b0be5200           push 0x52beb0
// 0052cd05  686801b800           push 0xb80168
// 0052cd0a  e82149edff           call 0x401630
// 0052cd0f  83c408               add esp, 8
// 0052cd12  e9f9edffff           jmp 0x52bb10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

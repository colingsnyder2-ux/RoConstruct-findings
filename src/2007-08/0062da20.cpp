// roc 2007-08 0062da20  unit: RBX::Freefall  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062da20
//
// 0062da20  6820838c00           push 0x8c8320
// 0062da25  6810da6200           push 0x62da10
// 0062da2a  e8f17a0f00           call 0x725520
// 0062da2f  83c408               add esp, 8
// 0062da32  e969ffffff           jmp 0x62d9a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

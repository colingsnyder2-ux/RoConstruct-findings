// roc 2007-08 005add00  unit: RBX::VLighting::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005add00
//
// 005add00  685ce98b00           push 0x8be95c
// 005add05  6840714a00           push 0x4a7140
// 005add0a  e811781700           call 0x725520
// 005add0f  83c408               add esp, 8
// 005add12  e9597aefff           jmp 0x4a5770
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

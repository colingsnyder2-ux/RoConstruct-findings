// roc 2011-06 0072ef10  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072ef10
//
// 0072ef10  68507f5e00           push 0x5e7f50
// 0072ef15  688cb5cc00           push 0xccb58c
// 0072ef1a  e8f126cdff           call 0x401610
// 0072ef1f  83c408               add esp, 8
// 0072ef22  e98983ebff           jmp 0x5e72b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2011-06 00450b90  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00450b90
//
// 00450b90  68b0b14000           push 0x40b1b0
// 00450b95  685017cb00           push 0xcb1750
// 00450b9a  e8710afbff           call 0x401610
// 00450b9f  83c408               add esp, 8
// 00450ba2  e94999fbff           jmp 0x40a4f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

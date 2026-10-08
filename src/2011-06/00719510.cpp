// roc 2011-06 00719510  unit: RBX::VNotificationBox::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00719510
//
// 00719510  6810155c00           push 0x5c1510
// 00719515  6850e6cb00           push 0xcbe650
// 0071951a  e8f180ceff           call 0x401610
// 0071951f  83c408               add esp, 8
// 00719522  e9d974eaff           jmp 0x5c0a00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

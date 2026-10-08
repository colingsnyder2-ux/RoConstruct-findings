// roc 2011-06 00690d90  unit: RBX::VPartInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00690d90
//
// 00690d90  68b00a6900           push 0x690ab0
// 00690d95  68c8f5cc00           push 0xccf5c8
// 00690d9a  e87108d7ff           call 0x401610
// 00690d9f  83c408               add esp, 8
// 00690da2  e979fcffff           jmp 0x690a20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

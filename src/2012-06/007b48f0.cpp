// roc 2012-06 007b48f0  unit: RBX::VPartInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b48f0
//
// 007b48f0  6850457b00           push 0x7b4550
// 007b48f5  686cafe400           push 0xe4af6c
// 007b48fa  e8a1ccc4ff           call 0x4015a0
// 007b48ff  83c408               add esp, 8
// 007b4902  e9c9fbffff           jmp 0x7b44d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2012-06 00789b60  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00789b60
//
// 00789b60  68e0cd4700           push 0x47cde0
// 00789b65  6808a6e100           push 0xe1a608
// 00789b6a  e8317ac7ff           call 0x4015a0
// 00789b6f  83c408               add esp, 8
// 00789b72  e94910cfff           jmp 0x47abc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

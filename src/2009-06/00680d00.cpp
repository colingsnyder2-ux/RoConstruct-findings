// roc 2009-06 00680d00  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00680d00
//
// 00680d00  68300c6800           push 0x680c30
// 00680d05  682ce6a400           push 0xa4e62c
// 00680d0a  e8010ad8ff           call 0x401710
// 00680d0f  83c408               add esp, 8
// 00680d12  e979feffff           jmp 0x680b90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

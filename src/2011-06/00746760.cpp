// roc 2011-06 00746760  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00746760
//
// 00746760  68105f7400           push 0x745f10
// 00746765  68ec4fcd00           push 0xcd4fec
// 0074676a  e8a1aecbff           call 0x401610
// 0074676f  83c408               add esp, 8
// 00746772  e9b9f5ffff           jmp 0x745d30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

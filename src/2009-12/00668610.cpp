// roc 2009-12 00668610  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00668610
//
// 00668610  6820666600           push 0x666620
// 00668615  68080ab900           push 0xb90a08
// 0066861a  e81190d9ff           call 0x401630
// 0066861f  83c408               add esp, 8
// 00668622  e969d4ffff           jmp 0x665a90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

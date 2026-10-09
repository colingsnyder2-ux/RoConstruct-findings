// roc 2009-12 00768cb0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00768cb0
//
// 00768cb0  6840666600           push 0x666640
// 00768cb5  68100ab900           push 0xb90a10
// 00768cba  e87189c9ff           call 0x401630
// 00768cbf  83c408               add esp, 8
// 00768cc2  e9a9ceefff           jmp 0x665b70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

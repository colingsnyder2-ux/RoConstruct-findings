// roc 2009-12 0045cfc0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045cfc0
//
// 0045cfc0  6830c14500           push 0x45c130
// 0045cfc5  683cb8b700           push 0xb7b83c
// 0045cfca  e86146faff           call 0x401630
// 0045cfcf  83c408               add esp, 8
// 0045cfd2  e9b9ebffff           jmp 0x45bb90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

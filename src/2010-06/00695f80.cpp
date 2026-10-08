// roc 2010-06 00695f80  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695f80
//
// 00695f80  6860576900           push 0x695760
// 00695f85  6894e6c100           push 0xc1e694
// 00695f8a  e801b7d6ff           call 0x401690
// 00695f8f  83c408               add esp, 8
// 00695f92  e999f5ffff           jmp 0x695530
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

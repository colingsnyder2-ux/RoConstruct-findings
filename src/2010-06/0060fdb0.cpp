// roc 2010-06 0060fdb0  unit: RBX::VScriptContext::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060fdb0
//
// 0060fdb0  68d06c4200           push 0x426cd0
// 0060fdb5  684c08c000           push 0xc0084c
// 0060fdba  e8d118dfff           call 0x401690
// 0060fdbf  83c408               add esp, 8
// 0060fdc2  e9996de1ff           jmp 0x426b60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

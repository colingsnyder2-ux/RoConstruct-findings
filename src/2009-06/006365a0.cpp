// roc 2009-06 006365a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006365a0
//
// 006365a0  68c05c4200           push 0x425cc0
// 006365a5  6838a2a300           push 0xa3a238
// 006365aa  e861b1dcff           call 0x401710
// 006365af  83c408               add esp, 8
// 006365b2  e999f5deff           jmp 0x425b50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

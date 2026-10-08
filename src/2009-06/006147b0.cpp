// roc 2009-06 006147b0  unit: RBX::VScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006147b0
//
// 006147b0  6830404100           push 0x414030
// 006147b5  68eca0a300           push 0xa3a0ec
// 006147ba  e851cfdeff           call 0x401710
// 006147bf  83c408               add esp, 8
// 006147c2  e9f9f4dfff           jmp 0x413cc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

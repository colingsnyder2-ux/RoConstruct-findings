// roc 2008-06 00586310  unit: RBX::VScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586310
//
// 00586310  6824cc9600           push 0x96cc24
// 00586315  68303a4100           push 0x413a30
// 0058631a  e81110fdff           call 0x557330
// 0058631f  83c408               add esp, 8
// 00586322  e999d3e8ff           jmp 0x4136c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

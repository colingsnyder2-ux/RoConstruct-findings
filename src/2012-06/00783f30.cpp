// roc 2012-06 00783f30  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783f30
//
// 00783f30  6810227600           push 0x762210
// 00783f35  685073e300           push 0xe37350
// 00783f3a  e861d6c7ff           call 0x4015a0
// 00783f3f  83c408               add esp, 8
// 00783f42  e969e2fdff           jmp 0x7621b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2012-06 00739e90  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00739e90
//
// 00739e90  6890997300           push 0x739990
// 00739e95  68b047e300           push 0xe347b0
// 00739e9a  e80177ccff           call 0x4015a0
// 00739e9f  83c408               add esp, 8
// 00739ea2  e949f9ffff           jmp 0x7397f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

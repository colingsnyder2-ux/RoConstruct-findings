// roc 2009-12 00742b10  unit: RBX::VMotorFeature::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00742b10
//
// 00742b10  6820996400           push 0x649920
// 00742b15  68dc5fb800           push 0xb85fdc
// 00742b1a  e811ebcbff           call 0x401630
// 00742b1f  83c408               add esp, 8
// 00742b22  e99958f0ff           jmp 0x6483c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

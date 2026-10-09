// roc 2009-12 004507f0  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004507f0
//
// 004507f0  68f0924400           push 0x4492f0
// 004507f5  6810aeb700           push 0xb7ae10
// 004507fa  e8310efbff           call 0x401630
// 004507ff  83c408               add esp, 8
// 00450802  e9898affff           jmp 0x449290
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

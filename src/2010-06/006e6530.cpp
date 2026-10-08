// roc 2010-06 006e6530  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e6530
//
// 006e6530  68e0646e00           push 0x6e64e0
// 006e6535  682413c200           push 0xc21324
// 006e653a  e851b1d1ff           call 0x401690
// 006e653f  83c408               add esp, 8
// 006e6542  e919ffffff           jmp 0x6e6460
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

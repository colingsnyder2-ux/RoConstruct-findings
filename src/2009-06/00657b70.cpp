// roc 2009-06 00657b70  unit: N::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00657b70
//
// 00657b70  68607b6500           push 0x657b60
// 00657b75  6844caa400           push 0xa4ca44
// 00657b7a  e8919bdaff           call 0x401710
// 00657b7f  83c408               add esp, 8
// 00657b82  e969ffffff           jmp 0x657af0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

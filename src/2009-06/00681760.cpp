// roc 2009-06 00681760  unit: RBX::VSky::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00681760
//
// 00681760  68605d5200           push 0x525d60
// 00681765  681419a400           push 0xa41914
// 0068176a  e8a1ffd7ff           call 0x401710
// 0068176f  83c408               add esp, 8
// 00681772  e98942eaff           jmp 0x525a00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2010-06 00451990  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00451990
//
// 00451990  6830aa4400           push 0x44aa30
// 00451995  68d013c000           push 0xc013d0
// 0045199a  e8f1fcfaff           call 0x401690
// 0045199f  83c408               add esp, 8
// 004519a2  e92990ffff           jmp 0x44a9d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-12 00450810  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00450810
//
// 00450810  6860934400           push 0x449360
// 00450815  6814aeb700           push 0xb7ae14
// 0045081a  e8110efbff           call 0x401630
// 0045081f  83c408               add esp, 8
// 00450822  e9d98affff           jmp 0x449300
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

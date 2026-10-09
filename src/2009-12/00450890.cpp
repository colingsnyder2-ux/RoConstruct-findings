// roc 2009-12 00450890  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00450890
//
// 00450890  6820954400           push 0x449520
// 00450895  6824aeb700           push 0xb7ae24
// 0045089a  e8910dfbff           call 0x401630
// 0045089f  83c408               add esp, 8
// 004508a2  e9198cffff           jmp 0x4494c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

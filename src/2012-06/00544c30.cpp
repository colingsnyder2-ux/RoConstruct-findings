// roc 2012-06 00544c30  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00544c30
//
// 00544c30  6880734100           push 0x417380
// 00544c35  68187ee100           push 0xe17e18
// 00544c3a  e861c9ebff           call 0x4015a0
// 00544c3f  83c408               add esp, 8
// 00544c42  e94923edff           jmp 0x416f90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

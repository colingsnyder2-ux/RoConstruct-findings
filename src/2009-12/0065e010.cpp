// roc 2009-12 0065e010  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065e010
//
// 0065e010  68d0f96200           push 0x62f9d0
// 0065e015  681044b800           push 0xb84410
// 0065e01a  e81136daff           call 0x401630
// 0065e01f  83c408               add esp, 8
// 0065e022  e94919fdff           jmp 0x62f970
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

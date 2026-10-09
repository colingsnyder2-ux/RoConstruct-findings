// roc 2009-12 00742af0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00742af0
//
// 00742af0  68a0227400           push 0x7422a0
// 00742af5  68d46cb900           push 0xb96cd4
// 00742afa  e831ebcbff           call 0x401630
// 00742aff  83c408               add esp, 8
// 00742b02  e9e9f0ffff           jmp 0x741bf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2011-06 0064a8a0  unit: RBX::VGameBasicSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064a8a0
//
// 0064a8a0  68a0254300           push 0x4325a0
// 0064a8a5  681427cb00           push 0xcb2714
// 0064a8aa  e8616ddbff           call 0x401610
// 0064a8af  83c408               add esp, 8
// 0064a8b2  e93967deff           jmp 0x430ff0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

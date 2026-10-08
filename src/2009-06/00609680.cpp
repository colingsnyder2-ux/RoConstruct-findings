// roc 2009-06 00609680  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609680
//
// 00609680  6870966000           push 0x609670
// 00609685  68f8afa400           push 0xa4aff8
// 0060968a  e88180dfff           call 0x401710
// 0060968f  83c408               add esp, 8
// 00609692  e969ffffff           jmp 0x609600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

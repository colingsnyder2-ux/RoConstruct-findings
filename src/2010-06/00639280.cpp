// roc 2010-06 00639280  unit: RBX::VPVInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00639280
//
// 00639280  68f07c6300           push 0x637cf0
// 00639285  6800b5c100           push 0xc1b500
// 0063928a  e80184dcff           call 0x401690
// 0063928f  83c408               add esp, 8
// 00639292  e9c9ddffff           jmp 0x637060
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

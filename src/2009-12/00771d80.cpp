// roc 2009-12 00771d80  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00771d80
//
// 00771d80  68701d7700           push 0x771d70
// 00771d85  685882b900           push 0xb98258
// 00771d8a  e8a1f8c8ff           call 0x401630
// 00771d8f  83c408               add esp, 8
// 00771d92  e949ffffff           jmp 0x771ce0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

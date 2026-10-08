// roc 2009-06 00658b30  unit: RBX::VControllerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00658b30
//
// 00658b30  68f0b34500           push 0x45b3f0
// 00658b35  68f4b4a300           push 0xa3b4f4
// 00658b3a  e8d18bdaff           call 0x401710
// 00658b3f  83c408               add esp, 8
// 00658b42  e98918e0ff           jmp 0x45a3d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

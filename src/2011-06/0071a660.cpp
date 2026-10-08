// roc 2011-06 0071a660  unit: RBX::VGuiMain::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071a660
//
// 0071a660  6830155c00           push 0x5c1530
// 0071a665  6858e6cb00           push 0xcbe658
// 0071a66a  e8a16fceff           call 0x401610
// 0071a66f  83c408               add esp, 8
// 0071a672  e96964eaff           jmp 0x5c0ae0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

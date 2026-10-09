// roc 2009-12 00657770  unit: RBX::VLocalBackpackSwitcher::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00657770
//
// 00657770  68409a6400           push 0x649a40
// 00657775  682460b800           push 0xb86024
// 0065777a  e8b19edaff           call 0x401630
// 0065777f  83c408               add esp, 8
// 00657782  e91914ffff           jmp 0x648ba0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2011-06 0060e390  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060e390
//
// 0060e390  68805e4100           push 0x415e80
// 0060e395  682423cb00           push 0xcb2324
// 0060e39a  e87132dfff           call 0x401610
// 0060e39f  83c408               add esp, 8
// 0060e3a2  e9b978e0ff           jmp 0x415c60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

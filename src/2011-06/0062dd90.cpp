// roc 2011-06 0062dd90  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062dd90
//
// 0062dd90  68b0b84100           push 0x41b8b0
// 0062dd95  68dc23cb00           push 0xcb23dc
// 0062dd9a  e87138ddff           call 0x401610
// 0062dd9f  83c408               add esp, 8
// 0062dda2  e999d9deff           jmp 0x41b740
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

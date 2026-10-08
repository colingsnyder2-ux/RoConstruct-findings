// roc 2011-06 0062ebc0  unit: RBX::VHopperBin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062ebc0
//
// 0062ebc0  6890b84100           push 0x41b890
// 0062ebc5  68d423cb00           push 0xcb23d4
// 0062ebca  e8412addff           call 0x401610
// 0062ebcf  83c408               add esp, 8
// 0062ebd2  e989cadeff           jmp 0x41b660
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2011-06 00663760  unit: RBX::VCoreScript::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00663760
//
// 00663760  6850376600           push 0x663750
// 00663765  6860dbcc00           push 0xccdb60
// 0066376a  e8a1ded9ff           call 0x401610
// 0066376f  83c408               add esp, 8
// 00663772  e959ffffff           jmp 0x6636d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2011-06 0071c500  unit: RBX::VLuaDragger::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071c500
//
// 0071c500  6860155c00           push 0x5c1560
// 0071c505  6864e6cb00           push 0xcbe664
// 0071c50a  e80151ceff           call 0x401610
// 0071c50f  83c408               add esp, 8
// 0071c512  e91947eaff           jmp 0x5c0c30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

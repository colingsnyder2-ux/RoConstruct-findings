// roc 2011-06 00719de0  unit: RBX::VScreenGui::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00719de0
//
// 00719de0  6820155c00           push 0x5c1520
// 00719de5  6854e6cb00           push 0xcbe654
// 00719dea  e82178ceff           call 0x401610
// 00719def  83c408               add esp, 8
// 00719df2  e9796ceaff           jmp 0x5c0a70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

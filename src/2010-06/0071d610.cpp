// roc 2010-06 0071d610  unit: RBX::VScriptMouseCommand::?$Named  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071d610
//
// 0071d610  68d0d57100           push 0x71d5d0
// 0071d615  68b429c200           push 0xc229b4
// 0071d61a  e87140ceff           call 0x401690
// 0071d61f  83c408               add esp, 8
// 0071d622  e939ffffff           jmp 0x71d560
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

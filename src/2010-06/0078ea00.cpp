// roc 2010-06 0078ea00  unit: RBX::LuaDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078ea00
//
// 0078ea00  68d0e97800           push 0x78e9d0
// 0078ea05  68cc36c200           push 0xc236cc
// 0078ea0a  e8812cc7ff           call 0x401690
// 0078ea0f  83c408               add esp, 8
// 0078ea12  e9b9fdffff           jmp 0x78e7d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

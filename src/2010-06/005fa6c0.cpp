// roc 2010-06 005fa6c0  unit: RBX::VTool::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fa6c0
//
// 005fa6c0  6860764100           push 0x417660
// 005fa6c5  685407c000           push 0xc00754
// 005fa6ca  e8c16fe0ff           call 0x401690
// 005fa6cf  83c408               add esp, 8
// 005fa6d2  e9d9cee1ff           jmp 0x4175b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2009-06 00627d30  unit: RBX::VTool::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00627d30
//
// 00627d30  6860734100           push 0x417360
// 00627d35  6868a1a300           push 0xa3a168
// 00627d3a  e8d199ddff           call 0x401710
// 00627d3f  83c408               add esp, 8
// 00627d42  e969f5deff           jmp 0x4172b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

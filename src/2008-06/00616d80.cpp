// roc 2008-06 00616d80  unit: RBX::BoxSelectCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00616d80
//
// 00616d80  68fcbe9700           push 0x97befc
// 00616d85  68a0626100           push 0x6162a0
// 00616d8a  e8a105f4ff           call 0x557330
// 00616d8f  83c408               add esp, 8
// 00616d92  e939f4ffff           jmp 0x6161d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

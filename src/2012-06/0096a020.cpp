// roc 2012-06 0096a020  unit: RBX::PartDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096a020
//
// 0096a020  68d09b9600           push 0x969bd0
// 0096a025  684872e500           push 0xe57248
// 0096a02a  e87175a9ff           call 0x4015a0
// 0096a02f  83c408               add esp, 8
// 0096a032  e929fbffff           jmp 0x969b60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2010-06 0078f380  unit: RBX::GroupDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f380
//
// 0078f380  68d0ee7800           push 0x78eed0
// 0078f385  68e436c200           push 0xc236e4
// 0078f38a  e80123c7ff           call 0x401690
// 0078f38f  83c408               add esp, 8
// 0078f392  e9c9faffff           jmp 0x78ee60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

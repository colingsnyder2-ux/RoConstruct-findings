// roc 2011-06 0078ca40  unit: RBX::NullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078ca40
//
// 0078ca40  6870627800           push 0x786270
// 0078ca45  684054cd00           push 0xcd5440
// 0078ca4a  e8c14bc7ff           call 0x401610
// 0078ca4f  83c408               add esp, 8
// 0078ca52  e9b992ffff           jmp 0x785d10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

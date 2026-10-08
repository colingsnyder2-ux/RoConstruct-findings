// roc 2007-08 00594740  unit: RBX::StudsTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594740
//
// 00594740  68c84d8c00           push 0x8c4dc8
// 00594745  68f03c5900           push 0x593cf0
// 0059474a  e8d10d1900           call 0x725520
// 0059474f  83c408               add esp, 8
// 00594752  e969ecffff           jmp 0x5933c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

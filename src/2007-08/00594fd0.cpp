// roc 2007-08 00594fd0  unit: RBX::LockTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594fd0
//
// 00594fd0  68e84d8c00           push 0x8c4de8
// 00594fd5  68703d5900           push 0x593d70
// 00594fda  e841051900           call 0x725520
// 00594fdf  83c408               add esp, 8
// 00594fe2  e959e7ffff           jmp 0x593740
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

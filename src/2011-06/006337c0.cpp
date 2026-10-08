// roc 2011-06 006337c0  unit: RBX::VTool::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006337c0
//
// 006337c0  68d0b84100           push 0x41b8d0
// 006337c5  68e423cb00           push 0xcb23e4
// 006337ca  e841dedcff           call 0x401610
// 006337cf  83c408               add esp, 8
// 006337d2  e94980deff           jmp 0x41b820
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

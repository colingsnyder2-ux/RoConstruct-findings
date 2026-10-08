// roc 2007-03 00584920  unit: seg_00580000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00584920
//
// 00584920  68885e8b00           push 0x8b5e88
// 00584925  68e0964300           push 0x4396e0
// 0058492a  e8211f1a00           call 0x726850
// 0058492f  83c408               add esp, 8
// 00584932  e94945ebff           jmp 0x438e80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2007-03 0059d9e0  unit: seg_00590000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059d9e0
//
// 0059d9e0  6848e98b00           push 0x8be948
// 0059d9e5  6850cf5900           push 0x59cf50
// 0059d9ea  e8618e1800           call 0x726850
// 0059d9ef  83c408               add esp, 8
// 0059d9f2  e9e9f4ffff           jmp 0x59cee0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

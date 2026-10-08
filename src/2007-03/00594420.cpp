// roc 2007-03 00594420  unit: seg_00590000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00594420
//
// 00594420  68a8668b00           push 0x8b66a8
// 00594425  68c0164600           push 0x4616c0
// 0059442a  e821241900           call 0x726850
// 0059442f  83c408               add esp, 8
// 00594432  e949c9ecff           jmp 0x460d80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

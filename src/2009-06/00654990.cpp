// roc 2009-06 00654990  unit: RBX::OscillateMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00654990
//
// 00654990  68d0346500           push 0x6534d0
// 00654995  6884c7a400           push 0xa4c784
// 0065499a  e871cddaff           call 0x401710
// 0065499f  83c408               add esp, 8
// 006549a2  e949e3ffff           jmp 0x652cf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

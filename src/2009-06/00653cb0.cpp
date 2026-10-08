// roc 2009-06 00653cb0  unit: RBX::PlasticTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00653cb0
//
// 00653cb0  6820346500           push 0x653420
// 00653cb5  6858c7a400           push 0xa4c758
// 00653cba  e851dadaff           call 0x401710
// 00653cbf  83c408               add esp, 8
// 00653cc2  e959ebffff           jmp 0x652820
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

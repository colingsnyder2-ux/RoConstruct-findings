// roc 2009-06 00653dd0  unit: RBX::WoodTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00653dd0
//
// 00653dd0  6830346500           push 0x653430
// 00653dd5  685cc7a400           push 0xa4c75c
// 00653dda  e831d9daff           call 0x401710
// 00653ddf  83c408               add esp, 8
// 00653de2  e9a9eaffff           jmp 0x652890
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

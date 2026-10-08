// roc 2007-08 00453fc0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00453fc0
//
// 00453fc0  6810bf8b00           push 0x8bbf10
// 00453fc5  6880394500           push 0x453980
// 00453fca  e851152d00           call 0x725520
// 00453fcf  83c408               add esp, 8
// 00453fd2  e969f5ffff           jmp 0x453540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2010-06 00622c10  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622c10
//
// 00622c10  68504a4300           push 0x434a50
// 00622c15  683009c000           push 0xc00930
// 00622c1a  e871eaddff           call 0x401690
// 00622c1f  83c408               add esp, 8
// 00622c22  e99917e1ff           jmp 0x4343c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

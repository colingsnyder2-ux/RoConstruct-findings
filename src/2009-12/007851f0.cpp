// roc 2009-12 007851f0  unit: RBX::VScriptMouseCommand::?$Named  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007851f0
//
// 007851f0  68b0517800           push 0x7851b0
// 007851f5  687888b900           push 0xb98878
// 007851fa  e831c4c7ff           call 0x401630
// 007851ff  83c408               add esp, 8
// 00785202  e939ffffff           jmp 0x785140
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

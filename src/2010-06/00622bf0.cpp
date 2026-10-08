// roc 2010-06 00622bf0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622bf0
//
// 00622bf0  68404a4300           push 0x434a40
// 00622bf5  682c09c000           push 0xc0092c
// 00622bfa  e891eaddff           call 0x401690
// 00622bff  83c408               add esp, 8
// 00622c02  e94917e1ff           jmp 0x434350
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

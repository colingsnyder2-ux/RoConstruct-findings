// roc 2007-08 005981f0  unit: RBX::VControllerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005981f0
//
// 005981f0  68ccbf8b00           push 0x8bbfcc
// 005981f5  6860864500           push 0x458660
// 005981fa  e821d31800           call 0x725520
// 005981ff  83c408               add esp, 8
// 00598202  e9e9feebff           jmp 0x4580f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

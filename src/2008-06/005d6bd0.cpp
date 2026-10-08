// roc 2008-06 005d6bd0  unit: RBX::VTimerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6bd0
//
// 005d6bd0  68e4fb9600           push 0x96fbe4
// 005d6bd5  6850ab4800           push 0x48ab50
// 005d6bda  e85107f8ff           call 0x557330
// 005d6bdf  83c408               add esp, 8
// 005d6be2  e96936ebff           jmp 0x48a250
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2008-06 005cada0  unit: RBX::VControllerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cada0
//
// 005cada0  6888de9600           push 0x96de88
// 005cada5  68d0b64500           push 0x45b6d0
// 005cadaa  e881c5f8ff           call 0x557330
// 005cadaf  83c408               add esp, 8
// 005cadb2  e9a903e9ff           jmp 0x45b160
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

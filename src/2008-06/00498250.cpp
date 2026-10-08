// roc 2008-06 00498250  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498250
//
// 00498250  68e4cb9600           push 0x96cbe4
// 00498255  6890184100           push 0x411890
// 0049825a  e8d1f00b00           call 0x557330
// 0049825f  83c408               add esp, 8
// 00498262  e9b991f7ff           jmp 0x411420
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

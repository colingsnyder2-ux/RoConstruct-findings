// roc 2010-06 0069f860  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f860
//
// 0069f860  6890f76900           push 0x69f790
// 0069f865  68c8eec100           push 0xc1eec8
// 0069f86a  e8211ed6ff           call 0x401690
// 0069f86f  83c408               add esp, 8
// 0069f872  e9a9feffff           jmp 0x69f720
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

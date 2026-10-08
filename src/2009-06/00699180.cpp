// roc 2009-06 00699180  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00699180
//
// 00699180  68008a6900           push 0x698a00
// 00699185  6868f5a400           push 0xa4f568
// 0069918a  e88185d6ff           call 0x401710
// 0069918f  83c408               add esp, 8
// 00699192  e9d9f1ffff           jmp 0x698370
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

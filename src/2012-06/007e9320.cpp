// roc 2012-06 007e9320  unit: RBX::VGuiBase::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e9320
//
// 007e9320  6850907e00           push 0x7e9050
// 007e9325  68a4eae400           push 0xe4eaa4
// 007e932a  e87182c1ff           call 0x4015a0
// 007e932f  83c408               add esp, 8
// 007e9332  e9a9fcffff           jmp 0x7e8fe0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

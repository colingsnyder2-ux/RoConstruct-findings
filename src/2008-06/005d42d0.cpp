// roc 2008-06 005d42d0  unit: RBX::VSkin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d42d0
//
// 005d42d0  68dcfb9600           push 0x96fbdc
// 005d42d5  6830ab4800           push 0x48ab30
// 005d42da  e85130f8ff           call 0x557330
// 005d42df  83c408               add esp, 8
// 005d42e2  e9895eebff           jmp 0x48a170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

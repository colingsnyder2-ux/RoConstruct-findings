// roc 2008-06 00568eb0  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568eb0
//
// 00568eb0  688c4a9700           push 0x974a8c
// 00568eb5  68a08e5600           push 0x568ea0
// 00568eba  e871e4feff           call 0x557330
// 00568ebf  83c408               add esp, 8
// 00568ec2  e929ffffff           jmp 0x568df0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

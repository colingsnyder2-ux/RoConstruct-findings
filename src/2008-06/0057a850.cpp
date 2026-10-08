// roc 2008-06 0057a850  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057a850
//
// 0057a850  68ecd09600           push 0x96d0ec
// 0057a855  68a0fc4100           push 0x41fca0
// 0057a85a  e8d1cafdff           call 0x557330
// 0057a85f  83c408               add esp, 8
// 0057a862  e9c951eaff           jmp 0x41fa30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

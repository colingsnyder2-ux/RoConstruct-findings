// roc 2008-06 00568740  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568740
//
// 00568740  68804a9700           push 0x974a80
// 00568745  68f0855600           push 0x5685f0
// 0056874a  e8e1ebfeff           call 0x557330
// 0056874f  83c408               add esp, 8
// 00568752  e929feffff           jmp 0x568580
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

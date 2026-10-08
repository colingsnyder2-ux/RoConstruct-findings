// roc 2011-06 00646400  unit: RBX::VPlayerGui::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00646400
//
// 00646400  68b0254300           push 0x4325b0
// 00646405  681827cb00           push 0xcb2718
// 0064640a  e801b2dbff           call 0x401610
// 0064640f  83c408               add esp, 8
// 00646412  e949acdeff           jmp 0x431060
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

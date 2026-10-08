// roc 2011-06 0061c0e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061c0e0
//
// 0061c0e0  6820804100           push 0x418020
// 0061c0e5  685023cb00           push 0xcb2350
// 0061c0ea  e82155deff           call 0x401610
// 0061c0ef  83c408               add esp, 8
// 0061c0f2  e989bbdfff           jmp 0x417c80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

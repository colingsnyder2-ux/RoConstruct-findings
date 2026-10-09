// roc 2009-12 006fc450  unit: RBX::VPlayerGui::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fc450
//
// 006fc450  6890684f00           push 0x4f6890
// 006fc455  6858deb700           push 0xb7de58
// 006fc45a  e8d151d0ff           call 0x401630
// 006fc45f  83c408               add esp, 8
// 006fc462  e99993dfff           jmp 0x4f5800
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

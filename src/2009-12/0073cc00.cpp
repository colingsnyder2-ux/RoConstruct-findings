// roc 2009-12 0073cc00  unit: RBX::VBillboardGui::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073cc00
//
// 0073cc00  68c0986400           push 0x6498c0
// 0073cc05  68c45fb800           push 0xb85fc4
// 0073cc0a  e8214accff           call 0x401630
// 0073cc0f  83c408               add esp, 8
// 0073cc12  e909b5f0ff           jmp 0x648120
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

// roc 2012-06 0073ac60  unit: RBX::VBasePlayerGui::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073ac60
//
// 0073ac60  68607d4300           push 0x437d60
// 0073ac65  681c89e100           push 0xe1891c
// 0073ac6a  e83169ccff           call 0x4015a0
// 0073ac6f  83c408               add esp, 8
// 0073ac72  e909b5cfff           jmp 0x436180
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

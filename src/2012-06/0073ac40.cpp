// roc 2012-06 0073ac40  unit: RBX::VBasePlayerGui::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073ac40
//
// 0073ac40  68d0d05100           push 0x51d0d0
// 0073ac45  6840e1e100           push 0xe1e140
// 0073ac4a  e85169ccff           call 0x4015a0
// 0073ac4f  83c408               add esp, 8
// 0073ac52  e9e909deff           jmp 0x51b640
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

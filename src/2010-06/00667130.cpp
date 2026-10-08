// roc 2010-06 00667130  unit: RBX::VPlayerGui::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00667130
//
// 00667130  6860d15c00           push 0x5cd160
// 00667135  683491c100           push 0xc19134
// 0066713a  e851a5d9ff           call 0x401690
// 0066713f  83c408               add esp, 8
// 00667142  e94957f6ff           jmp 0x5cc890
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

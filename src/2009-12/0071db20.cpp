// roc 2009-12 0071db20  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071db20
//
// 0071db20  6850da7100           push 0x71da50
// 0071db25  68845ab900           push 0xb95a84
// 0071db2a  e8013bceff           call 0x401630
// 0071db2f  83c408               add esp, 8
// 0071db32  e9a9feffff           jmp 0x71d9e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

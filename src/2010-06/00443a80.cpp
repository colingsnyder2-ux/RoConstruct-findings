// roc 2010-06 00443a80  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00443a80
//
// 00443a80  6890954000           push 0x409590
// 00443a85  68b0fbbf00           push 0xbffbb0
// 00443a8a  e801dcfbff           call 0x401690
// 00443a8f  83c408               add esp, 8
// 00443a92  e99955fcff           jmp 0x409030
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

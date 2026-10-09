// roc 2009-12 0052e640  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052e640
//
// 0052e640  68103a5100           push 0x513a10
// 0052e645  682ce9b700           push 0xb7e92c
// 0052e64a  e8e12fedff           call 0x401630
// 0052e64f  83c408               add esp, 8
// 0052e652  e97944feff           jmp 0x512ad0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

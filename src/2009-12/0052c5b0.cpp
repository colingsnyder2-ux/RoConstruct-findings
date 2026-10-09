// roc 2009-12 0052c5b0  unit: RBX::Network::VServer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052c5b0
//
// 0052c5b0  68203a5100           push 0x513a20
// 0052c5b5  6830e9b700           push 0xb7e930
// 0052c5ba  e87150edff           call 0x401630
// 0052c5bf  83c408               add esp, 8
// 0052c5c2  e97965feff           jmp 0x512b40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

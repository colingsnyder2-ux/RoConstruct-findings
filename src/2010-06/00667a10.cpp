// roc 2010-06 00667a10  unit: RBX::VPartInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00667a10
//
// 00667a10  68f0766600           push 0x6676f0
// 00667a15  680cccc100           push 0xc1cc0c
// 00667a1a  e8719cd9ff           call 0x401690
// 00667a1f  83c408               add esp, 8
// 00667a22  e939fcffff           jmp 0x667660
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp

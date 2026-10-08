// roc 2007-08 0058ae40  unit: RBX::VSoundChannel::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ae40
//
// 0058ae40  e80bf9ffff           call 0x58a750
// 0058ae45  e876f9ffff           call 0x58a7c0
// 0058ae4a  e991f8ffff           jmp 0x58a6e0
// library raknet-4.081/RakString.cpp (function ?FreeMemory@RakString@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD
// roc-lib: raknet-4.081 RakString.cpp

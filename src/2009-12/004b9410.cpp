// roc 2009-12 004b9410  unit: Ogre::RbxArchive  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004b9410
//
// 004b9410  c7410800000000       mov dword ptr [ecx + 8], 0
// 004b9417  c3                   ret 
// library raknet-4.081/BitStream.cpp (function ?ResetReadPointer@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: raknet-4.081 BitStream.cpp

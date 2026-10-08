// roc 2009-12 0044e2d0  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044e2d0
//
// 0044e2d0  c7410400000000       mov dword ptr [ecx + 4], 0
// 0044e2d7  c3                   ret 
// library ogre-1.6.4/OgreEntity.cpp (function ?notifyControlPointBufferDeallocated@PatchSurface@Ogre@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreEntity.cpp

// roc 2008-06 004e5b60  unit: RBX::RenderBase::AggregateChunk  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5b60
//
// 004e5b60  d9442404             fld dword ptr [esp + 4]
// 004e5b64  d95914               fstp dword ptr [ecx + 0x14]
// 004e5b67  c20400               ret 4
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?setMaximumZ@AxisAlignedBox@Ogre@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp

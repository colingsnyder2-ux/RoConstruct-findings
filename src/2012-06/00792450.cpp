// roc 2012-06 00792450  unit: RBX::SpecialShape  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00792450
//
// 00792450  33c0                 xor eax, eax
// 00792452  89410c               mov dword ptr [ecx + 0xc], eax
// 00792455  894110               mov dword ptr [ecx + 0x10], eax
// 00792458  c3                   ret 
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?flush@VertexCacheProfiler@Ogre@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp

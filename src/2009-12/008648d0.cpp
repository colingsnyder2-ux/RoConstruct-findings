// roc 2009-12 008648d0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008648d0
//
// 008648d0  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 008648d6  c3                   ret 
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?getSrcWidth@Texture@Ogre@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp

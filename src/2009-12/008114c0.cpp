// roc 2009-12 008114c0  unit: CXTPToolBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008114c0
//
// 008114c0  8b81dc000000         mov eax, dword ptr [ecx + 0xdc]
// 008114c6  c3                   ret 
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?getSrcHeight@Texture@Ogre@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp

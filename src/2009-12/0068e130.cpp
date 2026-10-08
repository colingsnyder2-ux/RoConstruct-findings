// roc 2009-12 0068e130  unit: RBX::RootInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068e130
//
// 0068e130  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 0068e136  c3                   ret 
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?getPassIterationCount@Pass@Ogre@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp

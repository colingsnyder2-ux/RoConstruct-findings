// roc 2009-12 004530d0  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004530d0
//
// 004530d0  8b442404             mov eax, dword ptr [esp + 4]
// 004530d4  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 004530da  c20400               ret 4
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?setUsage@Texture@Ogre@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp

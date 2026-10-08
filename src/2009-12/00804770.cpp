// roc 2009-12 00804770  unit: CXTPCommandBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804770
//
// 00804770  8b442404             mov eax, dword ptr [esp + 4]
// 00804774  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0080477a  c20400               ret 4
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?setTextureType@Texture@Ogre@@UAEXW4TextureType@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp

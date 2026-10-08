// roc 2009-12 00577270  unit: RBX::ViewRbxGfx  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00577270
//
// 00577270  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 00577276  c3                   ret 
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?getOnlyLightType@Pass@Ogre@@QBE?AW4LightTypes@Light@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp

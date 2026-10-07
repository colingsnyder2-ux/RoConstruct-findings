// roc 2009-06 005d39d0  unit: RBX::VSelection::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d39d0
//
// 005d39d0  8d442404             lea eax, [esp + 4]
// 005d39d4  50                   push eax
// 005d39d5  81c194000000         add ecx, 0x94
// 005d39db  e89003e6ff           call 0x433d70
// 005d39e0  c20400               ret 4
// library ogre-1.7.0/OgreRenderTarget.cpp (function ?addListener@RenderTarget@Ogre@@UAEXPAVRenderTargetListener@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreRenderTarget.cpp

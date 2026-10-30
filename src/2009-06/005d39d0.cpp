// from server: 100% by tester
// roc 2008-06 005a27c0  unit: RBX::Workspace  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a27c0
//
// 005a27c0  8d442404             lea eax, [esp + 4]
// 005a27c4  50                   push eax
// 005a27c5  81c194000000         add ecx, 0x94
// 005a27cb  e890770400           call 0x5e9f60
// 005a27d0  c20400               ret 4
// library ogre-1.7.0/OgreRenderTarget.cpp (function ?addListener@RenderTarget@Ogre@@UAEXPAVRenderTargetListener@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreRenderTarget.cpp

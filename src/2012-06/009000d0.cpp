// roc 2012-06 009000d0  unit: RBX::NormalBreakConnector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009000d0
//
// 009000d0  8a442404             mov al, byte ptr [esp + 4]
// 009000d4  888184000000         mov byte ptr [ecx + 0x84], al
// 009000da  c20400               ret 4
// library ogre-1.7.0/OgreRenderSystem.cpp (function ?setWaitForVerticalBlank@RenderSystem@Ogre@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreRenderSystem.cpp

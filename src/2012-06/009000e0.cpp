// roc 2012-06 009000e0  unit: RBX::NormalBreakConnector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009000e0
//
// 009000e0  8a442404             mov al, byte ptr [esp + 4]
// 009000e4  888185000000         mov byte ptr [ecx + 0x85], al
// 009000ea  c20400               ret 4
// library ogre-1.6.4/OgreRenderSystem.cpp (function ?setWBufferEnabled@RenderSystem@Ogre@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreRenderSystem.cpp

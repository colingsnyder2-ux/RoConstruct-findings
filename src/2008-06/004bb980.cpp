// roc 2008-06 004bb980  unit: ProfiledRakPeer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bb980
//
// 004bb980  8a442404             mov al, byte ptr [esp + 4]
// 004bb984  884106               mov byte ptr [ecx + 6], al
// 004bb987  c20400               ret 4
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?setShadowCastersCannotBeReceivers@RenderPriorityGroup@Ogre@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp

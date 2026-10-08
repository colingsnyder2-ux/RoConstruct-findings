// roc 2009-12 0081a2c0  unit: CInstanceRecord::CNameItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a2c0
//
// 0081a2c0  8b442404             mov eax, dword ptr [esp + 4]
// 0081a2c4  894130               mov dword ptr [ecx + 0x30], eax
// 0081a2c7  c20400               ret 4
// library ogre-1.6.4/OgreAnimationTrack.cpp (function ?setAssociatedNode@NodeAnimationTrack@Ogre@@UAEXPAVNode@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAnimationTrack.cpp

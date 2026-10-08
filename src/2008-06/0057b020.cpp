// roc 2008-06 0057b020  unit: RBX::DataModel  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b020
//
// 0057b020  8a442404             mov al, byte ptr [esp + 4]
// 0057b024  884168               mov byte ptr [ecx + 0x68], al
// 0057b027  c20400               ret 4
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?setBackgroundLoaded@Resource@Ogre@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp

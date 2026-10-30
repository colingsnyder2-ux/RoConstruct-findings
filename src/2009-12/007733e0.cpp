// roc 2009-12 007733e0  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007733e0
//
// 007733e0  8b442404             mov eax, dword ptr [esp + 4]
// 007733e4  894134               mov dword ptr [ecx + 0x34], eax
// 007733e7  c20400               ret 4
// library ogre-1.6.4/OgreAnimation.cpp (function ?setAssociatedVertexData@VertexAnimationTrack@Ogre@@QAEXPAVVertexData@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAnimation.cpp

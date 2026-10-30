// roc 2009-12 00845110  unit: RBX::VirtualHardwareDevice  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845110
//
// 00845110  8b442404             mov eax, dword ptr [esp + 4]
// 00845114  894138               mov dword ptr [ecx + 0x38], eax
// 00845117  c20400               ret 4
// library ogre-1.6.4/OgreAnimation.cpp (function ?setTargetMode@VertexAnimationTrack@Ogre@@QAEXW4TargetMode@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAnimation.cpp

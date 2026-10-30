// roc 2009-12 007229b0  unit: UString_sink::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007229b0
//
// 007229b0  8b442404             mov eax, dword ptr [esp + 4]
// 007229b4  894148               mov dword ptr [ecx + 0x48], eax
// 007229b7  c20400               ret 4
// library ogre-1.6.4/OgreAnimation.cpp (function ?setInterpolationMode@Animation@Ogre@@QAEXW4InterpolationMode@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAnimation.cpp

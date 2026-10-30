// roc 2009-12 008f4420  unit: CXTCaptionButtonThemeOfficeXP  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4420
//
// 008f4420  8b442404             mov eax, dword ptr [esp + 4]
// 008f4424  8981ac000000         mov dword ptr [ecx + 0xac], eax
// 008f442a  c20400               ret 4
// library ogre-1.6.4/OgrePass.cpp (function ?setManualCullingMode@Pass@Ogre@@QAEXW4ManualCullingMode@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgrePass.cpp

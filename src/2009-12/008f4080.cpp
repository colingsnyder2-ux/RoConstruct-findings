// roc 2009-12 008f4080  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4080
//
// 008f4080  8b442404             mov eax, dword ptr [esp + 4]
// 008f4084  89414c               mov dword ptr [ecx + 0x4c], eax
// 008f4087  c20400               ret 4
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?setQueryFlags@MovableObject@Ogre@@UAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp

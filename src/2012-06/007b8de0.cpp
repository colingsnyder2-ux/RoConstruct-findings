// roc 2012-06 007b8de0  unit: RBX::Geometry  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b8de0
//
// 007b8de0  8b442404             mov eax, dword ptr [esp + 4]
// 007b8de4  d900                 fld dword ptr [eax]
// 007b8de6  d95904               fstp dword ptr [ecx + 4]
// 007b8de9  d94004               fld dword ptr [eax + 4]
// 007b8dec  d95908               fstp dword ptr [ecx + 8]
// 007b8def  d94008               fld dword ptr [eax + 8]
// 007b8df2  d9590c               fstp dword ptr [ecx + 0xc]
// 007b8df5  c20400               ret 4
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?setCenter@Sphere@Ogre@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp

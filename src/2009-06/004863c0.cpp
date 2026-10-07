// roc 2009-06 004863c0  unit: Ogre::RbxMeshPartAdapter  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004863c0
//
// 004863c0  8b442404             mov eax, dword ptr [esp + 4]
// 004863c4  8b542408             mov edx, dword ptr [esp + 8]
// 004863c8  3bc2                 cmp eax, edx
// 004863ca  7416                 je 0x4863e2
// 004863cc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004863d0  d901                 fld dword ptr [ecx]
// 004863d2  83c008               add eax, 8
// 004863d5  d958f8               fstp dword ptr [eax - 8]
// 004863d8  d94104               fld dword ptr [ecx + 4]
// 004863db  d958fc               fstp dword ptr [eax - 4]
// 004863de  3bc2                 cmp eax, edx
// 004863e0  75ee                 jne 0x4863d0
// 004863e2  c3                   ret 
// library ogre-1.7.0/OgreShadowCameraSetupPlaneOptimal.cpp (function ??$_Fill@PAVVector2@Ogre@@V12@@std@@YAXPAVVector2@Ogre@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreShadowCameraSetupPlaneOptimal.cpp

// roc 2012-06 00623130  unit: RBX::WedgeBuilder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00623130
//
// 00623130  8b442404             mov eax, dword ptr [esp + 4]
// 00623134  8b542408             mov edx, dword ptr [esp + 8]
// 00623138  3bc2                 cmp eax, edx
// 0062313a  7416                 je 0x623152
// 0062313c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00623140  d901                 fld dword ptr [ecx]
// 00623142  83c008               add eax, 8
// 00623145  d958f8               fstp dword ptr [eax - 8]
// 00623148  d94104               fld dword ptr [ecx + 4]
// 0062314b  d958fc               fstp dword ptr [eax - 4]
// 0062314e  3bc2                 cmp eax, edx
// 00623150  75ee                 jne 0x623140
// 00623152  c3                   ret 
// library ogre-1.7.0/OgreShadowCameraSetupPlaneOptimal.cpp (function ??$_Fill@PAVVector2@Ogre@@V12@@std@@YAXPAVVector2@Ogre@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreShadowCameraSetupPlaneOptimal.cpp

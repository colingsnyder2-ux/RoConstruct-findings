// roc 2008-06 0067f7c0  unit: Ogre::RbxEntity  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067f7c0
//
// 0067f7c0  8b442404             mov eax, dword ptr [esp + 4]
// 0067f7c4  8b542408             mov edx, dword ptr [esp + 8]
// 0067f7c8  3bc2                 cmp eax, edx
// 0067f7ca  741c                 je 0x67f7e8
// 0067f7cc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067f7d0  d901                 fld dword ptr [ecx]
// 0067f7d2  83c00c               add eax, 0xc
// 0067f7d5  d958f4               fstp dword ptr [eax - 0xc]
// 0067f7d8  d94104               fld dword ptr [ecx + 4]
// 0067f7db  d958f8               fstp dword ptr [eax - 8]
// 0067f7de  d94108               fld dword ptr [ecx + 8]
// 0067f7e1  d958fc               fstp dword ptr [eax - 4]
// 0067f7e4  3bc2                 cmp eax, edx
// 0067f7e6  75e8                 jne 0x67f7d0
// 0067f7e8  c3                   ret 
// library ogre-1.7.0/OgreMeshSerializerImpl.cpp (function ??$_Fill@PAVVector3@Ogre@@V12@@std@@YAXPAVVector3@Ogre@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMeshSerializerImpl.cpp

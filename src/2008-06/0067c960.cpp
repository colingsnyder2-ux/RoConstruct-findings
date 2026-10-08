// roc 2008-06 0067c960  unit: Ogre::RbxEntity  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c960
//
// 0067c960  8b442404             mov eax, dword ptr [esp + 4]
// 0067c964  8b542408             mov edx, dword ptr [esp + 8]
// 0067c968  3bc2                 cmp eax, edx
// 0067c96a  742a                 je 0x67c996
// 0067c96c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067c970  83c008               add eax, 8
// 0067c973  56                   push esi
// 0067c974  d901                 fld dword ptr [ecx]
// 0067c976  83c010               add eax, 0x10
// 0067c979  d958e8               fstp dword ptr [eax - 0x18]
// 0067c97c  8d70f8               lea esi, [eax - 8]
// 0067c97f  d94104               fld dword ptr [ecx + 4]
// 0067c982  d958ec               fstp dword ptr [eax - 0x14]
// 0067c985  d94108               fld dword ptr [ecx + 8]
// 0067c988  d958f0               fstp dword ptr [eax - 0x10]
// 0067c98b  d9410c               fld dword ptr [ecx + 0xc]
// 0067c98e  d958f4               fstp dword ptr [eax - 0xc]
// 0067c991  3bf2                 cmp esi, edx
// 0067c993  75df                 jne 0x67c974
// 0067c995  5e                   pop esi
// 0067c996  c3                   ret 
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ??$fill@PAVVector4@Ogre@@V12@@std@@YAXPAVVector4@Ogre@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp

// roc 2009-06 004863f0  unit: Ogre::RbxMeshPartAdapter  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004863f0
//
// 004863f0  8b442404             mov eax, dword ptr [esp + 4]
// 004863f4  8b542408             mov edx, dword ptr [esp + 8]
// 004863f8  3bc2                 cmp eax, edx
// 004863fa  742a                 je 0x486426
// 004863fc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00486400  83c008               add eax, 8
// 00486403  56                   push esi
// 00486404  d901                 fld dword ptr [ecx]
// 00486406  83c010               add eax, 0x10
// 00486409  d958e8               fstp dword ptr [eax - 0x18]
// 0048640c  8d70f8               lea esi, [eax - 8]
// 0048640f  d94104               fld dword ptr [ecx + 4]
// 00486412  d958ec               fstp dword ptr [eax - 0x14]
// 00486415  d94108               fld dword ptr [ecx + 8]
// 00486418  d958f0               fstp dword ptr [eax - 0x10]
// 0048641b  d9410c               fld dword ptr [ecx + 0xc]
// 0048641e  d958f4               fstp dword ptr [eax - 0xc]
// 00486421  3bf2                 cmp esi, edx
// 00486423  75df                 jne 0x486404
// 00486425  5e                   pop esi
// 00486426  c3                   ret 
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ??$fill@PAVVector4@Ogre@@V12@@std@@YAXPAVVector4@Ogre@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp

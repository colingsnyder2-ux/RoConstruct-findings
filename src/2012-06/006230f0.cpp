// roc 2012-06 006230f0  unit: RBX::WedgeBuilder  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006230f0
//
// 006230f0  8b442404             mov eax, dword ptr [esp + 4]
// 006230f4  8b542408             mov edx, dword ptr [esp + 8]
// 006230f8  3bc2                 cmp eax, edx
// 006230fa  742a                 je 0x623126
// 006230fc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00623100  83c008               add eax, 8
// 00623103  56                   push esi
// 00623104  d901                 fld dword ptr [ecx]
// 00623106  83c010               add eax, 0x10
// 00623109  d958e8               fstp dword ptr [eax - 0x18]
// 0062310c  8d70f8               lea esi, [eax - 8]
// 0062310f  d94104               fld dword ptr [ecx + 4]
// 00623112  d958ec               fstp dword ptr [eax - 0x14]
// 00623115  d94108               fld dword ptr [ecx + 8]
// 00623118  d958f0               fstp dword ptr [eax - 0x10]
// 0062311b  d9410c               fld dword ptr [ecx + 0xc]
// 0062311e  d958f4               fstp dword ptr [eax - 0xc]
// 00623121  3bf2                 cmp esi, edx
// 00623123  75df                 jne 0x623104
// 00623125  5e                   pop esi
// 00623126  c3                   ret 
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ??$fill@PAVVector4@Ogre@@V12@@std@@YAXPAVVector4@Ogre@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp

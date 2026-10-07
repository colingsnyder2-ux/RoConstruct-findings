// roc 2009-06 0047b620  unit: Ogre::VRootManager::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047b620
//
// 0047b620  8b442404             mov eax, dword ptr [esp + 4]
// 0047b624  8b542408             mov edx, dword ptr [esp + 8]
// 0047b628  3bc2                 cmp eax, edx
// 0047b62a  741c                 je 0x47b648
// 0047b62c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047b630  d901                 fld dword ptr [ecx]
// 0047b632  83c00c               add eax, 0xc
// 0047b635  d958f4               fstp dword ptr [eax - 0xc]
// 0047b638  d94104               fld dword ptr [ecx + 4]
// 0047b63b  d958f8               fstp dword ptr [eax - 8]
// 0047b63e  d94108               fld dword ptr [ecx + 8]
// 0047b641  d958fc               fstp dword ptr [eax - 4]
// 0047b644  3bc2                 cmp eax, edx
// 0047b646  75e8                 jne 0x47b630
// 0047b648  c3                   ret 
// library ogre-1.7.0/OgreMeshSerializerImpl.cpp (function ??$_Fill@PAVVector3@Ogre@@V12@@std@@YAXPAVVector3@Ogre@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMeshSerializerImpl.cpp

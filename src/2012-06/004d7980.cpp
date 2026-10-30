// roc 2012-06 004d7980  unit: Ogre::RbxSceneManagerFactory  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004d7980
//
// 004d7980  8b442404             mov eax, dword ptr [esp + 4]
// 004d7984  8b542408             mov edx, dword ptr [esp + 8]
// 004d7988  3bc2                 cmp eax, edx
// 004d798a  741c                 je 0x4d79a8
// 004d798c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d7990  d901                 fld dword ptr [ecx]
// 004d7992  83c00c               add eax, 0xc
// 004d7995  d958f4               fstp dword ptr [eax - 0xc]
// 004d7998  d94104               fld dword ptr [ecx + 4]
// 004d799b  d958f8               fstp dword ptr [eax - 8]
// 004d799e  d94108               fld dword ptr [ecx + 8]
// 004d79a1  d958fc               fstp dword ptr [eax - 4]
// 004d79a4  3bc2                 cmp eax, edx
// 004d79a6  75e8                 jne 0x4d7990
// 004d79a8  c3                   ret 
// library ogre-1.7.0/OgreMeshSerializerImpl.cpp (function ??$_Fill@PAVVector3@Ogre@@V12@@std@@YAXPAVVector3@Ogre@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMeshSerializerImpl.cpp

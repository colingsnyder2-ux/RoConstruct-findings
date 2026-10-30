// roc 2012-06 004ec260  unit: Ogre::RbxSubEntity  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ec260
//
// 004ec260  51                   push ecx
// 004ec261  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004ec265  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ec269  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ec26d  56                   push esi
// 004ec26e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ec272  50                   push eax
// 004ec273  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ec277  51                   push ecx
// 004ec278  52                   push edx
// 004ec279  50                   push eax
// 004ec27a  6a02                 push 2
// 004ec27c  8bce                 mov ecx, esi
// 004ec27e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ec286  ff15242cb200         call dword ptr [0xb22c24]
// 004ec28c  8bc6                 mov eax, esi
// 004ec28e  5e                   pop esi
// 004ec28f  59                   pop ecx
// 004ec290  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ?create@ExceptionFactory@Ogre@@SA?AVInvalidParametersException@2@U?$ExceptionCodeType@$01@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PBDJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp

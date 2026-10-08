// roc 2008-06 0068ce30  unit: Ogre::RbxSceneManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068ce30
//
// 0068ce30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0068ce34  85c9                 test ecx, ecx
// 0068ce36  740e                 je 0x68ce46
// 0068ce38  8b01                 mov eax, dword ptr [ecx]
// 0068ce3a  8b10                 mov edx, dword ptr [eax]
// 0068ce3c  c744240401000000     mov dword ptr [esp + 4], 1
// 0068ce44  ffe2                 jmp edx
// 0068ce46  c20400               ret 4
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?destroyInstance@FileSystemArchiveFactory@Ogre@@UAEXPAVArchive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp

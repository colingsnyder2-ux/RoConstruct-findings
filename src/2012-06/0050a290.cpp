// roc 2012-06 0050a290  unit: VThreadLogManager::?$thread_specific_ptr::delete_data  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050a290
//
// 0050a290  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050a294  85c9                 test ecx, ecx
// 0050a296  740e                 je 0x50a2a6
// 0050a298  8b01                 mov eax, dword ptr [ecx]
// 0050a29a  8b10                 mov edx, dword ptr [eax]
// 0050a29c  c744240401000000     mov dword ptr [esp + 4], 1
// 0050a2a4  ffe2                 jmp edx
// 0050a2a6  c20400               ret 4
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?destroyInstance@FileSystemArchiveFactory@Ogre@@UAEXPAVArchive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp

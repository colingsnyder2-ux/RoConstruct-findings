// roc 2012-06 004eb3b0  unit: Ogre::RbxSceneNode  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004eb3b0
//
// 004eb3b0  51                   push ecx
// 004eb3b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004eb3b5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004eb3b9  8b542414             mov edx, dword ptr [esp + 0x14]
// 004eb3bd  56                   push esi
// 004eb3be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004eb3c2  50                   push eax
// 004eb3c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 004eb3c7  51                   push ecx
// 004eb3c8  52                   push edx
// 004eb3c9  50                   push eax
// 004eb3ca  6a07                 push 7
// 004eb3cc  8bce                 mov ecx, esi
// 004eb3ce  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004eb3d6  ff154035b200         call dword ptr [0xb23540]
// 004eb3dc  8bc6                 mov eax, esi
// 004eb3de  5e                   pop esi
// 004eb3df  59                   pop ecx
// 004eb3e0  c3                   ret 
// library ogre-1.7.0/OgreDataStream.cpp (function ?create@ExceptionFactory@Ogre@@SA?AVInternalErrorException@2@U?$ExceptionCodeType@$06@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PBDJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreDataStream.cpp

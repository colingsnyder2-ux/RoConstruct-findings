// roc 2008-06 00692550  unit: Ogre::RbxSceneManager  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00692550
//
// 00692550  51                   push ecx
// 00692551  53                   push ebx
// 00692552  33db                 xor ebx, ebx
// 00692554  895c2404             mov dword ptr [esp + 4], ebx
// 00692558  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069255c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00692560  56                   push esi
// 00692561  8b742410             mov esi, dword ptr [esp + 0x10]
// 00692565  885c2408             mov byte ptr [esp + 8], bl
// 00692569  8b442408             mov eax, dword ptr [esp + 8]
// 0069256d  50                   push eax
// 0069256e  51                   push ecx
// 0069256f  52                   push edx
// 00692570  8b542424             mov edx, dword ptr [esp + 0x24]
// 00692574  83ec14               sub esp, 0x14
// 00692577  8bc4                 mov eax, esp
// 00692579  8918                 mov dword ptr [eax], ebx
// 0069257b  895804               mov dword ptr [eax + 4], ebx
// 0069257e  895808               mov dword ptr [eax + 8], ebx
// 00692581  89580c               mov dword ptr [eax + 0xc], ebx
// 00692584  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00692588  89642428             mov dword ptr [esp + 0x28], esp
// 0069258c  894810               mov dword ptr [eax + 0x10], ecx
// 0069258f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00692593  52                   push edx
// 00692594  50                   push eax
// 00692595  56                   push esi
// 00692596  e8e5dfffff           call 0x690580
// 0069259b  8b442448             mov eax, dword ptr [esp + 0x48]
// 0069259f  83c42c               add esp, 0x2c
// 006925a2  3bc3                 cmp eax, ebx
// 006925a4  7409                 je 0x6925af
// 006925a6  50                   push eax
// 006925a7  e8cee00000           call 0x6a067a
// 006925ac  83c404               add esp, 4
// 006925af  8bc6                 mov eax, esi
// 006925b1  5e                   pop esi
// 006925b2  5b                   pop ebx
// 006925b3  59                   pop ecx
// 006925b4  c3                   ret 
// library ogre-1.6.4/OgreRenderQueueSortingGrouping.cpp (function ??$unchecked_copy@PAURenderablePass@Ogre@@V?$_Temp_iterator@URenderablePass@Ogre@@@std@@@stdext@@YA?AV?$_Temp_iterator@URenderablePass@Ogre@@@std@@PAURenderablePass@Ogre@@0V12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreRenderQueueSortingGrouping.cpp

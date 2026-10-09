// roc 2008-06 00694320  unit: Ogre::RbxSceneManager  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00694320
//
// 00694320  6aff                 push -1
// 00694322  6818e67d00           push 0x7de618
// 00694327  64a100000000         mov eax, dword ptr fs:[0]
// 0069432d  50                   push eax
// 0069432e  64892500000000       mov dword ptr fs:[0], esp
// 00694335  51                   push ecx
// 00694336  53                   push ebx
// 00694337  33db                 xor ebx, ebx
// 00694339  56                   push esi
// 0069433a  895c2408             mov dword ptr [esp + 8], ebx
// 0069433e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00694342  8b542444             mov edx, dword ptr [esp + 0x44]
// 00694346  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0069434a  885c2408             mov byte ptr [esp + 8], bl
// 0069434e  8b442408             mov eax, dword ptr [esp + 8]
// 00694352  50                   push eax
// 00694353  51                   push ecx
// 00694354  52                   push edx
// 00694355  8b542438             mov edx, dword ptr [esp + 0x38]
// 00694359  83ec14               sub esp, 0x14
// 0069435c  8bc4                 mov eax, esp
// 0069435e  8918                 mov dword ptr [eax], ebx
// 00694360  895804               mov dword ptr [eax + 4], ebx
// 00694363  895808               mov dword ptr [eax + 8], ebx
// 00694366  89580c               mov dword ptr [eax + 0xc], ebx
// 00694369  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0069436d  89642428             mov dword ptr [esp + 0x28], esp
// 00694371  52                   push edx
// 00694372  8b542444             mov edx, dword ptr [esp + 0x44]
// 00694376  894810               mov dword ptr [eax + 0x10], ecx
// 00694379  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0069437d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00694381  50                   push eax
// 00694382  51                   push ecx
// 00694383  52                   push edx
// 00694384  56                   push esi
// 00694385  895c2448             mov dword ptr [esp + 0x48], ebx
// 00694389  e8f2e4ffff           call 0x692880
// 0069438e  8b442464             mov eax, dword ptr [esp + 0x64]
// 00694392  83c434               add esp, 0x34
// 00694395  3bc3                 cmp eax, ebx
// 00694397  7409                 je 0x6943a2
// 00694399  50                   push eax
// 0069439a  e8dbc20000           call 0x6a067a
// 0069439f  83c404               add esp, 4
// 006943a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006943a6  8bc6                 mov eax, esi
// 006943a8  5e                   pop esi
// 006943a9  64890d00000000       mov dword ptr fs:[0], ecx
// 006943b0  5b                   pop ebx
// 006943b1  83c410               add esp, 0x10
// 006943b4  c3                   ret 
// library ogre-1.6.4/OgreRenderQueueSortingGrouping.cpp (function ??$unchecked_merge@PAURenderablePass@Ogre@@PAU12@V?$_Temp_iterator@URenderablePass@Ogre@@@std@@UDepthSortDescendingLess@QueuedRenderableCollection@2@@stdext@@YA?AV?$_Temp_iterator@URenderablePass@Ogre@@@std@@PAURenderablePass@Ogre@@000V12@UDepthSortDescendingLess@QueuedRenderableCollection@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreRenderQueueSortingGrouping.cpp

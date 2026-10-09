// roc 2008-06 00699ee0  unit: Ogre::RbxSceneManager  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00699ee0
//
// 00699ee0  6aff                 push -1
// 00699ee2  68a8e87d00           push 0x7de8a8
// 00699ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00699eed  50                   push eax
// 00699eee  64892500000000       mov dword ptr fs:[0], esp
// 00699ef5  51                   push ecx
// 00699ef6  53                   push ebx
// 00699ef7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00699efb  8b542438             mov edx, dword ptr [esp + 0x38]
// 00699eff  33db                 xor ebx, ebx
// 00699f01  885c2404             mov byte ptr [esp + 4], bl
// 00699f05  8b442404             mov eax, dword ptr [esp + 4]
// 00699f09  50                   push eax
// 00699f0a  8b442438             mov eax, dword ptr [esp + 0x38]
// 00699f0e  51                   push ecx
// 00699f0f  52                   push edx
// 00699f10  8b542428             mov edx, dword ptr [esp + 0x28]
// 00699f14  50                   push eax
// 00699f15  83ec14               sub esp, 0x14
// 00699f18  8bc4                 mov eax, esp
// 00699f1a  8918                 mov dword ptr [eax], ebx
// 00699f1c  895804               mov dword ptr [eax + 4], ebx
// 00699f1f  895808               mov dword ptr [eax + 8], ebx
// 00699f22  89580c               mov dword ptr [eax + 0xc], ebx
// 00699f25  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00699f29  8964245c             mov dword ptr [esp + 0x5c], esp
// 00699f2d  894810               mov dword ptr [eax + 0x10], ecx
// 00699f30  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00699f34  52                   push edx
// 00699f35  50                   push eax
// 00699f36  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00699f3a  e861e3ffff           call 0x6982a0
// 00699f3f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00699f43  83c42c               add esp, 0x2c
// 00699f46  3bc3                 cmp eax, ebx
// 00699f48  7409                 je 0x699f53
// 00699f4a  50                   push eax
// 00699f4b  e82a670000           call 0x6a067a
// 00699f50  83c404               add esp, 4
// 00699f53  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00699f57  64890d00000000       mov dword ptr fs:[0], ecx
// 00699f5e  5b                   pop ebx
// 00699f5f  83c410               add esp, 0x10
// 00699f62  c3                   ret 
// library ogre-1.6.4/OgreRenderQueueSortingGrouping.cpp (function ??$_Unchecked_chunked_merge@PAURenderablePass@Ogre@@V?$_Temp_iterator@URenderablePass@Ogre@@@std@@HUDepthSortDescendingLess@QueuedRenderableCollection@2@@stdext@@YAXPAURenderablePass@Ogre@@0V?$_Temp_iterator@URenderablePass@Ogre@@@std@@HHUDepthSortDescendingLess@QueuedRenderableCollection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreRenderQueueSortingGrouping.cpp

// roc 2008-06 00699f70  unit: Ogre::RbxSceneManager  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00699f70
//
// 00699f70  6aff                 push -1
// 00699f72  68a8e87d00           push 0x7de8a8
// 00699f77  64a100000000         mov eax, dword ptr fs:[0]
// 00699f7d  50                   push eax
// 00699f7e  64892500000000       mov dword ptr fs:[0], esp
// 00699f85  51                   push ecx
// 00699f86  53                   push ebx
// 00699f87  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00699f8b  8b542438             mov edx, dword ptr [esp + 0x38]
// 00699f8f  33db                 xor ebx, ebx
// 00699f91  885c2404             mov byte ptr [esp + 4], bl
// 00699f95  8b442404             mov eax, dword ptr [esp + 4]
// 00699f99  50                   push eax
// 00699f9a  8b442438             mov eax, dword ptr [esp + 0x38]
// 00699f9e  51                   push ecx
// 00699f9f  52                   push edx
// 00699fa0  8b542428             mov edx, dword ptr [esp + 0x28]
// 00699fa4  50                   push eax
// 00699fa5  83ec14               sub esp, 0x14
// 00699fa8  8bc4                 mov eax, esp
// 00699faa  8918                 mov dword ptr [eax], ebx
// 00699fac  895804               mov dword ptr [eax + 4], ebx
// 00699faf  895808               mov dword ptr [eax + 8], ebx
// 00699fb2  89580c               mov dword ptr [eax + 0xc], ebx
// 00699fb5  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00699fb9  8964245c             mov dword ptr [esp + 0x5c], esp
// 00699fbd  894810               mov dword ptr [eax + 0x10], ecx
// 00699fc0  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00699fc4  52                   push edx
// 00699fc5  50                   push eax
// 00699fc6  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00699fca  e811e4ffff           call 0x6983e0
// 00699fcf  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00699fd3  83c42c               add esp, 0x2c
// 00699fd6  3bc3                 cmp eax, ebx
// 00699fd8  7409                 je 0x699fe3
// 00699fda  50                   push eax
// 00699fdb  e89a660000           call 0x6a067a
// 00699fe0  83c404               add esp, 4
// 00699fe3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00699fe7  64890d00000000       mov dword ptr fs:[0], ecx
// 00699fee  5b                   pop ebx
// 00699fef  83c410               add esp, 0x10
// 00699ff2  c3                   ret 
// library ogre-1.6.4/OgreRenderQueueSortingGrouping.cpp (function ??$_Unchecked_chunked_merge@PAURenderablePass@Ogre@@V?$_Temp_iterator@URenderablePass@Ogre@@@std@@HUDepthSortDescendingLess@QueuedRenderableCollection@2@@stdext@@YAXPAURenderablePass@Ogre@@0V?$_Temp_iterator@URenderablePass@Ogre@@@std@@HHUDepthSortDescendingLess@QueuedRenderableCollection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreRenderQueueSortingGrouping.cpp

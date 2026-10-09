// roc 2008-06 00694280  unit: Ogre::RbxSceneManager  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00694280
//
// 00694280  6aff                 push -1
// 00694282  6818e67d00           push 0x7de618
// 00694287  64a100000000         mov eax, dword ptr fs:[0]
// 0069428d  50                   push eax
// 0069428e  64892500000000       mov dword ptr fs:[0], esp
// 00694295  51                   push ecx
// 00694296  53                   push ebx
// 00694297  33db                 xor ebx, ebx
// 00694299  56                   push esi
// 0069429a  895c2408             mov dword ptr [esp + 8], ebx
// 0069429e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006942a2  8b542444             mov edx, dword ptr [esp + 0x44]
// 006942a6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006942aa  885c2408             mov byte ptr [esp + 8], bl
// 006942ae  8b442408             mov eax, dword ptr [esp + 8]
// 006942b2  50                   push eax
// 006942b3  51                   push ecx
// 006942b4  52                   push edx
// 006942b5  8b542438             mov edx, dword ptr [esp + 0x38]
// 006942b9  83ec14               sub esp, 0x14
// 006942bc  8bc4                 mov eax, esp
// 006942be  8918                 mov dword ptr [eax], ebx
// 006942c0  895804               mov dword ptr [eax + 4], ebx
// 006942c3  895808               mov dword ptr [eax + 8], ebx
// 006942c6  89580c               mov dword ptr [eax + 0xc], ebx
// 006942c9  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006942cd  89642428             mov dword ptr [esp + 0x28], esp
// 006942d1  52                   push edx
// 006942d2  8b542444             mov edx, dword ptr [esp + 0x44]
// 006942d6  894810               mov dword ptr [eax + 0x10], ecx
// 006942d9  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006942dd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006942e1  50                   push eax
// 006942e2  51                   push ecx
// 006942e3  52                   push edx
// 006942e4  56                   push esi
// 006942e5  895c2448             mov dword ptr [esp + 0x48], ebx
// 006942e9  e882e4ffff           call 0x692770
// 006942ee  8b442464             mov eax, dword ptr [esp + 0x64]
// 006942f2  83c434               add esp, 0x34
// 006942f5  3bc3                 cmp eax, ebx
// 006942f7  7409                 je 0x694302
// 006942f9  50                   push eax
// 006942fa  e87bc30000           call 0x6a067a
// 006942ff  83c404               add esp, 4
// 00694302  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00694306  8bc6                 mov eax, esi
// 00694308  5e                   pop esi
// 00694309  64890d00000000       mov dword ptr fs:[0], ecx
// 00694310  5b                   pop ebx
// 00694311  83c410               add esp, 0x10
// 00694314  c3                   ret 
// library ogre-1.6.4/OgreRenderQueueSortingGrouping.cpp (function ??$unchecked_merge@PAURenderablePass@Ogre@@PAU12@V?$_Temp_iterator@URenderablePass@Ogre@@@std@@UDepthSortDescendingLess@QueuedRenderableCollection@2@@stdext@@YA?AV?$_Temp_iterator@URenderablePass@Ogre@@@std@@PAURenderablePass@Ogre@@000V12@UDepthSortDescendingLess@QueuedRenderableCollection@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreRenderQueueSortingGrouping.cpp

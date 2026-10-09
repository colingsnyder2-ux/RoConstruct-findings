// roc 2008-06 006902d0  unit: Ogre::RbxSceneManagerFactory  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006902d0
//
// 006902d0  83ec08               sub esp, 8
// 006902d3  56                   push esi
// 006902d4  8bf1                 mov esi, ecx
// 006902d6  8b4610               mov eax, dword ptr [esi + 0x10]
// 006902d9  833800               cmp dword ptr [eax], 0
// 006902dc  753f                 jne 0x69031d
// 006902de  8b400c               mov eax, dword ptr [eax + 0xc]
// 006902e1  85c0                 test eax, eax
// 006902e3  7e42                 jle 0x690327
// 006902e5  50                   push eax
// 006902e6  8d442408             lea eax, [esp + 8]
// 006902ea  50                   push eax
// 006902eb  e8c0dfffff           call 0x68e2b0
// 006902f0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006902f3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006902f7  8901                 mov dword ptr [ecx], eax
// 006902f9  8b5610               mov edx, dword ptr [esi + 0x10]
// 006902fc  894204               mov dword ptr [edx + 4], eax
// 006902ff  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00690302  894108               mov dword ptr [ecx + 8], eax
// 00690305  8b5610               mov edx, dword ptr [esi + 0x10]
// 00690308  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069030c  89420c               mov dword ptr [edx + 0xc], eax
// 0069030f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00690312  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00690315  83c408               add esp, 8
// 00690318  5e                   pop esi
// 00690319  83c408               add esp, 8
// 0069031c  c3                   ret 
// 0069031d  8bd0                 mov edx, eax
// 0069031f  8b420c               mov eax, dword ptr [edx + 0xc]
// 00690322  5e                   pop esi
// 00690323  83c408               add esp, 8
// 00690326  c3                   ret 
// 00690327  8b4610               mov eax, dword ptr [esi + 0x10]
// 0069032a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0069032d  5e                   pop esi
// 0069032e  83c408               add esp, 8
// 00690331  c3                   ret 
// library ogre-1.6.4/OgreRenderQueueSortingGrouping.cpp (function ?_Maxlen@?$_Temp_iterator@URenderablePass@Ogre@@@std@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreRenderQueueSortingGrouping.cpp

// roc 2009-06 004768f0  unit: Ogre::RbxMeshLoader  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004768f0
//
// 004768f0  8b442404             mov eax, dword ptr [esp + 4]
// 004768f4  57                   push edi
// 004768f5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004768f9  3bc7                 cmp eax, edi
// 004768fb  7423                 je 0x476920
// 004768fd  56                   push esi
// 004768fe  8b742414             mov esi, dword ptr [esp + 0x14]
// 00476902  8b0e                 mov ecx, dword ptr [esi]
// 00476904  8b5604               mov edx, dword ptr [esi + 4]
// 00476907  85c9                 test ecx, ecx
// 00476909  7404                 je 0x47690f
// 0047690b  8b09                 mov ecx, dword ptr [ecx]
// 0047690d  eb02                 jmp 0x476911
// 0047690f  33c9                 xor ecx, ecx
// 00476911  8b09                 mov ecx, dword ptr [ecx]
// 00476913  8908                 mov dword ptr [eax], ecx
// 00476915  895004               mov dword ptr [eax + 4], edx
// 00476918  83c008               add eax, 8
// 0047691b  3bc7                 cmp eax, edi
// 0047691d  75e3                 jne 0x476902
// 0047691f  5e                   pop esi
// 00476920  5f                   pop edi
// 00476921  c3                   ret 
// library ogre-1.7.0/OgreMesh.cpp (function ??$_Fill@PAU_List_position@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@V?$_Iterator@$00@?$list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@std@@YAXPAU_List_position@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@0ABV?$_Iterator@$00@?$list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp

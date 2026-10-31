// roc 2009-06 00476550  unit: Ogre::RbxMeshLoader  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00476550
//
// 00476550  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00476553  56                   push esi
// 00476554  8b7004               mov esi, dword ptr [eax + 4]
// 00476557  807e7d00             cmp byte ptr [esi + 0x7d], 0
// 0047655b  57                   push edi
// 0047655c  8bf8                 mov edi, eax
// 0047655e  7531                 jne 0x476591
// 00476560  53                   push ebx
// 00476561  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00476565  55                   push ebp
// 00476566  8b2de0e48900         mov ebp, dword ptr [0x89e4e0]
// 0047656c  8d642400             lea esp, [esp]
// 00476570  8d460c               lea eax, [esi + 0xc]
// 00476573  53                   push ebx
// 00476574  50                   push eax
// 00476575  ffd5                 call ebp
// 00476577  83c408               add esp, 8
// 0047657a  84c0                 test al, al
// 0047657c  7405                 je 0x476583
// 0047657e  8b7608               mov esi, dword ptr [esi + 8]
// 00476581  eb04                 jmp 0x476587
// 00476583  8bfe                 mov edi, esi
// 00476585  8b36                 mov esi, dword ptr [esi]
// 00476587  807e7d00             cmp byte ptr [esi + 0x7d], 0
// 0047658b  74e3                 je 0x476570
// 0047658d  5d                   pop ebp
// 0047658e  8bc7                 mov eax, edi
// 00476590  5b                   pop ebx
// 00476591  5f                   pop edi
// 00476592  5e                   pop esi
// 00476593  c20400               ret 4
// copied from an identical function in another client (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// from server: 100% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll roc_ogre_map_string_value84_300b0b85e3ca9437.cpp
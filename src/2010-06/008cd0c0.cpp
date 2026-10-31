// roc 2010-06 008cd0c0  unit: Ogre::RbxMeshLoader  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cd0c0
//
// 008cd0c0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008cd0c3  56                   push esi
// 008cd0c4  8b7004               mov esi, dword ptr [eax + 4]
// 008cd0c7  807e7d00             cmp byte ptr [esi + 0x7d], 0
// 008cd0cb  57                   push edi
// 008cd0cc  8bf8                 mov edi, eax
// 008cd0ce  7531                 jne 0x8cd101
// 008cd0d0  53                   push ebx
// 008cd0d1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008cd0d5  55                   push ebp
// 008cd0d6  8b2d1ca59e00         mov ebp, dword ptr [0x9ea51c]
// 008cd0dc  8d642400             lea esp, [esp]
// 008cd0e0  8d460c               lea eax, [esi + 0xc]
// 008cd0e3  53                   push ebx
// 008cd0e4  50                   push eax
// 008cd0e5  ffd5                 call ebp
// 008cd0e7  83c408               add esp, 8
// 008cd0ea  84c0                 test al, al
// 008cd0ec  7405                 je 0x8cd0f3
// 008cd0ee  8b7608               mov esi, dword ptr [esi + 8]
// 008cd0f1  eb04                 jmp 0x8cd0f7
// 008cd0f3  8bfe                 mov edi, esi
// 008cd0f5  8b36                 mov esi, dword ptr [esi]
// 008cd0f7  807e7d00             cmp byte ptr [esi + 0x7d], 0
// 008cd0fb  74e3                 je 0x8cd0e0
// 008cd0fd  5d                   pop ebp
// 008cd0fe  8bc7                 mov eax, edi
// 008cd100  5b                   pop ebx
// 008cd101  5f                   pop edi
// 008cd102  5e                   pop esi
// 008cd103  c20400               ret 4
// copied from an identical function in another client (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll roc_ogre_map_string_value84_300b0b85e3ca9437.cpp
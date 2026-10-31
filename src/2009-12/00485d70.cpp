// roc 2009-12 00485d70  unit: Ogre::GfxClustererPart  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00485d70
//
// 00485d70  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00485d73  56                   push esi
// 00485d74  8b7004               mov esi, dword ptr [eax + 4]
// 00485d77  807e7d00             cmp byte ptr [esi + 0x7d], 0
// 00485d7b  57                   push edi
// 00485d7c  8bf8                 mov edi, eax
// 00485d7e  7531                 jne 0x485db1
// 00485d80  53                   push ebx
// 00485d81  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00485d85  55                   push ebp
// 00485d86  8b2dd8b59800         mov ebp, dword ptr [0x98b5d8]
// 00485d8c  8d642400             lea esp, [esp]
// 00485d90  8d460c               lea eax, [esi + 0xc]
// 00485d93  53                   push ebx
// 00485d94  50                   push eax
// 00485d95  ffd5                 call ebp
// 00485d97  83c408               add esp, 8
// 00485d9a  84c0                 test al, al
// 00485d9c  7405                 je 0x485da3
// 00485d9e  8b7608               mov esi, dword ptr [esi + 8]
// 00485da1  eb04                 jmp 0x485da7
// 00485da3  8bfe                 mov edi, esi
// 00485da5  8b36                 mov esi, dword ptr [esi]
// 00485da7  807e7d00             cmp byte ptr [esi + 0x7d], 0
// 00485dab  74e3                 je 0x485d90
// 00485dad  5d                   pop ebp
// 00485dae  8bc7                 mov eax, edi
// 00485db0  5b                   pop ebx
// 00485db1  5f                   pop edi
// 00485db2  5e                   pop esi
// 00485db3  c20400               ret 4
// copied from an identical function in another client (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UOgreMapValue84@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll roc_ogre_map_string_value84_300b0b85e3ca9437.cpp
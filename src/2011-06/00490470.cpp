// roc 2011-06 00490470  unit: CRobloxScriptReviewPaneView  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00490470
//
// 00490470  8b4104               mov eax, dword ptr [ecx + 4]
// 00490473  56                   push esi
// 00490474  8b7004               mov esi, dword ptr [eax + 4]
// 00490477  807e3100             cmp byte ptr [esi + 0x31], 0
// 0049047b  57                   push edi
// 0049047c  8bf8                 mov edi, eax
// 0049047e  7531                 jne 0x4904b1
// 00490480  53                   push ebx
// 00490481  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00490485  55                   push ebp
// 00490486  8b2d3405a400         mov ebp, dword ptr [0xa40534]
// 0049048c  8d642400             lea esp, [esp]
// 00490490  8d460c               lea eax, [esi + 0xc]
// 00490493  53                   push ebx
// 00490494  50                   push eax
// 00490495  ffd5                 call ebp
// 00490497  83c408               add esp, 8
// 0049049a  84c0                 test al, al
// 0049049c  7405                 je 0x4904a3
// 0049049e  8b7608               mov esi, dword ptr [esi + 8]
// 004904a1  eb04                 jmp 0x4904a7
// 004904a3  8bfe                 mov edi, esi
// 004904a5  8b36                 mov esi, dword ptr [esi]
// 004904a7  807e3100             cmp byte ptr [esi + 0x31], 0
// 004904ab  74e3                 je 0x490490
// 004904ad  5d                   pop ebp
// 004904ae  8bc7                 mov eax, edi
// 004904b0  5b                   pop ebx
// 004904b1  5f                   pop edi
// 004904b2  5e                   pop esi
// 004904b3  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp

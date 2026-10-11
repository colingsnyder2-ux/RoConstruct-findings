// roc 2012-06 007065c0  unit: RBX::RootInstance  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007065c0
//
// 007065c0  8b4104               mov eax, dword ptr [ecx + 4]
// 007065c3  56                   push esi
// 007065c4  8b7004               mov esi, dword ptr [eax + 4]
// 007065c7  807e3100             cmp byte ptr [esi + 0x31], 0
// 007065cb  57                   push edi
// 007065cc  8bf8                 mov edi, eax
// 007065ce  7531                 jne 0x706601
// 007065d0  53                   push ebx
// 007065d1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007065d5  55                   push ebp
// 007065d6  8b2d5026b200         mov ebp, dword ptr [0xb22650]
// 007065dc  8d642400             lea esp, [esp]
// 007065e0  8d460c               lea eax, [esi + 0xc]
// 007065e3  53                   push ebx
// 007065e4  50                   push eax
// 007065e5  ffd5                 call ebp
// 007065e7  83c408               add esp, 8
// 007065ea  84c0                 test al, al
// 007065ec  7405                 je 0x7065f3
// 007065ee  8b7608               mov esi, dword ptr [esi + 8]
// 007065f1  eb04                 jmp 0x7065f7
// 007065f3  8bfe                 mov edi, esi
// 007065f5  8b36                 mov esi, dword ptr [esi]
// 007065f7  807e3100             cmp byte ptr [esi + 0x31], 0
// 007065fb  74e3                 je 0x7065e0
// 007065fd  5d                   pop ebp
// 007065fe  8bc7                 mov eax, edi
// 00706600  5b                   pop ebx
// 00706601  5f                   pop edi
// 00706602  5e                   pop esi
// 00706603  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp

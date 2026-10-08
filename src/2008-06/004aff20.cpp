// from server: 100% by auto
// roc 2008-06 004aff20  unit: RBX::Network::Replicator::NewInstanceItem  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aff20
//
// 004aff20  56                   push esi
// 004aff21  57                   push edi
// 004aff22  8bf9                 mov edi, ecx
// 004aff24  8b770c               mov esi, dword ptr [edi + 0xc]
// 004aff27  85f6                 test esi, esi
// 004aff29  742a                 je 0x4aff55
// 004aff2b  8d4604               lea eax, [esi + 4]
// 004aff2e  83c9ff               or ecx, 0xffffffff
// 004aff31  f00fc108             lock xadd dword ptr [eax], ecx
// 004aff35  751e                 jne 0x4aff55
// 004aff37  8b16                 mov edx, dword ptr [esi]
// 004aff39  8b4204               mov eax, dword ptr [edx + 4]
// 004aff3c  8bce                 mov ecx, esi
// 004aff3e  ffd0                 call eax
// 004aff40  8d4e08               lea ecx, [esi + 8]
// 004aff43  83caff               or edx, 0xffffffff
// 004aff46  f00fc111             lock xadd dword ptr [ecx], edx
// 004aff4a  7509                 jne 0x4aff55
// 004aff4c  8b06                 mov eax, dword ptr [esi]
// 004aff4e  8b5008               mov edx, dword ptr [eax + 8]
// 004aff51  8bce                 mov ecx, esi
// 004aff53  ffd2                 call edx
// 004aff55  f644240c01           test byte ptr [esp + 0xc], 1
// 004aff5a  7409                 je 0x4aff65
// 004aff5c  57                   push edi
// 004aff5d  e818071f00           call 0x6a067a
// 004aff62  83c404               add esp, 4
// 004aff65  8bc7                 mov eax, edi
// 004aff67  5f                   pop edi
// 004aff68  5e                   pop esi
// 004aff69  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??_G_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

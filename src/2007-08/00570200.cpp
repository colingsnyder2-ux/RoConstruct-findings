// from server: 100% by auto
// roc 2007-08 00570200  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570200
//
// 00570200  8b5104               mov edx, dword ptr [ecx + 4]
// 00570203  8b4204               mov eax, dword ptr [edx + 4]
// 00570206  83ec10               sub esp, 0x10
// 00570209  80781900             cmp byte ptr [eax + 0x19], 0
// 0057020d  56                   push esi
// 0057020e  57                   push edi
// 0057020f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00570213  7516                 jne 0x57022b
// 00570215  8b37                 mov esi, dword ptr [edi]
// 00570217  39700c               cmp dword ptr [eax + 0xc], esi
// 0057021a  7305                 jae 0x570221
// 0057021c  8b4008               mov eax, dword ptr [eax + 8]
// 0057021f  eb04                 jmp 0x570225
// 00570221  8bd0                 mov edx, eax
// 00570223  8b00                 mov eax, dword ptr [eax]
// 00570225  80781900             cmp byte ptr [eax + 0x19], 0
// 00570229  74ec                 je 0x570217
// 0057022b  8b4104               mov eax, dword ptr [ecx + 4]
// 0057022e  3bd0                 cmp edx, eax
// 00570230  8954240c             mov dword ptr [esp + 0xc], edx
// 00570234  894c2408             mov dword ptr [esp + 8], ecx
// 00570238  740d                 je 0x570247
// 0057023a  8b37                 mov esi, dword ptr [edi]
// 0057023c  3b720c               cmp esi, dword ptr [edx + 0xc]
// 0057023f  7206                 jb 0x570247
// 00570241  8d4c2408             lea ecx, [esp + 8]
// 00570245  eb0c                 jmp 0x570253
// 00570247  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057024b  89442414             mov dword ptr [esp + 0x14], eax
// 0057024f  8d4c2410             lea ecx, [esp + 0x10]
// 00570253  8b11                 mov edx, dword ptr [ecx]
// 00570255  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00570259  8b4904               mov ecx, dword ptr [ecx + 4]
// 0057025c  5f                   pop edi
// 0057025d  8910                 mov dword ptr [eax], edx
// 0057025f  894804               mov dword ptr [eax + 4], ecx
// 00570262  5e                   pop esi
// 00570263  83c410               add esp, 0x10
// 00570266  c20800               ret 8
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?find@?$_Tree@V?$_Tmap_traits@KV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@U?$less@K@3@V?$allocator@U?$pair@$$CBKV?$_Iterator@$00@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@ABK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

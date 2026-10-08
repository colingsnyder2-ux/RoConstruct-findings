// from server: 100% by auto
// roc 2011-06 00435430  unit: VCProcessPerfCounter::?$sp_counted_impl_p  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00435430
//
// 00435430  56                   push esi
// 00435431  57                   push edi
// 00435432  8bf9                 mov edi, ecx
// 00435434  8b770c               mov esi, dword ptr [edi + 0xc]
// 00435437  85f6                 test esi, esi
// 00435439  742a                 je 0x435465
// 0043543b  8d4604               lea eax, [esi + 4]
// 0043543e  83c9ff               or ecx, 0xffffffff
// 00435441  f00fc108             lock xadd dword ptr [eax], ecx
// 00435445  751e                 jne 0x435465
// 00435447  8b16                 mov edx, dword ptr [esi]
// 00435449  8b4204               mov eax, dword ptr [edx + 4]
// 0043544c  8bce                 mov ecx, esi
// 0043544e  ffd0                 call eax
// 00435450  8d4e08               lea ecx, [esi + 8]
// 00435453  83caff               or edx, 0xffffffff
// 00435456  f00fc111             lock xadd dword ptr [ecx], edx
// 0043545a  7509                 jne 0x435465
// 0043545c  8b06                 mov eax, dword ptr [esi]
// 0043545e  8b5008               mov edx, dword ptr [eax + 8]
// 00435461  8bce                 mov ecx, esi
// 00435463  ffd2                 call edx
// 00435465  f644240c01           test byte ptr [esp + 0xc], 1
// 0043546a  7409                 je 0x435475
// 0043546c  57                   push edi
// 0043546d  e8e64b3d00           call 0x80a058
// 00435472  83c404               add esp, 4
// 00435475  8bc7                 mov eax, edi
// 00435477  5f                   pop edi
// 00435478  5e                   pop esi
// 00435479  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??_G_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

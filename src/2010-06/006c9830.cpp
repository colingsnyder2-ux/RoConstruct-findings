// from server: 100% by auto
// roc 2010-06 006c9830  unit: RBX::VHandles::?$EventDesc  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c9830
//
// 006c9830  56                   push esi
// 006c9831  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006c9834  85f6                 test esi, esi
// 006c9836  742b                 je 0x6c9863
// 006c9838  8d4604               lea eax, [esi + 4]
// 006c983b  83c9ff               or ecx, 0xffffffff
// 006c983e  f00fc108             lock xadd dword ptr [eax], ecx
// 006c9842  751f                 jne 0x6c9863
// 006c9844  8b16                 mov edx, dword ptr [esi]
// 006c9846  8b4204               mov eax, dword ptr [edx + 4]
// 006c9849  8bce                 mov ecx, esi
// 006c984b  ffd0                 call eax
// 006c984d  8d4e08               lea ecx, [esi + 8]
// 006c9850  83caff               or edx, 0xffffffff
// 006c9853  f00fc111             lock xadd dword ptr [ecx], edx
// 006c9857  750a                 jne 0x6c9863
// 006c9859  8b06                 mov eax, dword ptr [esi]
// 006c985b  8b5008               mov edx, dword ptr [eax + 8]
// 006c985e  8bce                 mov ecx, esi
// 006c9860  5e                   pop esi
// 006c9861  ffe2                 jmp edx
// 006c9863  5e                   pop esi
// 006c9864  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??1_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

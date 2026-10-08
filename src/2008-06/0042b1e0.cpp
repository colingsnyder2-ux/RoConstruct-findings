// from server: 100% by auto
// roc 2008-06 0042b1e0  unit: EventHandler  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b1e0
//
// 0042b1e0  56                   push esi
// 0042b1e1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0042b1e4  85f6                 test esi, esi
// 0042b1e6  742b                 je 0x42b213
// 0042b1e8  8d4604               lea eax, [esi + 4]
// 0042b1eb  83c9ff               or ecx, 0xffffffff
// 0042b1ee  f00fc108             lock xadd dword ptr [eax], ecx
// 0042b1f2  751f                 jne 0x42b213
// 0042b1f4  8b16                 mov edx, dword ptr [esi]
// 0042b1f6  8b4204               mov eax, dword ptr [edx + 4]
// 0042b1f9  8bce                 mov ecx, esi
// 0042b1fb  ffd0                 call eax
// 0042b1fd  8d4e08               lea ecx, [esi + 8]
// 0042b200  83caff               or edx, 0xffffffff
// 0042b203  f00fc111             lock xadd dword ptr [ecx], edx
// 0042b207  750a                 jne 0x42b213
// 0042b209  8b06                 mov eax, dword ptr [esi]
// 0042b20b  8b5008               mov edx, dword ptr [eax + 8]
// 0042b20e  8bce                 mov ecx, esi
// 0042b210  5e                   pop esi
// 0042b211  ffe2                 jmp edx
// 0042b213  5e                   pop esi
// 0042b214  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??1_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

// roc 2007-08 00414480  unit: DHTMLWindow  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00414480
//
// 00414480  56                   push esi
// 00414481  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00414484  85f6                 test esi, esi
// 00414486  742b                 je 0x4144b3
// 00414488  8d4604               lea eax, [esi + 4]
// 0041448b  83c9ff               or ecx, 0xffffffff
// 0041448e  f00fc108             lock xadd dword ptr [eax], ecx
// 00414492  751f                 jne 0x4144b3
// 00414494  8b16                 mov edx, dword ptr [esi]
// 00414496  8b4204               mov eax, dword ptr [edx + 4]
// 00414499  8bce                 mov ecx, esi
// 0041449b  ffd0                 call eax
// 0041449d  8d4e08               lea ecx, [esi + 8]
// 004144a0  83caff               or edx, 0xffffffff
// 004144a3  f00fc111             lock xadd dword ptr [ecx], edx
// 004144a7  750a                 jne 0x4144b3
// 004144a9  8b06                 mov eax, dword ptr [esi]
// 004144ab  8b5008               mov edx, dword ptr [eax + 8]
// 004144ae  8bce                 mov ecx, esi
// 004144b0  5e                   pop esi
// 004144b1  ffe2                 jmp edx
// 004144b3  5e                   pop esi
// 004144b4  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??1_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

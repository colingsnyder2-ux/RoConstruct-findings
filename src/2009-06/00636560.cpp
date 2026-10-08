// from server: 100% by auto
// roc 2009-06 00636560  unit: RBX::Lua::VFunctionRef::?$holder  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00636560
//
// 00636560  56                   push esi
// 00636561  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00636564  85f6                 test esi, esi
// 00636566  742b                 je 0x636593
// 00636568  8d4604               lea eax, [esi + 4]
// 0063656b  83c9ff               or ecx, 0xffffffff
// 0063656e  f00fc108             lock xadd dword ptr [eax], ecx
// 00636572  751f                 jne 0x636593
// 00636574  8b16                 mov edx, dword ptr [esi]
// 00636576  8b4204               mov eax, dword ptr [edx + 4]
// 00636579  8bce                 mov ecx, esi
// 0063657b  ffd0                 call eax
// 0063657d  8d4e08               lea ecx, [esi + 8]
// 00636580  83caff               or edx, 0xffffffff
// 00636583  f00fc111             lock xadd dword ptr [ecx], edx
// 00636587  750a                 jne 0x636593
// 00636589  8b06                 mov eax, dword ptr [esi]
// 0063658b  8b5008               mov edx, dword ptr [eax + 8]
// 0063658e  8bce                 mov ecx, esi
// 00636590  5e                   pop esi
// 00636591  ffe2                 jmp edx
// 00636593  5e                   pop esi
// 00636594  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??1_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

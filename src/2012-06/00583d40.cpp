// roc 2012-06 00583d40  unit: RBX::Network::Replicator  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00583d40
//
// 00583d40  56                   push esi
// 00583d41  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00583d44  85f6                 test esi, esi
// 00583d46  742b                 je 0x583d73
// 00583d48  8d4604               lea eax, [esi + 4]
// 00583d4b  83c9ff               or ecx, 0xffffffff
// 00583d4e  f00fc108             lock xadd dword ptr [eax], ecx
// 00583d52  751f                 jne 0x583d73
// 00583d54  8b16                 mov edx, dword ptr [esi]
// 00583d56  8b4204               mov eax, dword ptr [edx + 4]
// 00583d59  8bce                 mov ecx, esi
// 00583d5b  ffd0                 call eax
// 00583d5d  8d4e08               lea ecx, [esi + 8]
// 00583d60  83caff               or edx, 0xffffffff
// 00583d63  f00fc111             lock xadd dword ptr [ecx], edx
// 00583d67  750a                 jne 0x583d73
// 00583d69  8b06                 mov eax, dword ptr [esi]
// 00583d6b  8b5008               mov edx, dword ptr [eax + 8]
// 00583d6e  8bce                 mov ecx, esi
// 00583d70  5e                   pop esi
// 00583d71  ffe2                 jmp edx
// 00583d73  5e                   pop esi
// 00583d74  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??1_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

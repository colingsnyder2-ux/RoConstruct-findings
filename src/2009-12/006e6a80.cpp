// roc 2009-12 006e6a80  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e6a80
//
// 006e6a80  56                   push esi
// 006e6a81  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006e6a84  85f6                 test esi, esi
// 006e6a86  742b                 je 0x6e6ab3
// 006e6a88  8d4604               lea eax, [esi + 4]
// 006e6a8b  83c9ff               or ecx, 0xffffffff
// 006e6a8e  f00fc108             lock xadd dword ptr [eax], ecx
// 006e6a92  751f                 jne 0x6e6ab3
// 006e6a94  8b16                 mov edx, dword ptr [esi]
// 006e6a96  8b4204               mov eax, dword ptr [edx + 4]
// 006e6a99  8bce                 mov ecx, esi
// 006e6a9b  ffd0                 call eax
// 006e6a9d  8d4e08               lea ecx, [esi + 8]
// 006e6aa0  83caff               or edx, 0xffffffff
// 006e6aa3  f00fc111             lock xadd dword ptr [ecx], edx
// 006e6aa7  750a                 jne 0x6e6ab3
// 006e6aa9  8b06                 mov eax, dword ptr [esi]
// 006e6aab  8b5008               mov edx, dword ptr [eax + 8]
// 006e6aae  8bce                 mov ecx, esi
// 006e6ab0  5e                   pop esi
// 006e6ab1  ffe2                 jmp edx
// 006e6ab3  5e                   pop esi
// 006e6ab4  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??1_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

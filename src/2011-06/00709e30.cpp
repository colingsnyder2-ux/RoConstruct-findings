// from server: 100% by auto
// roc 2011-06 00709e30  unit: G3D::Vector3::$$A6AXW4Axis::?$signal::Vslot::?$callable  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00709e30
//
// 00709e30  56                   push esi
// 00709e31  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00709e34  85f6                 test esi, esi
// 00709e36  742b                 je 0x709e63
// 00709e38  8d4604               lea eax, [esi + 4]
// 00709e3b  83c9ff               or ecx, 0xffffffff
// 00709e3e  f00fc108             lock xadd dword ptr [eax], ecx
// 00709e42  751f                 jne 0x709e63
// 00709e44  8b16                 mov edx, dword ptr [esi]
// 00709e46  8b4204               mov eax, dword ptr [edx + 4]
// 00709e49  8bce                 mov ecx, esi
// 00709e4b  ffd0                 call eax
// 00709e4d  8d4e08               lea ecx, [esi + 8]
// 00709e50  83caff               or edx, 0xffffffff
// 00709e53  f00fc111             lock xadd dword ptr [ecx], edx
// 00709e57  750a                 jne 0x709e63
// 00709e59  8b06                 mov eax, dword ptr [esi]
// 00709e5b  8b5008               mov edx, dword ptr [eax + 8]
// 00709e5e  8bce                 mov ecx, esi
// 00709e60  5e                   pop esi
// 00709e61  ffe2                 jmp edx
// 00709e63  5e                   pop esi
// 00709e64  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??1_Node@?$_List_nod@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

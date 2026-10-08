// from server: 100% by auto
// roc 2011-06 006df460  unit: RBX::VInstance::?$NonFactoryProduct  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006df460
//
// 006df460  57                   push edi
// 006df461  8b7c2408             mov edi, dword ptr [esp + 8]
// 006df465  85ff                 test edi, edi
// 006df467  743c                 je 0x6df4a5
// 006df469  56                   push esi
// 006df46a  8b7704               mov esi, dword ptr [edi + 4]
// 006df46d  85f6                 test esi, esi
// 006df46f  742a                 je 0x6df49b
// 006df471  8d4604               lea eax, [esi + 4]
// 006df474  83c9ff               or ecx, 0xffffffff
// 006df477  f00fc108             lock xadd dword ptr [eax], ecx
// 006df47b  751e                 jne 0x6df49b
// 006df47d  8b16                 mov edx, dword ptr [esi]
// 006df47f  8b4204               mov eax, dword ptr [edx + 4]
// 006df482  8bce                 mov ecx, esi
// 006df484  ffd0                 call eax
// 006df486  8d4e08               lea ecx, [esi + 8]
// 006df489  83caff               or edx, 0xffffffff
// 006df48c  f00fc111             lock xadd dword ptr [ecx], edx
// 006df490  7509                 jne 0x6df49b
// 006df492  8b06                 mov eax, dword ptr [esi]
// 006df494  8b5008               mov edx, dword ptr [eax + 8]
// 006df497  8bce                 mov ecx, esi
// 006df499  ffd2                 call edx
// 006df49b  57                   push edi
// 006df49c  e8b7ab1200           call 0x80a058
// 006df4a1  83c404               add esp, 4
// 006df4a4  5e                   pop esi
// 006df4a5  5f                   pop edi
// 006df4a6  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??$checked_delete@U?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@@boost@@YAXPAU?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

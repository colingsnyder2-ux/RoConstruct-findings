// roc 2010-06 006be870  unit: RBX::VCollectionService::?$FactoryProduct  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006be870
//
// 006be870  57                   push edi
// 006be871  8b7c2408             mov edi, dword ptr [esp + 8]
// 006be875  85ff                 test edi, edi
// 006be877  743c                 je 0x6be8b5
// 006be879  56                   push esi
// 006be87a  8b7704               mov esi, dword ptr [edi + 4]
// 006be87d  85f6                 test esi, esi
// 006be87f  742a                 je 0x6be8ab
// 006be881  8d4604               lea eax, [esi + 4]
// 006be884  83c9ff               or ecx, 0xffffffff
// 006be887  f00fc108             lock xadd dword ptr [eax], ecx
// 006be88b  751e                 jne 0x6be8ab
// 006be88d  8b16                 mov edx, dword ptr [esi]
// 006be88f  8b4204               mov eax, dword ptr [edx + 4]
// 006be892  8bce                 mov ecx, esi
// 006be894  ffd0                 call eax
// 006be896  8d4e08               lea ecx, [esi + 8]
// 006be899  83caff               or edx, 0xffffffff
// 006be89c  f00fc111             lock xadd dword ptr [ecx], edx
// 006be8a0  7509                 jne 0x6be8ab
// 006be8a2  8b06                 mov eax, dword ptr [esi]
// 006be8a4  8b5008               mov edx, dword ptr [eax + 8]
// 006be8a7  8bce                 mov ecx, esi
// 006be8a9  ffd2                 call edx
// 006be8ab  57                   push edi
// 006be8ac  e8e9900e00           call 0x7a799a
// 006be8b1  83c404               add esp, 4
// 006be8b4  5e                   pop esi
// 006be8b5  5f                   pop edi
// 006be8b6  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??$checked_delete@U?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@@boost@@YAXPAU?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

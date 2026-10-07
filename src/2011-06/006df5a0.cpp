// roc 2011-06 006df5a0  unit: RBX::Soundscape::VCollisionSound::?$sp_counted_impl_p  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006df5a0
//
// 006df5a0  57                   push edi
// 006df5a1  8b790c               mov edi, dword ptr [ecx + 0xc]
// 006df5a4  85ff                 test edi, edi
// 006df5a6  743c                 je 0x6df5e4
// 006df5a8  56                   push esi
// 006df5a9  8b7704               mov esi, dword ptr [edi + 4]
// 006df5ac  85f6                 test esi, esi
// 006df5ae  742a                 je 0x6df5da
// 006df5b0  8d4604               lea eax, [esi + 4]
// 006df5b3  83c9ff               or ecx, 0xffffffff
// 006df5b6  f00fc108             lock xadd dword ptr [eax], ecx
// 006df5ba  751e                 jne 0x6df5da
// 006df5bc  8b16                 mov edx, dword ptr [esi]
// 006df5be  8b4204               mov eax, dword ptr [edx + 4]
// 006df5c1  8bce                 mov ecx, esi
// 006df5c3  ffd0                 call eax
// 006df5c5  8d4e08               lea ecx, [esi + 8]
// 006df5c8  83caff               or edx, 0xffffffff
// 006df5cb  f00fc111             lock xadd dword ptr [ecx], edx
// 006df5cf  7509                 jne 0x6df5da
// 006df5d1  8b06                 mov eax, dword ptr [esi]
// 006df5d3  8b5008               mov edx, dword ptr [eax + 8]
// 006df5d6  8bce                 mov ecx, esi
// 006df5d8  ffd2                 call edx
// 006df5da  57                   push edi
// 006df5db  e878aa1200           call 0x80a058
// 006df5e0  83c404               add esp, 4
// 006df5e3  5e                   pop esi
// 006df5e4  5f                   pop edi
// 006df5e5  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?dispose@?$sp_counted_impl_p@U?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

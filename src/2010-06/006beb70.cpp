// roc 2010-06 006beb70  unit: RBX::VInstance::V?$shared_ptr::V?$vector::V?$copy_on_write_ptr::?$sp_counted_impl_p  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006beb70
//
// 006beb70  57                   push edi
// 006beb71  8b790c               mov edi, dword ptr [ecx + 0xc]
// 006beb74  85ff                 test edi, edi
// 006beb76  743c                 je 0x6bebb4
// 006beb78  56                   push esi
// 006beb79  8b7704               mov esi, dword ptr [edi + 4]
// 006beb7c  85f6                 test esi, esi
// 006beb7e  742a                 je 0x6bebaa
// 006beb80  8d4604               lea eax, [esi + 4]
// 006beb83  83c9ff               or ecx, 0xffffffff
// 006beb86  f00fc108             lock xadd dword ptr [eax], ecx
// 006beb8a  751e                 jne 0x6bebaa
// 006beb8c  8b16                 mov edx, dword ptr [esi]
// 006beb8e  8b4204               mov eax, dword ptr [edx + 4]
// 006beb91  8bce                 mov ecx, esi
// 006beb93  ffd0                 call eax
// 006beb95  8d4e08               lea ecx, [esi + 8]
// 006beb98  83caff               or edx, 0xffffffff
// 006beb9b  f00fc111             lock xadd dword ptr [ecx], edx
// 006beb9f  7509                 jne 0x6bebaa
// 006beba1  8b06                 mov eax, dword ptr [esi]
// 006beba3  8b5008               mov edx, dword ptr [eax + 8]
// 006beba6  8bce                 mov ecx, esi
// 006beba8  ffd2                 call edx
// 006bebaa  57                   push edi
// 006bebab  e8ea8d0e00           call 0x7a799a
// 006bebb0  83c404               add esp, 4
// 006bebb3  5e                   pop esi
// 006bebb4  5f                   pop edi
// 006bebb5  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?dispose@?$sp_counted_impl_p@U?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

// roc 2009-12 0073eb60  unit: RBX::VInstance::V?$shared_ptr::V?$vector::V?$copy_on_write_ptr::?$sp_counted_impl_p  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073eb60
//
// 0073eb60  57                   push edi
// 0073eb61  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0073eb64  85ff                 test edi, edi
// 0073eb66  743c                 je 0x73eba4
// 0073eb68  56                   push esi
// 0073eb69  8b7704               mov esi, dword ptr [edi + 4]
// 0073eb6c  85f6                 test esi, esi
// 0073eb6e  742a                 je 0x73eb9a
// 0073eb70  8d4604               lea eax, [esi + 4]
// 0073eb73  83c9ff               or ecx, 0xffffffff
// 0073eb76  f00fc108             lock xadd dword ptr [eax], ecx
// 0073eb7a  751e                 jne 0x73eb9a
// 0073eb7c  8b16                 mov edx, dword ptr [esi]
// 0073eb7e  8b4204               mov eax, dword ptr [edx + 4]
// 0073eb81  8bce                 mov ecx, esi
// 0073eb83  ffd0                 call eax
// 0073eb85  8d4e08               lea ecx, [esi + 8]
// 0073eb88  83caff               or edx, 0xffffffff
// 0073eb8b  f00fc111             lock xadd dword ptr [ecx], edx
// 0073eb8f  7509                 jne 0x73eb9a
// 0073eb91  8b06                 mov eax, dword ptr [esi]
// 0073eb93  8b5008               mov edx, dword ptr [eax + 8]
// 0073eb96  8bce                 mov ecx, esi
// 0073eb98  ffd2                 call edx
// 0073eb9a  57                   push edi
// 0073eb9b  e8ba4c0b00           call 0x7f385a
// 0073eba0  83c404               add esp, 4
// 0073eba3  5e                   pop esi
// 0073eba4  5f                   pop edi
// 0073eba5  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?dispose@?$sp_counted_impl_p@U?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

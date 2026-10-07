// roc 2012-06 0086c920  unit: RBX::Soundscape::VCollisionSound::?$sp_counted_impl_p  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086c920
//
// 0086c920  57                   push edi
// 0086c921  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0086c924  85ff                 test edi, edi
// 0086c926  743c                 je 0x86c964
// 0086c928  56                   push esi
// 0086c929  8b7704               mov esi, dword ptr [edi + 4]
// 0086c92c  85f6                 test esi, esi
// 0086c92e  742a                 je 0x86c95a
// 0086c930  8d4604               lea eax, [esi + 4]
// 0086c933  83c9ff               or ecx, 0xffffffff
// 0086c936  f00fc108             lock xadd dword ptr [eax], ecx
// 0086c93a  751e                 jne 0x86c95a
// 0086c93c  8b16                 mov edx, dword ptr [esi]
// 0086c93e  8b4204               mov eax, dword ptr [edx + 4]
// 0086c941  8bce                 mov ecx, esi
// 0086c943  ffd0                 call eax
// 0086c945  8d4e08               lea ecx, [esi + 8]
// 0086c948  83caff               or edx, 0xffffffff
// 0086c94b  f00fc111             lock xadd dword ptr [ecx], edx
// 0086c94f  7509                 jne 0x86c95a
// 0086c951  8b06                 mov eax, dword ptr [esi]
// 0086c953  8b5008               mov edx, dword ptr [eax + 8]
// 0086c956  8bce                 mov ecx, esi
// 0086c958  ffd2                 call edx
// 0086c95a  57                   push edi
// 0086c95b  e8b4571100           call 0x982114
// 0086c960  83c404               add esp, 4
// 0086c963  5e                   pop esi
// 0086c964  5f                   pop edi
// 0086c965  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?dispose@?$sp_counted_impl_p@U?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp

// roc 2012-06 006d7d30  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d7d30
//
// 006d7d30  83ec08               sub esp, 8
// 006d7d33  56                   push esi
// 006d7d34  8b742410             mov esi, dword ptr [esp + 0x10]
// 006d7d38  57                   push edi
// 006d7d39  8bf9                 mov edi, ecx
// 006d7d3b  56                   push esi
// 006d7d3c  8d4c2410             lea ecx, [esp + 0x10]
// 006d7d40  8974240c             mov dword ptr [esp + 0xc], esi
// 006d7d44  e897dfffff           call 0x6d5ce0
// 006d7d49  56                   push esi
// 006d7d4a  8d442410             lea eax, [esp + 0x10]
// 006d7d4e  56                   push esi
// 006d7d4f  50                   push eax
// 006d7d50  e83b2aecff           call 0x59a790
// 006d7d55  8d4c2414             lea ecx, [esp + 0x14]
// 006d7d59  83c40c               add esp, 0xc
// 006d7d5c  3bcf                 cmp ecx, edi
// 006d7d5e  7406                 je 0x6d7d66
// 006d7d60  8b542408             mov edx, dword ptr [esp + 8]
// 006d7d64  8917                 mov dword ptr [edi], edx
// 006d7d66  8b7704               mov esi, dword ptr [edi + 4]
// 006d7d69  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d7d6d  894704               mov dword ptr [edi + 4], eax
// 006d7d70  85f6                 test esi, esi
// 006d7d72  742a                 je 0x6d7d9e
// 006d7d74  8d4e04               lea ecx, [esi + 4]
// 006d7d77  83caff               or edx, 0xffffffff
// 006d7d7a  f00fc111             lock xadd dword ptr [ecx], edx
// 006d7d7e  751e                 jne 0x6d7d9e
// 006d7d80  8b06                 mov eax, dword ptr [esi]
// 006d7d82  8b5004               mov edx, dword ptr [eax + 4]
// 006d7d85  8bce                 mov ecx, esi
// 006d7d87  ffd2                 call edx
// 006d7d89  8d4608               lea eax, [esi + 8]
// 006d7d8c  83c9ff               or ecx, 0xffffffff
// 006d7d8f  f00fc108             lock xadd dword ptr [eax], ecx
// 006d7d93  7509                 jne 0x6d7d9e
// 006d7d95  8b16                 mov edx, dword ptr [esi]
// 006d7d97  8b4208               mov eax, dword ptr [edx + 8]
// 006d7d9a  8bce                 mov ecx, esi
// 006d7d9c  ffd0                 call eax
// 006d7d9e  5f                   pop edi
// 006d7d9f  5e                   pop esi
// 006d7da0  83c408               add esp, 8
// 006d7da3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

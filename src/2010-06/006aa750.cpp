// roc 2010-06 006aa750  unit: boost::Vthread::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006aa750
//
// 006aa750  83ec08               sub esp, 8
// 006aa753  56                   push esi
// 006aa754  8b742410             mov esi, dword ptr [esp + 0x10]
// 006aa758  57                   push edi
// 006aa759  8bf9                 mov edi, ecx
// 006aa75b  56                   push esi
// 006aa75c  8d4c2410             lea ecx, [esp + 0x10]
// 006aa760  8974240c             mov dword ptr [esp + 0xc], esi
// 006aa764  e8f7fcffff           call 0x6aa460
// 006aa769  56                   push esi
// 006aa76a  8d442410             lea eax, [esp + 0x10]
// 006aa76e  56                   push esi
// 006aa76f  50                   push eax
// 006aa770  e83b9edaff           call 0x4545b0
// 006aa775  8d4c2414             lea ecx, [esp + 0x14]
// 006aa779  83c40c               add esp, 0xc
// 006aa77c  3bcf                 cmp ecx, edi
// 006aa77e  7406                 je 0x6aa786
// 006aa780  8b542408             mov edx, dword ptr [esp + 8]
// 006aa784  8917                 mov dword ptr [edi], edx
// 006aa786  8b7704               mov esi, dword ptr [edi + 4]
// 006aa789  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006aa78d  894704               mov dword ptr [edi + 4], eax
// 006aa790  85f6                 test esi, esi
// 006aa792  742a                 je 0x6aa7be
// 006aa794  8d4e04               lea ecx, [esi + 4]
// 006aa797  83caff               or edx, 0xffffffff
// 006aa79a  f00fc111             lock xadd dword ptr [ecx], edx
// 006aa79e  751e                 jne 0x6aa7be
// 006aa7a0  8b06                 mov eax, dword ptr [esi]
// 006aa7a2  8b5004               mov edx, dword ptr [eax + 4]
// 006aa7a5  8bce                 mov ecx, esi
// 006aa7a7  ffd2                 call edx
// 006aa7a9  8d4608               lea eax, [esi + 8]
// 006aa7ac  83c9ff               or ecx, 0xffffffff
// 006aa7af  f00fc108             lock xadd dword ptr [eax], ecx
// 006aa7b3  7509                 jne 0x6aa7be
// 006aa7b5  8b16                 mov edx, dword ptr [esi]
// 006aa7b7  8b4208               mov eax, dword ptr [edx + 8]
// 006aa7ba  8bce                 mov ecx, esi
// 006aa7bc  ffd0                 call eax
// 006aa7be  5f                   pop edi
// 006aa7bf  5e                   pop esi
// 006aa7c0  83c408               add esp, 8
// 006aa7c3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

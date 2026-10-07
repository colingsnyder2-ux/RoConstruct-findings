// roc 2011-06 005ec950  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ec950
//
// 005ec950  83ec08               sub esp, 8
// 005ec953  56                   push esi
// 005ec954  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ec958  57                   push edi
// 005ec959  8bf9                 mov edi, ecx
// 005ec95b  56                   push esi
// 005ec95c  8d4c2410             lea ecx, [esp + 0x10]
// 005ec960  8974240c             mov dword ptr [esp + 0xc], esi
// 005ec964  e8b7e2ffff           call 0x5eac20
// 005ec969  56                   push esi
// 005ec96a  8d442410             lea eax, [esp + 0x10]
// 005ec96e  56                   push esi
// 005ec96f  50                   push eax
// 005ec970  e8cbec2700           call 0x86b640
// 005ec975  8d4c2414             lea ecx, [esp + 0x14]
// 005ec979  83c40c               add esp, 0xc
// 005ec97c  3bcf                 cmp ecx, edi
// 005ec97e  7406                 je 0x5ec986
// 005ec980  8b542408             mov edx, dword ptr [esp + 8]
// 005ec984  8917                 mov dword ptr [edi], edx
// 005ec986  8b7704               mov esi, dword ptr [edi + 4]
// 005ec989  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ec98d  894704               mov dword ptr [edi + 4], eax
// 005ec990  85f6                 test esi, esi
// 005ec992  742a                 je 0x5ec9be
// 005ec994  8d4e04               lea ecx, [esi + 4]
// 005ec997  83caff               or edx, 0xffffffff
// 005ec99a  f00fc111             lock xadd dword ptr [ecx], edx
// 005ec99e  751e                 jne 0x5ec9be
// 005ec9a0  8b06                 mov eax, dword ptr [esi]
// 005ec9a2  8b5004               mov edx, dword ptr [eax + 4]
// 005ec9a5  8bce                 mov ecx, esi
// 005ec9a7  ffd2                 call edx
// 005ec9a9  8d4608               lea eax, [esi + 8]
// 005ec9ac  83c9ff               or ecx, 0xffffffff
// 005ec9af  f00fc108             lock xadd dword ptr [eax], ecx
// 005ec9b3  7509                 jne 0x5ec9be
// 005ec9b5  8b16                 mov edx, dword ptr [esi]
// 005ec9b7  8b4208               mov eax, dword ptr [edx + 8]
// 005ec9ba  8bce                 mov ecx, esi
// 005ec9bc  ffd0                 call eax
// 005ec9be  5f                   pop edi
// 005ec9bf  5e                   pop esi
// 005ec9c0  83c408               add esp, 8
// 005ec9c3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

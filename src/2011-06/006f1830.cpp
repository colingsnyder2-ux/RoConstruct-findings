// roc 2011-06 006f1830  unit: RBX::VCollectionService::?$FactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f1830
//
// 006f1830  83ec08               sub esp, 8
// 006f1833  56                   push esi
// 006f1834  8b742410             mov esi, dword ptr [esp + 0x10]
// 006f1838  57                   push edi
// 006f1839  8bf9                 mov edi, ecx
// 006f183b  56                   push esi
// 006f183c  8d4c2410             lea ecx, [esp + 0x10]
// 006f1840  8974240c             mov dword ptr [esp + 0xc], esi
// 006f1844  e847fcffff           call 0x6f1490
// 006f1849  56                   push esi
// 006f184a  8d442410             lea eax, [esp + 0x10]
// 006f184e  56                   push esi
// 006f184f  50                   push eax
// 006f1850  e8eb9d1700           call 0x86b640
// 006f1855  8d4c2414             lea ecx, [esp + 0x14]
// 006f1859  83c40c               add esp, 0xc
// 006f185c  3bcf                 cmp ecx, edi
// 006f185e  7406                 je 0x6f1866
// 006f1860  8b542408             mov edx, dword ptr [esp + 8]
// 006f1864  8917                 mov dword ptr [edi], edx
// 006f1866  8b7704               mov esi, dword ptr [edi + 4]
// 006f1869  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f186d  894704               mov dword ptr [edi + 4], eax
// 006f1870  85f6                 test esi, esi
// 006f1872  742a                 je 0x6f189e
// 006f1874  8d4e04               lea ecx, [esi + 4]
// 006f1877  83caff               or edx, 0xffffffff
// 006f187a  f00fc111             lock xadd dword ptr [ecx], edx
// 006f187e  751e                 jne 0x6f189e
// 006f1880  8b06                 mov eax, dword ptr [esi]
// 006f1882  8b5004               mov edx, dword ptr [eax + 4]
// 006f1885  8bce                 mov ecx, esi
// 006f1887  ffd2                 call edx
// 006f1889  8d4608               lea eax, [esi + 8]
// 006f188c  83c9ff               or ecx, 0xffffffff
// 006f188f  f00fc108             lock xadd dword ptr [eax], ecx
// 006f1893  7509                 jne 0x6f189e
// 006f1895  8b16                 mov edx, dword ptr [esi]
// 006f1897  8b4208               mov eax, dword ptr [edx + 8]
// 006f189a  8bce                 mov ecx, esi
// 006f189c  ffd0                 call eax
// 006f189e  5f                   pop edi
// 006f189f  5e                   pop esi
// 006f18a0  83c408               add esp, 8
// 006f18a3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

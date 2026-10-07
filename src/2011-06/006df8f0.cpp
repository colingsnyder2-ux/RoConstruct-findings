// roc 2011-06 006df8f0  unit: RBX::Soundscape::VCollisionSound::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006df8f0
//
// 006df8f0  83ec08               sub esp, 8
// 006df8f3  56                   push esi
// 006df8f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006df8f8  57                   push edi
// 006df8f9  8bf9                 mov edi, ecx
// 006df8fb  56                   push esi
// 006df8fc  8d4c2410             lea ecx, [esp + 0x10]
// 006df900  8974240c             mov dword ptr [esp + 0xc], esi
// 006df904  e8b75aecff           call 0x5a53c0
// 006df909  56                   push esi
// 006df90a  8d442410             lea eax, [esp + 0x10]
// 006df90e  56                   push esi
// 006df90f  50                   push eax
// 006df910  e82bbd1800           call 0x86b640
// 006df915  8d4c2414             lea ecx, [esp + 0x14]
// 006df919  83c40c               add esp, 0xc
// 006df91c  3bcf                 cmp ecx, edi
// 006df91e  7406                 je 0x6df926
// 006df920  8b542408             mov edx, dword ptr [esp + 8]
// 006df924  8917                 mov dword ptr [edi], edx
// 006df926  8b7704               mov esi, dword ptr [edi + 4]
// 006df929  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006df92d  894704               mov dword ptr [edi + 4], eax
// 006df930  85f6                 test esi, esi
// 006df932  742a                 je 0x6df95e
// 006df934  8d4e04               lea ecx, [esi + 4]
// 006df937  83caff               or edx, 0xffffffff
// 006df93a  f00fc111             lock xadd dword ptr [ecx], edx
// 006df93e  751e                 jne 0x6df95e
// 006df940  8b06                 mov eax, dword ptr [esi]
// 006df942  8b5004               mov edx, dword ptr [eax + 4]
// 006df945  8bce                 mov ecx, esi
// 006df947  ffd2                 call edx
// 006df949  8d4608               lea eax, [esi + 8]
// 006df94c  83c9ff               or ecx, 0xffffffff
// 006df94f  f00fc108             lock xadd dword ptr [eax], ecx
// 006df953  7509                 jne 0x6df95e
// 006df955  8b16                 mov edx, dword ptr [esi]
// 006df957  8b4208               mov eax, dword ptr [edx + 8]
// 006df95a  8bce                 mov ecx, esi
// 006df95c  ffd0                 call eax
// 006df95e  5f                   pop edi
// 006df95f  5e                   pop esi
// 006df960  83c408               add esp, 8
// 006df963  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

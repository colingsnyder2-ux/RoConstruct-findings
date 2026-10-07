// roc 2010-06 006aac50  unit: boost::Vthread::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006aac50
//
// 006aac50  83ec08               sub esp, 8
// 006aac53  56                   push esi
// 006aac54  8b742410             mov esi, dword ptr [esp + 0x10]
// 006aac58  57                   push edi
// 006aac59  8bf9                 mov edi, ecx
// 006aac5b  56                   push esi
// 006aac5c  8d4c2410             lea ecx, [esp + 0x10]
// 006aac60  8974240c             mov dword ptr [esp + 0xc], esi
// 006aac64  e817faffff           call 0x6aa680
// 006aac69  56                   push esi
// 006aac6a  8d442410             lea eax, [esp + 0x10]
// 006aac6e  56                   push esi
// 006aac6f  50                   push eax
// 006aac70  e83b99daff           call 0x4545b0
// 006aac75  8d4c2414             lea ecx, [esp + 0x14]
// 006aac79  83c40c               add esp, 0xc
// 006aac7c  3bcf                 cmp ecx, edi
// 006aac7e  7406                 je 0x6aac86
// 006aac80  8b542408             mov edx, dword ptr [esp + 8]
// 006aac84  8917                 mov dword ptr [edi], edx
// 006aac86  8b7704               mov esi, dword ptr [edi + 4]
// 006aac89  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006aac8d  894704               mov dword ptr [edi + 4], eax
// 006aac90  85f6                 test esi, esi
// 006aac92  742a                 je 0x6aacbe
// 006aac94  8d4e04               lea ecx, [esi + 4]
// 006aac97  83caff               or edx, 0xffffffff
// 006aac9a  f00fc111             lock xadd dword ptr [ecx], edx
// 006aac9e  751e                 jne 0x6aacbe
// 006aaca0  8b06                 mov eax, dword ptr [esi]
// 006aaca2  8b5004               mov edx, dword ptr [eax + 4]
// 006aaca5  8bce                 mov ecx, esi
// 006aaca7  ffd2                 call edx
// 006aaca9  8d4608               lea eax, [esi + 8]
// 006aacac  83c9ff               or ecx, 0xffffffff
// 006aacaf  f00fc108             lock xadd dword ptr [eax], ecx
// 006aacb3  7509                 jne 0x6aacbe
// 006aacb5  8b16                 mov edx, dword ptr [esi]
// 006aacb7  8b4208               mov eax, dword ptr [edx + 8]
// 006aacba  8bce                 mov ecx, esi
// 006aacbc  ffd0                 call eax
// 006aacbe  5f                   pop edi
// 006aacbf  5e                   pop esi
// 006aacc0  83c408               add esp, 8
// 006aacc3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

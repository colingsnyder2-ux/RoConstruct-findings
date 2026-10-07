// roc 2012-06 00576f50  unit: RBX::Network::Replicator::RockyItem  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00576f50
//
// 00576f50  83ec08               sub esp, 8
// 00576f53  56                   push esi
// 00576f54  8b742410             mov esi, dword ptr [esp + 0x10]
// 00576f58  57                   push edi
// 00576f59  8bf9                 mov edi, ecx
// 00576f5b  56                   push esi
// 00576f5c  8d4c2410             lea ecx, [esp + 0x10]
// 00576f60  8974240c             mov dword ptr [esp + 0xc], esi
// 00576f64  e867b9fcff           call 0x5428d0
// 00576f69  56                   push esi
// 00576f6a  8d442410             lea eax, [esp + 0x10]
// 00576f6e  56                   push esi
// 00576f6f  50                   push eax
// 00576f70  e81b380200           call 0x59a790
// 00576f75  8d4c2414             lea ecx, [esp + 0x14]
// 00576f79  83c40c               add esp, 0xc
// 00576f7c  3bcf                 cmp ecx, edi
// 00576f7e  7406                 je 0x576f86
// 00576f80  8b542408             mov edx, dword ptr [esp + 8]
// 00576f84  8917                 mov dword ptr [edi], edx
// 00576f86  8b7704               mov esi, dword ptr [edi + 4]
// 00576f89  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00576f8d  894704               mov dword ptr [edi + 4], eax
// 00576f90  85f6                 test esi, esi
// 00576f92  742a                 je 0x576fbe
// 00576f94  8d4e04               lea ecx, [esi + 4]
// 00576f97  83caff               or edx, 0xffffffff
// 00576f9a  f00fc111             lock xadd dword ptr [ecx], edx
// 00576f9e  751e                 jne 0x576fbe
// 00576fa0  8b06                 mov eax, dword ptr [esi]
// 00576fa2  8b5004               mov edx, dword ptr [eax + 4]
// 00576fa5  8bce                 mov ecx, esi
// 00576fa7  ffd2                 call edx
// 00576fa9  8d4608               lea eax, [esi + 8]
// 00576fac  83c9ff               or ecx, 0xffffffff
// 00576faf  f00fc108             lock xadd dword ptr [eax], ecx
// 00576fb3  7509                 jne 0x576fbe
// 00576fb5  8b16                 mov edx, dword ptr [esi]
// 00576fb7  8b4208               mov eax, dword ptr [edx + 8]
// 00576fba  8bce                 mov ecx, esi
// 00576fbc  ffd0                 call eax
// 00576fbe  5f                   pop edi
// 00576fbf  5e                   pop esi
// 00576fc0  83c408               add esp, 8
// 00576fc3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

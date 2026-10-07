// roc 2011-06 004f8430  unit: RBX::Network::Replicator::SendDataJob  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f8430
//
// 004f8430  83ec08               sub esp, 8
// 004f8433  56                   push esi
// 004f8434  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f8438  57                   push edi
// 004f8439  8bf9                 mov edi, ecx
// 004f843b  56                   push esi
// 004f843c  8d4c2410             lea ecx, [esp + 0x10]
// 004f8440  8974240c             mov dword ptr [esp + 0xc], esi
// 004f8444  e807d7ffff           call 0x4f5b50
// 004f8449  56                   push esi
// 004f844a  8d442410             lea eax, [esp + 0x10]
// 004f844e  56                   push esi
// 004f844f  50                   push eax
// 004f8450  e8eb313700           call 0x86b640
// 004f8455  8d4c2414             lea ecx, [esp + 0x14]
// 004f8459  83c40c               add esp, 0xc
// 004f845c  3bcf                 cmp ecx, edi
// 004f845e  7406                 je 0x4f8466
// 004f8460  8b542408             mov edx, dword ptr [esp + 8]
// 004f8464  8917                 mov dword ptr [edi], edx
// 004f8466  8b7704               mov esi, dword ptr [edi + 4]
// 004f8469  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f846d  894704               mov dword ptr [edi + 4], eax
// 004f8470  85f6                 test esi, esi
// 004f8472  742a                 je 0x4f849e
// 004f8474  8d4e04               lea ecx, [esi + 4]
// 004f8477  83caff               or edx, 0xffffffff
// 004f847a  f00fc111             lock xadd dword ptr [ecx], edx
// 004f847e  751e                 jne 0x4f849e
// 004f8480  8b06                 mov eax, dword ptr [esi]
// 004f8482  8b5004               mov edx, dword ptr [eax + 4]
// 004f8485  8bce                 mov ecx, esi
// 004f8487  ffd2                 call edx
// 004f8489  8d4608               lea eax, [esi + 8]
// 004f848c  83c9ff               or ecx, 0xffffffff
// 004f848f  f00fc108             lock xadd dword ptr [eax], ecx
// 004f8493  7509                 jne 0x4f849e
// 004f8495  8b16                 mov edx, dword ptr [esi]
// 004f8497  8b4208               mov eax, dword ptr [edx + 8]
// 004f849a  8bce                 mov ecx, esi
// 004f849c  ffd0                 call eax
// 004f849e  5f                   pop edi
// 004f849f  5e                   pop esi
// 004f84a0  83c408               add esp, 8
// 004f84a3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

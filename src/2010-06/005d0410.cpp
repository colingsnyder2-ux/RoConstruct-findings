// roc 2010-06 005d0410  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005d0410
//
// 005d0410  83ec08               sub esp, 8
// 005d0413  56                   push esi
// 005d0414  8b742410             mov esi, dword ptr [esp + 0x10]
// 005d0418  57                   push edi
// 005d0419  8bf9                 mov edi, ecx
// 005d041b  56                   push esi
// 005d041c  8d4c2410             lea ecx, [esp + 0x10]
// 005d0420  8974240c             mov dword ptr [esp + 0xc], esi
// 005d0424  e867eeffff           call 0x5cf290
// 005d0429  56                   push esi
// 005d042a  8d442410             lea eax, [esp + 0x10]
// 005d042e  56                   push esi
// 005d042f  50                   push eax
// 005d0430  e87b41e8ff           call 0x4545b0
// 005d0435  8d4c2414             lea ecx, [esp + 0x14]
// 005d0439  83c40c               add esp, 0xc
// 005d043c  3bcf                 cmp ecx, edi
// 005d043e  7406                 je 0x5d0446
// 005d0440  8b542408             mov edx, dword ptr [esp + 8]
// 005d0444  8917                 mov dword ptr [edi], edx
// 005d0446  8b7704               mov esi, dword ptr [edi + 4]
// 005d0449  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d044d  894704               mov dword ptr [edi + 4], eax
// 005d0450  85f6                 test esi, esi
// 005d0452  742a                 je 0x5d047e
// 005d0454  8d4e04               lea ecx, [esi + 4]
// 005d0457  83caff               or edx, 0xffffffff
// 005d045a  f00fc111             lock xadd dword ptr [ecx], edx
// 005d045e  751e                 jne 0x5d047e
// 005d0460  8b06                 mov eax, dword ptr [esi]
// 005d0462  8b5004               mov edx, dword ptr [eax + 4]
// 005d0465  8bce                 mov ecx, esi
// 005d0467  ffd2                 call edx
// 005d0469  8d4608               lea eax, [esi + 8]
// 005d046c  83c9ff               or ecx, 0xffffffff
// 005d046f  f00fc108             lock xadd dword ptr [eax], ecx
// 005d0473  7509                 jne 0x5d047e
// 005d0475  8b16                 mov edx, dword ptr [esi]
// 005d0477  8b4208               mov eax, dword ptr [edx + 8]
// 005d047a  8bce                 mov ecx, esi
// 005d047c  ffd0                 call eax
// 005d047e  5f                   pop edi
// 005d047f  5e                   pop esi
// 005d0480  83c408               add esp, 8
// 005d0483  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

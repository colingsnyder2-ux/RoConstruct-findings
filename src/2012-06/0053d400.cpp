// roc 2012-06 0053d400  unit: RBX::Network::VPlayer::?$EventDesc  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0053d400
//
// 0053d400  83ec08               sub esp, 8
// 0053d403  56                   push esi
// 0053d404  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053d408  57                   push edi
// 0053d409  8bf9                 mov edi, ecx
// 0053d40b  56                   push esi
// 0053d40c  8d4c2410             lea ecx, [esp + 0x10]
// 0053d410  8974240c             mov dword ptr [esp + 0xc], esi
// 0053d414  e847d5ffff           call 0x53a960
// 0053d419  56                   push esi
// 0053d41a  8d442410             lea eax, [esp + 0x10]
// 0053d41e  56                   push esi
// 0053d41f  50                   push eax
// 0053d420  e86bd30500           call 0x59a790
// 0053d425  8d4c2414             lea ecx, [esp + 0x14]
// 0053d429  83c40c               add esp, 0xc
// 0053d42c  3bcf                 cmp ecx, edi
// 0053d42e  7406                 je 0x53d436
// 0053d430  8b542408             mov edx, dword ptr [esp + 8]
// 0053d434  8917                 mov dword ptr [edi], edx
// 0053d436  8b7704               mov esi, dword ptr [edi + 4]
// 0053d439  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053d43d  894704               mov dword ptr [edi + 4], eax
// 0053d440  85f6                 test esi, esi
// 0053d442  742a                 je 0x53d46e
// 0053d444  8d4e04               lea ecx, [esi + 4]
// 0053d447  83caff               or edx, 0xffffffff
// 0053d44a  f00fc111             lock xadd dword ptr [ecx], edx
// 0053d44e  751e                 jne 0x53d46e
// 0053d450  8b06                 mov eax, dword ptr [esi]
// 0053d452  8b5004               mov edx, dword ptr [eax + 4]
// 0053d455  8bce                 mov ecx, esi
// 0053d457  ffd2                 call edx
// 0053d459  8d4608               lea eax, [esi + 8]
// 0053d45c  83c9ff               or ecx, 0xffffffff
// 0053d45f  f00fc108             lock xadd dword ptr [eax], ecx
// 0053d463  7509                 jne 0x53d46e
// 0053d465  8b16                 mov edx, dword ptr [esi]
// 0053d467  8b4208               mov eax, dword ptr [edx + 8]
// 0053d46a  8bce                 mov ecx, esi
// 0053d46c  ffd0                 call eax
// 0053d46e  5f                   pop edi
// 0053d46f  5e                   pop esi
// 0053d470  83c408               add esp, 8
// 0053d473  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

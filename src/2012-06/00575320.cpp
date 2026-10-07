// roc 2012-06 00575320  unit: AsyncResult  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00575320
//
// 00575320  83ec08               sub esp, 8
// 00575323  56                   push esi
// 00575324  8b742410             mov esi, dword ptr [esp + 0x10]
// 00575328  57                   push edi
// 00575329  8bf9                 mov edi, ecx
// 0057532b  56                   push esi
// 0057532c  8d4c2410             lea ecx, [esp + 0x10]
// 00575330  8974240c             mov dword ptr [esp + 0xc], esi
// 00575334  e877ceffff           call 0x5721b0
// 00575339  56                   push esi
// 0057533a  8d442410             lea eax, [esp + 0x10]
// 0057533e  56                   push esi
// 0057533f  50                   push eax
// 00575340  e84b540200           call 0x59a790
// 00575345  8d4c2414             lea ecx, [esp + 0x14]
// 00575349  83c40c               add esp, 0xc
// 0057534c  3bcf                 cmp ecx, edi
// 0057534e  7406                 je 0x575356
// 00575350  8b542408             mov edx, dword ptr [esp + 8]
// 00575354  8917                 mov dword ptr [edi], edx
// 00575356  8b7704               mov esi, dword ptr [edi + 4]
// 00575359  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057535d  894704               mov dword ptr [edi + 4], eax
// 00575360  85f6                 test esi, esi
// 00575362  742a                 je 0x57538e
// 00575364  8d4e04               lea ecx, [esi + 4]
// 00575367  83caff               or edx, 0xffffffff
// 0057536a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057536e  751e                 jne 0x57538e
// 00575370  8b06                 mov eax, dword ptr [esi]
// 00575372  8b5004               mov edx, dword ptr [eax + 4]
// 00575375  8bce                 mov ecx, esi
// 00575377  ffd2                 call edx
// 00575379  8d4608               lea eax, [esi + 8]
// 0057537c  83c9ff               or ecx, 0xffffffff
// 0057537f  f00fc108             lock xadd dword ptr [eax], ecx
// 00575383  7509                 jne 0x57538e
// 00575385  8b16                 mov edx, dword ptr [esi]
// 00575387  8b4208               mov eax, dword ptr [edx + 8]
// 0057538a  8bce                 mov ecx, esi
// 0057538c  ffd0                 call eax
// 0057538e  5f                   pop edi
// 0057538f  5e                   pop esi
// 00575390  83c408               add esp, 8
// 00575393  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

// roc 2009-06 005fdc80  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fdc80
//
// 005fdc80  83ec08               sub esp, 8
// 005fdc83  56                   push esi
// 005fdc84  8b742410             mov esi, dword ptr [esp + 0x10]
// 005fdc88  57                   push edi
// 005fdc89  8bf9                 mov edi, ecx
// 005fdc8b  56                   push esi
// 005fdc8c  8d4c2410             lea ecx, [esp + 0x10]
// 005fdc90  8974240c             mov dword ptr [esp + 0xc], esi
// 005fdc94  e817f1ffff           call 0x5fcdb0
// 005fdc99  56                   push esi
// 005fdc9a  8d442410             lea eax, [esp + 0x10]
// 005fdc9e  56                   push esi
// 005fdc9f  50                   push eax
// 005fdca0  e83b6d0700           call 0x6749e0
// 005fdca5  8d4c2414             lea ecx, [esp + 0x14]
// 005fdca9  83c40c               add esp, 0xc
// 005fdcac  3bcf                 cmp ecx, edi
// 005fdcae  7406                 je 0x5fdcb6
// 005fdcb0  8b542408             mov edx, dword ptr [esp + 8]
// 005fdcb4  8917                 mov dword ptr [edi], edx
// 005fdcb6  8b7704               mov esi, dword ptr [edi + 4]
// 005fdcb9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fdcbd  894704               mov dword ptr [edi + 4], eax
// 005fdcc0  85f6                 test esi, esi
// 005fdcc2  742a                 je 0x5fdcee
// 005fdcc4  8d4e04               lea ecx, [esi + 4]
// 005fdcc7  83caff               or edx, 0xffffffff
// 005fdcca  f00fc111             lock xadd dword ptr [ecx], edx
// 005fdcce  751e                 jne 0x5fdcee
// 005fdcd0  8b06                 mov eax, dword ptr [esi]
// 005fdcd2  8b5004               mov edx, dword ptr [eax + 4]
// 005fdcd5  8bce                 mov ecx, esi
// 005fdcd7  ffd2                 call edx
// 005fdcd9  8d4608               lea eax, [esi + 8]
// 005fdcdc  83c9ff               or ecx, 0xffffffff
// 005fdcdf  f00fc108             lock xadd dword ptr [eax], ecx
// 005fdce3  7509                 jne 0x5fdcee
// 005fdce5  8b16                 mov edx, dword ptr [esi]
// 005fdce7  8b4208               mov eax, dword ptr [edx + 8]
// 005fdcea  8bce                 mov ecx, esi
// 005fdcec  ffd0                 call eax
// 005fdcee  5f                   pop edi
// 005fdcef  5e                   pop esi
// 005fdcf0  83c408               add esp, 8
// 005fdcf3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

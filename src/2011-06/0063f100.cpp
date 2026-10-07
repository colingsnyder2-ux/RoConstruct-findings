// roc 2011-06 0063f100  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063f100
//
// 0063f100  83ec08               sub esp, 8
// 0063f103  56                   push esi
// 0063f104  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063f108  57                   push edi
// 0063f109  8bf9                 mov edi, ecx
// 0063f10b  56                   push esi
// 0063f10c  8d4c2410             lea ecx, [esp + 0x10]
// 0063f110  8974240c             mov dword ptr [esp + 0xc], esi
// 0063f114  e8e7f8ffff           call 0x63ea00
// 0063f119  56                   push esi
// 0063f11a  8d442410             lea eax, [esp + 0x10]
// 0063f11e  56                   push esi
// 0063f11f  50                   push eax
// 0063f120  e81bc52200           call 0x86b640
// 0063f125  8d4c2414             lea ecx, [esp + 0x14]
// 0063f129  83c40c               add esp, 0xc
// 0063f12c  3bcf                 cmp ecx, edi
// 0063f12e  7406                 je 0x63f136
// 0063f130  8b542408             mov edx, dword ptr [esp + 8]
// 0063f134  8917                 mov dword ptr [edi], edx
// 0063f136  8b7704               mov esi, dword ptr [edi + 4]
// 0063f139  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063f13d  894704               mov dword ptr [edi + 4], eax
// 0063f140  85f6                 test esi, esi
// 0063f142  742a                 je 0x63f16e
// 0063f144  8d4e04               lea ecx, [esi + 4]
// 0063f147  83caff               or edx, 0xffffffff
// 0063f14a  f00fc111             lock xadd dword ptr [ecx], edx
// 0063f14e  751e                 jne 0x63f16e
// 0063f150  8b06                 mov eax, dword ptr [esi]
// 0063f152  8b5004               mov edx, dword ptr [eax + 4]
// 0063f155  8bce                 mov ecx, esi
// 0063f157  ffd2                 call edx
// 0063f159  8d4608               lea eax, [esi + 8]
// 0063f15c  83c9ff               or ecx, 0xffffffff
// 0063f15f  f00fc108             lock xadd dword ptr [eax], ecx
// 0063f163  7509                 jne 0x63f16e
// 0063f165  8b16                 mov edx, dword ptr [esi]
// 0063f167  8b4208               mov eax, dword ptr [edx + 8]
// 0063f16a  8bce                 mov ecx, esi
// 0063f16c  ffd0                 call eax
// 0063f16e  5f                   pop edi
// 0063f16f  5e                   pop esi
// 0063f170  83c408               add esp, 8
// 0063f173  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

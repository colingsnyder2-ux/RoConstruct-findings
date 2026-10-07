// roc 2009-06 005dabb0  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dabb0
//
// 005dabb0  83ec08               sub esp, 8
// 005dabb3  56                   push esi
// 005dabb4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005dabb8  57                   push edi
// 005dabb9  8bf9                 mov edi, ecx
// 005dabbb  56                   push esi
// 005dabbc  8d4c2410             lea ecx, [esp + 0x10]
// 005dabc0  8974240c             mov dword ptr [esp + 0xc], esi
// 005dabc4  e8c7f1ffff           call 0x5d9d90
// 005dabc9  56                   push esi
// 005dabca  8d442410             lea eax, [esp + 0x10]
// 005dabce  56                   push esi
// 005dabcf  50                   push eax
// 005dabd0  e80b9e0900           call 0x6749e0
// 005dabd5  8d4c2414             lea ecx, [esp + 0x14]
// 005dabd9  83c40c               add esp, 0xc
// 005dabdc  3bcf                 cmp ecx, edi
// 005dabde  7406                 je 0x5dabe6
// 005dabe0  8b542408             mov edx, dword ptr [esp + 8]
// 005dabe4  8917                 mov dword ptr [edi], edx
// 005dabe6  8b7704               mov esi, dword ptr [edi + 4]
// 005dabe9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005dabed  894704               mov dword ptr [edi + 4], eax
// 005dabf0  85f6                 test esi, esi
// 005dabf2  742a                 je 0x5dac1e
// 005dabf4  8d4e04               lea ecx, [esi + 4]
// 005dabf7  83caff               or edx, 0xffffffff
// 005dabfa  f00fc111             lock xadd dword ptr [ecx], edx
// 005dabfe  751e                 jne 0x5dac1e
// 005dac00  8b06                 mov eax, dword ptr [esi]
// 005dac02  8b5004               mov edx, dword ptr [eax + 4]
// 005dac05  8bce                 mov ecx, esi
// 005dac07  ffd2                 call edx
// 005dac09  8d4608               lea eax, [esi + 8]
// 005dac0c  83c9ff               or ecx, 0xffffffff
// 005dac0f  f00fc108             lock xadd dword ptr [eax], ecx
// 005dac13  7509                 jne 0x5dac1e
// 005dac15  8b16                 mov edx, dword ptr [esi]
// 005dac17  8b4208               mov eax, dword ptr [edx + 8]
// 005dac1a  8bce                 mov ecx, esi
// 005dac1c  ffd0                 call eax
// 005dac1e  5f                   pop edi
// 005dac1f  5e                   pop esi
// 005dac20  83c408               add esp, 8
// 005dac23  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

// roc 2008-06 0041b0f0  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b0f0
//
// 0041b0f0  83ec08               sub esp, 8
// 0041b0f3  56                   push esi
// 0041b0f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041b0f8  57                   push edi
// 0041b0f9  8bf9                 mov edi, ecx
// 0041b0fb  56                   push esi
// 0041b0fc  8d4c2410             lea ecx, [esp + 0x10]
// 0041b100  8974240c             mov dword ptr [esp + 0xc], esi
// 0041b104  e827fdffff           call 0x41ae30
// 0041b109  56                   push esi
// 0041b10a  8d442410             lea eax, [esp + 0x10]
// 0041b10e  56                   push esi
// 0041b10f  50                   push eax
// 0041b110  e8fb220600           call 0x47d410
// 0041b115  8d4c2414             lea ecx, [esp + 0x14]
// 0041b119  83c40c               add esp, 0xc
// 0041b11c  3bcf                 cmp ecx, edi
// 0041b11e  7406                 je 0x41b126
// 0041b120  8b542408             mov edx, dword ptr [esp + 8]
// 0041b124  8917                 mov dword ptr [edi], edx
// 0041b126  8b7704               mov esi, dword ptr [edi + 4]
// 0041b129  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b12d  894704               mov dword ptr [edi + 4], eax
// 0041b130  85f6                 test esi, esi
// 0041b132  742a                 je 0x41b15e
// 0041b134  8d4e04               lea ecx, [esi + 4]
// 0041b137  83caff               or edx, 0xffffffff
// 0041b13a  f00fc111             lock xadd dword ptr [ecx], edx
// 0041b13e  751e                 jne 0x41b15e
// 0041b140  8b06                 mov eax, dword ptr [esi]
// 0041b142  8b5004               mov edx, dword ptr [eax + 4]
// 0041b145  8bce                 mov ecx, esi
// 0041b147  ffd2                 call edx
// 0041b149  8d4608               lea eax, [esi + 8]
// 0041b14c  83c9ff               or ecx, 0xffffffff
// 0041b14f  f00fc108             lock xadd dword ptr [eax], ecx
// 0041b153  7509                 jne 0x41b15e
// 0041b155  8b16                 mov edx, dword ptr [esi]
// 0041b157  8b4208               mov eax, dword ptr [edx + 8]
// 0041b15a  8bce                 mov ecx, esi
// 0041b15c  ffd0                 call eax
// 0041b15e  5f                   pop edi
// 0041b15f  5e                   pop esi
// 0041b160  83c408               add esp, 8
// 0041b163  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

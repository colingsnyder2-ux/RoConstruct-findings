// roc 2012-06 00720c40  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00720c40
//
// 00720c40  83ec08               sub esp, 8
// 00720c43  56                   push esi
// 00720c44  8b742410             mov esi, dword ptr [esp + 0x10]
// 00720c48  57                   push edi
// 00720c49  8bf9                 mov edi, ecx
// 00720c4b  56                   push esi
// 00720c4c  8d4c2410             lea ecx, [esp + 0x10]
// 00720c50  8974240c             mov dword ptr [esp + 0xc], esi
// 00720c54  e867f7ffff           call 0x7203c0
// 00720c59  56                   push esi
// 00720c5a  8d442410             lea eax, [esp + 0x10]
// 00720c5e  56                   push esi
// 00720c5f  50                   push eax
// 00720c60  e82b9be7ff           call 0x59a790
// 00720c65  8d4c2414             lea ecx, [esp + 0x14]
// 00720c69  83c40c               add esp, 0xc
// 00720c6c  3bcf                 cmp ecx, edi
// 00720c6e  7406                 je 0x720c76
// 00720c70  8b542408             mov edx, dword ptr [esp + 8]
// 00720c74  8917                 mov dword ptr [edi], edx
// 00720c76  8b7704               mov esi, dword ptr [edi + 4]
// 00720c79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00720c7d  894704               mov dword ptr [edi + 4], eax
// 00720c80  85f6                 test esi, esi
// 00720c82  742a                 je 0x720cae
// 00720c84  8d4e04               lea ecx, [esi + 4]
// 00720c87  83caff               or edx, 0xffffffff
// 00720c8a  f00fc111             lock xadd dword ptr [ecx], edx
// 00720c8e  751e                 jne 0x720cae
// 00720c90  8b06                 mov eax, dword ptr [esi]
// 00720c92  8b5004               mov edx, dword ptr [eax + 4]
// 00720c95  8bce                 mov ecx, esi
// 00720c97  ffd2                 call edx
// 00720c99  8d4608               lea eax, [esi + 8]
// 00720c9c  83c9ff               or ecx, 0xffffffff
// 00720c9f  f00fc108             lock xadd dword ptr [eax], ecx
// 00720ca3  7509                 jne 0x720cae
// 00720ca5  8b16                 mov edx, dword ptr [esi]
// 00720ca7  8b4208               mov eax, dword ptr [edx + 8]
// 00720caa  8bce                 mov ecx, esi
// 00720cac  ffd0                 call eax
// 00720cae  5f                   pop edi
// 00720caf  5e                   pop esi
// 00720cb0  83c408               add esp, 8
// 00720cb3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

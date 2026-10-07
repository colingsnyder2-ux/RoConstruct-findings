// roc 2008-06 0055e1d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055e1d0
//
// 0055e1d0  83ec08               sub esp, 8
// 0055e1d3  56                   push esi
// 0055e1d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055e1d8  57                   push edi
// 0055e1d9  8bf9                 mov edi, ecx
// 0055e1db  56                   push esi
// 0055e1dc  8d4c2410             lea ecx, [esp + 0x10]
// 0055e1e0  8974240c             mov dword ptr [esp + 0xc], esi
// 0055e1e4  e8f7f3ffff           call 0x55d5e0
// 0055e1e9  56                   push esi
// 0055e1ea  8d442410             lea eax, [esp + 0x10]
// 0055e1ee  56                   push esi
// 0055e1ef  50                   push eax
// 0055e1f0  e81bf2f1ff           call 0x47d410
// 0055e1f5  8d4c2414             lea ecx, [esp + 0x14]
// 0055e1f9  83c40c               add esp, 0xc
// 0055e1fc  3bcf                 cmp ecx, edi
// 0055e1fe  7406                 je 0x55e206
// 0055e200  8b542408             mov edx, dword ptr [esp + 8]
// 0055e204  8917                 mov dword ptr [edi], edx
// 0055e206  8b7704               mov esi, dword ptr [edi + 4]
// 0055e209  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055e20d  894704               mov dword ptr [edi + 4], eax
// 0055e210  85f6                 test esi, esi
// 0055e212  742a                 je 0x55e23e
// 0055e214  8d4e04               lea ecx, [esi + 4]
// 0055e217  83caff               or edx, 0xffffffff
// 0055e21a  f00fc111             lock xadd dword ptr [ecx], edx
// 0055e21e  751e                 jne 0x55e23e
// 0055e220  8b06                 mov eax, dword ptr [esi]
// 0055e222  8b5004               mov edx, dword ptr [eax + 4]
// 0055e225  8bce                 mov ecx, esi
// 0055e227  ffd2                 call edx
// 0055e229  8d4608               lea eax, [esi + 8]
// 0055e22c  83c9ff               or ecx, 0xffffffff
// 0055e22f  f00fc108             lock xadd dword ptr [eax], ecx
// 0055e233  7509                 jne 0x55e23e
// 0055e235  8b16                 mov edx, dword ptr [esi]
// 0055e237  8b4208               mov eax, dword ptr [edx + 8]
// 0055e23a  8bce                 mov ecx, esi
// 0055e23c  ffd0                 call eax
// 0055e23e  5f                   pop edi
// 0055e23f  5e                   pop esi
// 0055e240  83c408               add esp, 8
// 0055e243  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

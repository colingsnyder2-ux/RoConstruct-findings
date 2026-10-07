// roc 2010-06 00602c60  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00602c60
//
// 00602c60  83ec08               sub esp, 8
// 00602c63  56                   push esi
// 00602c64  8b742410             mov esi, dword ptr [esp + 0x10]
// 00602c68  57                   push edi
// 00602c69  8bf9                 mov edi, ecx
// 00602c6b  56                   push esi
// 00602c6c  8d4c2410             lea ecx, [esp + 0x10]
// 00602c70  8974240c             mov dword ptr [esp + 0xc], esi
// 00602c74  e877f8ffff           call 0x6024f0
// 00602c79  56                   push esi
// 00602c7a  8d442410             lea eax, [esp + 0x10]
// 00602c7e  56                   push esi
// 00602c7f  50                   push eax
// 00602c80  e82b19e5ff           call 0x4545b0
// 00602c85  8d4c2414             lea ecx, [esp + 0x14]
// 00602c89  83c40c               add esp, 0xc
// 00602c8c  3bcf                 cmp ecx, edi
// 00602c8e  7406                 je 0x602c96
// 00602c90  8b542408             mov edx, dword ptr [esp + 8]
// 00602c94  8917                 mov dword ptr [edi], edx
// 00602c96  8b7704               mov esi, dword ptr [edi + 4]
// 00602c99  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00602c9d  894704               mov dword ptr [edi + 4], eax
// 00602ca0  85f6                 test esi, esi
// 00602ca2  742a                 je 0x602cce
// 00602ca4  8d4e04               lea ecx, [esi + 4]
// 00602ca7  83caff               or edx, 0xffffffff
// 00602caa  f00fc111             lock xadd dword ptr [ecx], edx
// 00602cae  751e                 jne 0x602cce
// 00602cb0  8b06                 mov eax, dword ptr [esi]
// 00602cb2  8b5004               mov edx, dword ptr [eax + 4]
// 00602cb5  8bce                 mov ecx, esi
// 00602cb7  ffd2                 call edx
// 00602cb9  8d4608               lea eax, [esi + 8]
// 00602cbc  83c9ff               or ecx, 0xffffffff
// 00602cbf  f00fc108             lock xadd dword ptr [eax], ecx
// 00602cc3  7509                 jne 0x602cce
// 00602cc5  8b16                 mov edx, dword ptr [esi]
// 00602cc7  8b4208               mov eax, dword ptr [edx + 8]
// 00602cca  8bce                 mov ecx, esi
// 00602ccc  ffd0                 call eax
// 00602cce  5f                   pop edi
// 00602ccf  5e                   pop esi
// 00602cd0  83c408               add esp, 8
// 00602cd3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

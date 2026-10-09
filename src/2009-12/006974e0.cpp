// roc 2009-12 006974e0  unit: RBX::VIAdornableCollector::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006974e0
//
// 006974e0  83ec08               sub esp, 8
// 006974e3  56                   push esi
// 006974e4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006974e8  57                   push edi
// 006974e9  8bf9                 mov edi, ecx
// 006974eb  56                   push esi
// 006974ec  8d4c2410             lea ecx, [esp + 0x10]
// 006974f0  8974240c             mov dword ptr [esp + 0xc], esi
// 006974f4  e817f9ffff           call 0x696e10
// 006974f9  56                   push esi
// 006974fa  8d442410             lea eax, [esp + 0x10]
// 006974fe  56                   push esi
// 006974ff  50                   push eax
// 00697500  e88bd51b00           call 0x854a90
// 00697505  8d4c2414             lea ecx, [esp + 0x14]
// 00697509  83c40c               add esp, 0xc
// 0069750c  3bcf                 cmp ecx, edi
// 0069750e  7406                 je 0x697516
// 00697510  8b542408             mov edx, dword ptr [esp + 8]
// 00697514  8917                 mov dword ptr [edi], edx
// 00697516  8b7704               mov esi, dword ptr [edi + 4]
// 00697519  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0069751d  894704               mov dword ptr [edi + 4], eax
// 00697520  85f6                 test esi, esi
// 00697522  742a                 je 0x69754e
// 00697524  8d4e04               lea ecx, [esi + 4]
// 00697527  83caff               or edx, 0xffffffff
// 0069752a  f00fc111             lock xadd dword ptr [ecx], edx
// 0069752e  751e                 jne 0x69754e
// 00697530  8b06                 mov eax, dword ptr [esi]
// 00697532  8b5004               mov edx, dword ptr [eax + 4]
// 00697535  8bce                 mov ecx, esi
// 00697537  ffd2                 call edx
// 00697539  8d4608               lea eax, [esi + 8]
// 0069753c  83c9ff               or ecx, 0xffffffff
// 0069753f  f00fc108             lock xadd dword ptr [eax], ecx
// 00697543  7509                 jne 0x69754e
// 00697545  8b16                 mov edx, dword ptr [esi]
// 00697547  8b4208               mov eax, dword ptr [edx + 8]
// 0069754a  8bce                 mov ecx, esi
// 0069754c  ffd0                 call eax
// 0069754e  5f                   pop edi
// 0069754f  5e                   pop esi
// 00697550  83c408               add esp, 8
// 00697553  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

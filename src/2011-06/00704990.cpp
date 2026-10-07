// roc 2011-06 00704990  unit: RBX::Handles  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00704990
//
// 00704990  83ec08               sub esp, 8
// 00704993  56                   push esi
// 00704994  8b742410             mov esi, dword ptr [esp + 0x10]
// 00704998  57                   push edi
// 00704999  8bf9                 mov edi, ecx
// 0070499b  56                   push esi
// 0070499c  8d4c2410             lea ecx, [esp + 0x10]
// 007049a0  8974240c             mov dword ptr [esp + 0xc], esi
// 007049a4  e8f7feffff           call 0x7048a0
// 007049a9  56                   push esi
// 007049aa  8d442410             lea eax, [esp + 0x10]
// 007049ae  56                   push esi
// 007049af  50                   push eax
// 007049b0  e88b6c1600           call 0x86b640
// 007049b5  8d4c2414             lea ecx, [esp + 0x14]
// 007049b9  83c40c               add esp, 0xc
// 007049bc  3bcf                 cmp ecx, edi
// 007049be  7406                 je 0x7049c6
// 007049c0  8b542408             mov edx, dword ptr [esp + 8]
// 007049c4  8917                 mov dword ptr [edi], edx
// 007049c6  8b7704               mov esi, dword ptr [edi + 4]
// 007049c9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007049cd  894704               mov dword ptr [edi + 4], eax
// 007049d0  85f6                 test esi, esi
// 007049d2  742a                 je 0x7049fe
// 007049d4  8d4e04               lea ecx, [esi + 4]
// 007049d7  83caff               or edx, 0xffffffff
// 007049da  f00fc111             lock xadd dword ptr [ecx], edx
// 007049de  751e                 jne 0x7049fe
// 007049e0  8b06                 mov eax, dword ptr [esi]
// 007049e2  8b5004               mov edx, dword ptr [eax + 4]
// 007049e5  8bce                 mov ecx, esi
// 007049e7  ffd2                 call edx
// 007049e9  8d4608               lea eax, [esi + 8]
// 007049ec  83c9ff               or ecx, 0xffffffff
// 007049ef  f00fc108             lock xadd dword ptr [eax], ecx
// 007049f3  7509                 jne 0x7049fe
// 007049f5  8b16                 mov edx, dword ptr [esi]
// 007049f7  8b4208               mov eax, dword ptr [edx + 8]
// 007049fa  8bce                 mov ecx, esi
// 007049fc  ffd0                 call eax
// 007049fe  5f                   pop edi
// 007049ff  5e                   pop esi
// 00704a00  83c408               add esp, 8
// 00704a03  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

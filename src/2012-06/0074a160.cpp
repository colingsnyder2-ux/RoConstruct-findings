// roc 2012-06 0074a160  unit: RBX::ContentProvider  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0074a160
//
// 0074a160  83ec08               sub esp, 8
// 0074a163  56                   push esi
// 0074a164  8b742410             mov esi, dword ptr [esp + 0x10]
// 0074a168  57                   push edi
// 0074a169  8bf9                 mov edi, ecx
// 0074a16b  56                   push esi
// 0074a16c  8d4c2410             lea ecx, [esp + 0x10]
// 0074a170  8974240c             mov dword ptr [esp + 0xc], esi
// 0074a174  e847f5ffff           call 0x7496c0
// 0074a179  56                   push esi
// 0074a17a  8d442410             lea eax, [esp + 0x10]
// 0074a17e  56                   push esi
// 0074a17f  50                   push eax
// 0074a180  e80b06e5ff           call 0x59a790
// 0074a185  8d4c2414             lea ecx, [esp + 0x14]
// 0074a189  83c40c               add esp, 0xc
// 0074a18c  3bcf                 cmp ecx, edi
// 0074a18e  7406                 je 0x74a196
// 0074a190  8b542408             mov edx, dword ptr [esp + 8]
// 0074a194  8917                 mov dword ptr [edi], edx
// 0074a196  8b7704               mov esi, dword ptr [edi + 4]
// 0074a199  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0074a19d  894704               mov dword ptr [edi + 4], eax
// 0074a1a0  85f6                 test esi, esi
// 0074a1a2  742a                 je 0x74a1ce
// 0074a1a4  8d4e04               lea ecx, [esi + 4]
// 0074a1a7  83caff               or edx, 0xffffffff
// 0074a1aa  f00fc111             lock xadd dword ptr [ecx], edx
// 0074a1ae  751e                 jne 0x74a1ce
// 0074a1b0  8b06                 mov eax, dword ptr [esi]
// 0074a1b2  8b5004               mov edx, dword ptr [eax + 4]
// 0074a1b5  8bce                 mov ecx, esi
// 0074a1b7  ffd2                 call edx
// 0074a1b9  8d4608               lea eax, [esi + 8]
// 0074a1bc  83c9ff               or ecx, 0xffffffff
// 0074a1bf  f00fc108             lock xadd dword ptr [eax], ecx
// 0074a1c3  7509                 jne 0x74a1ce
// 0074a1c5  8b16                 mov edx, dword ptr [esi]
// 0074a1c7  8b4208               mov eax, dword ptr [edx + 8]
// 0074a1ca  8bce                 mov ecx, esi
// 0074a1cc  ffd0                 call eax
// 0074a1ce  5f                   pop edi
// 0074a1cf  5e                   pop esi
// 0074a1d0  83c408               add esp, 8
// 0074a1d3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

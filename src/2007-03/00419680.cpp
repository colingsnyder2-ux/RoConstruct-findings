// roc 2007-03 00419680  unit: seg_00410000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00419680
//
// 00419680  83ec08               sub esp, 8
// 00419683  56                   push esi
// 00419684  8b742410             mov esi, dword ptr [esp + 0x10]
// 00419688  57                   push edi
// 00419689  8bf9                 mov edi, ecx
// 0041968b  56                   push esi
// 0041968c  8d4c2410             lea ecx, [esp + 0x10]
// 00419690  8974240c             mov dword ptr [esp + 0xc], esi
// 00419694  e817fcffff           call 0x4192b0
// 00419699  56                   push esi
// 0041969a  8d442410             lea eax, [esp + 0x10]
// 0041969e  56                   push esi
// 0041969f  50                   push eax
// 004196a0  e81be72700           call 0x697dc0
// 004196a5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004196a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004196ad  890f                 mov dword ptr [edi], ecx
// 004196af  8b7704               mov esi, dword ptr [edi + 4]
// 004196b2  83c40c               add esp, 0xc
// 004196b5  85f6                 test esi, esi
// 004196b7  895704               mov dword ptr [edi + 4], edx
// 004196ba  742a                 je 0x4196e6
// 004196bc  8d4604               lea eax, [esi + 4]
// 004196bf  83c9ff               or ecx, 0xffffffff
// 004196c2  f00fc108             lock xadd dword ptr [eax], ecx
// 004196c6  751e                 jne 0x4196e6
// 004196c8  8b16                 mov edx, dword ptr [esi]
// 004196ca  8b4204               mov eax, dword ptr [edx + 4]
// 004196cd  8bce                 mov ecx, esi
// 004196cf  ffd0                 call eax
// 004196d1  8d4e08               lea ecx, [esi + 8]
// 004196d4  83caff               or edx, 0xffffffff
// 004196d7  f00fc111             lock xadd dword ptr [ecx], edx
// 004196db  7509                 jne 0x4196e6
// 004196dd  8b06                 mov eax, dword ptr [esi]
// 004196df  8b5008               mov edx, dword ptr [eax + 8]
// 004196e2  8bce                 mov ecx, esi
// 004196e4  ffd2                 call edx
// 004196e6  5f                   pop edi
// 004196e7  5e                   pop esi
// 004196e8  83c408               add esp, 8
// 004196eb  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

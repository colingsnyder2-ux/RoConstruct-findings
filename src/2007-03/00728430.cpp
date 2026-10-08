// roc 2007-03 00728430  unit: seg_00720000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728430
//
// 00728430  83ec08               sub esp, 8
// 00728433  56                   push esi
// 00728434  8b742410             mov esi, dword ptr [esp + 0x10]
// 00728438  57                   push edi
// 00728439  8bf9                 mov edi, ecx
// 0072843b  56                   push esi
// 0072843c  8d4c2410             lea ecx, [esp + 0x10]
// 00728440  8974240c             mov dword ptr [esp + 0xc], esi
// 00728444  e837ffffff           call 0x728380
// 00728449  56                   push esi
// 0072844a  8d442410             lea eax, [esp + 0x10]
// 0072844e  56                   push esi
// 0072844f  50                   push eax
// 00728450  e86bf9f6ff           call 0x697dc0
// 00728455  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00728459  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072845d  890f                 mov dword ptr [edi], ecx
// 0072845f  8b7704               mov esi, dword ptr [edi + 4]
// 00728462  83c40c               add esp, 0xc
// 00728465  85f6                 test esi, esi
// 00728467  895704               mov dword ptr [edi + 4], edx
// 0072846a  742a                 je 0x728496
// 0072846c  8d4604               lea eax, [esi + 4]
// 0072846f  83c9ff               or ecx, 0xffffffff
// 00728472  f00fc108             lock xadd dword ptr [eax], ecx
// 00728476  751e                 jne 0x728496
// 00728478  8b16                 mov edx, dword ptr [esi]
// 0072847a  8b4204               mov eax, dword ptr [edx + 4]
// 0072847d  8bce                 mov ecx, esi
// 0072847f  ffd0                 call eax
// 00728481  8d4e08               lea ecx, [esi + 8]
// 00728484  83caff               or edx, 0xffffffff
// 00728487  f00fc111             lock xadd dword ptr [ecx], edx
// 0072848b  7509                 jne 0x728496
// 0072848d  8b06                 mov eax, dword ptr [esi]
// 0072848f  8b5008               mov edx, dword ptr [eax + 8]
// 00728492  8bce                 mov ecx, esi
// 00728494  ffd2                 call edx
// 00728496  5f                   pop edi
// 00728497  5e                   pop esi
// 00728498  83c408               add esp, 8
// 0072849b  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

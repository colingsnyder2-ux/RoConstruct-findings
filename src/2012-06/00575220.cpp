// roc 2012-06 00575220  unit: AsyncResult  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00575220
//
// 00575220  83ec08               sub esp, 8
// 00575223  56                   push esi
// 00575224  8b742410             mov esi, dword ptr [esp + 0x10]
// 00575228  57                   push edi
// 00575229  8bf9                 mov edi, ecx
// 0057522b  56                   push esi
// 0057522c  8d4c2410             lea ecx, [esp + 0x10]
// 00575230  8974240c             mov dword ptr [esp + 0xc], esi
// 00575234  e857ceffff           call 0x572090
// 00575239  56                   push esi
// 0057523a  8d442410             lea eax, [esp + 0x10]
// 0057523e  56                   push esi
// 0057523f  50                   push eax
// 00575240  e84b550200           call 0x59a790
// 00575245  8d4c2414             lea ecx, [esp + 0x14]
// 00575249  83c40c               add esp, 0xc
// 0057524c  3bcf                 cmp ecx, edi
// 0057524e  7406                 je 0x575256
// 00575250  8b542408             mov edx, dword ptr [esp + 8]
// 00575254  8917                 mov dword ptr [edi], edx
// 00575256  8b7704               mov esi, dword ptr [edi + 4]
// 00575259  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057525d  894704               mov dword ptr [edi + 4], eax
// 00575260  85f6                 test esi, esi
// 00575262  742a                 je 0x57528e
// 00575264  8d4e04               lea ecx, [esi + 4]
// 00575267  83caff               or edx, 0xffffffff
// 0057526a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057526e  751e                 jne 0x57528e
// 00575270  8b06                 mov eax, dword ptr [esi]
// 00575272  8b5004               mov edx, dword ptr [eax + 4]
// 00575275  8bce                 mov ecx, esi
// 00575277  ffd2                 call edx
// 00575279  8d4608               lea eax, [esi + 8]
// 0057527c  83c9ff               or ecx, 0xffffffff
// 0057527f  f00fc108             lock xadd dword ptr [eax], ecx
// 00575283  7509                 jne 0x57528e
// 00575285  8b16                 mov edx, dword ptr [esi]
// 00575287  8b4208               mov eax, dword ptr [edx + 8]
// 0057528a  8bce                 mov ecx, esi
// 0057528c  ffd0                 call eax
// 0057528e  5f                   pop edi
// 0057528f  5e                   pop esi
// 00575290  83c408               add esp, 8
// 00575293  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

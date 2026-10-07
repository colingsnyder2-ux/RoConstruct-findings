// roc 2012-06 005751a0  unit: AsyncResult  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005751a0
//
// 005751a0  83ec08               sub esp, 8
// 005751a3  56                   push esi
// 005751a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005751a8  57                   push edi
// 005751a9  8bf9                 mov edi, ecx
// 005751ab  56                   push esi
// 005751ac  8d4c2410             lea ecx, [esp + 0x10]
// 005751b0  8974240c             mov dword ptr [esp + 0xc], esi
// 005751b4  e847ceffff           call 0x572000
// 005751b9  56                   push esi
// 005751ba  8d442410             lea eax, [esp + 0x10]
// 005751be  56                   push esi
// 005751bf  50                   push eax
// 005751c0  e8cb550200           call 0x59a790
// 005751c5  8d4c2414             lea ecx, [esp + 0x14]
// 005751c9  83c40c               add esp, 0xc
// 005751cc  3bcf                 cmp ecx, edi
// 005751ce  7406                 je 0x5751d6
// 005751d0  8b542408             mov edx, dword ptr [esp + 8]
// 005751d4  8917                 mov dword ptr [edi], edx
// 005751d6  8b7704               mov esi, dword ptr [edi + 4]
// 005751d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005751dd  894704               mov dword ptr [edi + 4], eax
// 005751e0  85f6                 test esi, esi
// 005751e2  742a                 je 0x57520e
// 005751e4  8d4e04               lea ecx, [esi + 4]
// 005751e7  83caff               or edx, 0xffffffff
// 005751ea  f00fc111             lock xadd dword ptr [ecx], edx
// 005751ee  751e                 jne 0x57520e
// 005751f0  8b06                 mov eax, dword ptr [esi]
// 005751f2  8b5004               mov edx, dword ptr [eax + 4]
// 005751f5  8bce                 mov ecx, esi
// 005751f7  ffd2                 call edx
// 005751f9  8d4608               lea eax, [esi + 8]
// 005751fc  83c9ff               or ecx, 0xffffffff
// 005751ff  f00fc108             lock xadd dword ptr [eax], ecx
// 00575203  7509                 jne 0x57520e
// 00575205  8b16                 mov edx, dword ptr [esi]
// 00575207  8b4208               mov eax, dword ptr [edx + 8]
// 0057520a  8bce                 mov ecx, esi
// 0057520c  ffd0                 call eax
// 0057520e  5f                   pop edi
// 0057520f  5e                   pop esi
// 00575210  83c408               add esp, 8
// 00575213  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

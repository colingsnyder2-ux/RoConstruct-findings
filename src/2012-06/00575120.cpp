// roc 2012-06 00575120  unit: AsyncResult  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00575120
//
// 00575120  83ec08               sub esp, 8
// 00575123  56                   push esi
// 00575124  8b742410             mov esi, dword ptr [esp + 0x10]
// 00575128  57                   push edi
// 00575129  8bf9                 mov edi, ecx
// 0057512b  56                   push esi
// 0057512c  8d4c2410             lea ecx, [esp + 0x10]
// 00575130  8974240c             mov dword ptr [esp + 0xc], esi
// 00575134  e837ceffff           call 0x571f70
// 00575139  56                   push esi
// 0057513a  8d442410             lea eax, [esp + 0x10]
// 0057513e  56                   push esi
// 0057513f  50                   push eax
// 00575140  e84b560200           call 0x59a790
// 00575145  8d4c2414             lea ecx, [esp + 0x14]
// 00575149  83c40c               add esp, 0xc
// 0057514c  3bcf                 cmp ecx, edi
// 0057514e  7406                 je 0x575156
// 00575150  8b542408             mov edx, dword ptr [esp + 8]
// 00575154  8917                 mov dword ptr [edi], edx
// 00575156  8b7704               mov esi, dword ptr [edi + 4]
// 00575159  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057515d  894704               mov dword ptr [edi + 4], eax
// 00575160  85f6                 test esi, esi
// 00575162  742a                 je 0x57518e
// 00575164  8d4e04               lea ecx, [esi + 4]
// 00575167  83caff               or edx, 0xffffffff
// 0057516a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057516e  751e                 jne 0x57518e
// 00575170  8b06                 mov eax, dword ptr [esi]
// 00575172  8b5004               mov edx, dword ptr [eax + 4]
// 00575175  8bce                 mov ecx, esi
// 00575177  ffd2                 call edx
// 00575179  8d4608               lea eax, [esi + 8]
// 0057517c  83c9ff               or ecx, 0xffffffff
// 0057517f  f00fc108             lock xadd dword ptr [eax], ecx
// 00575183  7509                 jne 0x57518e
// 00575185  8b16                 mov edx, dword ptr [esi]
// 00575187  8b4208               mov eax, dword ptr [edx + 8]
// 0057518a  8bce                 mov ecx, esi
// 0057518c  ffd0                 call eax
// 0057518e  5f                   pop edi
// 0057518f  5e                   pop esi
// 00575190  83c408               add esp, 8
// 00575193  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

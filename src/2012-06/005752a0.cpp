// roc 2012-06 005752a0  unit: AsyncResult  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005752a0
//
// 005752a0  83ec08               sub esp, 8
// 005752a3  56                   push esi
// 005752a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005752a8  57                   push edi
// 005752a9  8bf9                 mov edi, ecx
// 005752ab  56                   push esi
// 005752ac  8d4c2410             lea ecx, [esp + 0x10]
// 005752b0  8974240c             mov dword ptr [esp + 0xc], esi
// 005752b4  e867ceffff           call 0x572120
// 005752b9  56                   push esi
// 005752ba  8d442410             lea eax, [esp + 0x10]
// 005752be  56                   push esi
// 005752bf  50                   push eax
// 005752c0  e8cb540200           call 0x59a790
// 005752c5  8d4c2414             lea ecx, [esp + 0x14]
// 005752c9  83c40c               add esp, 0xc
// 005752cc  3bcf                 cmp ecx, edi
// 005752ce  7406                 je 0x5752d6
// 005752d0  8b542408             mov edx, dword ptr [esp + 8]
// 005752d4  8917                 mov dword ptr [edi], edx
// 005752d6  8b7704               mov esi, dword ptr [edi + 4]
// 005752d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005752dd  894704               mov dword ptr [edi + 4], eax
// 005752e0  85f6                 test esi, esi
// 005752e2  742a                 je 0x57530e
// 005752e4  8d4e04               lea ecx, [esi + 4]
// 005752e7  83caff               or edx, 0xffffffff
// 005752ea  f00fc111             lock xadd dword ptr [ecx], edx
// 005752ee  751e                 jne 0x57530e
// 005752f0  8b06                 mov eax, dword ptr [esi]
// 005752f2  8b5004               mov edx, dword ptr [eax + 4]
// 005752f5  8bce                 mov ecx, esi
// 005752f7  ffd2                 call edx
// 005752f9  8d4608               lea eax, [esi + 8]
// 005752fc  83c9ff               or ecx, 0xffffffff
// 005752ff  f00fc108             lock xadd dword ptr [eax], ecx
// 00575303  7509                 jne 0x57530e
// 00575305  8b16                 mov edx, dword ptr [esi]
// 00575307  8b4208               mov eax, dword ptr [edx + 8]
// 0057530a  8bce                 mov ecx, esi
// 0057530c  ffd0                 call eax
// 0057530e  5f                   pop edi
// 0057530f  5e                   pop esi
// 00575310  83c408               add esp, 8
// 00575313  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

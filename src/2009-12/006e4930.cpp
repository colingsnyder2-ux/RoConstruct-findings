// roc 2009-12 006e4930  unit: RBX::Humanoid  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e4930
//
// 006e4930  83ec08               sub esp, 8
// 006e4933  56                   push esi
// 006e4934  8b742410             mov esi, dword ptr [esp + 0x10]
// 006e4938  57                   push edi
// 006e4939  8bf9                 mov edi, ecx
// 006e493b  56                   push esi
// 006e493c  8d4c2410             lea ecx, [esp + 0x10]
// 006e4940  8974240c             mov dword ptr [esp + 0xc], esi
// 006e4944  e847f7ffff           call 0x6e4090
// 006e4949  56                   push esi
// 006e494a  8d442410             lea eax, [esp + 0x10]
// 006e494e  56                   push esi
// 006e494f  50                   push eax
// 006e4950  e83b011700           call 0x854a90
// 006e4955  8d4c2414             lea ecx, [esp + 0x14]
// 006e4959  83c40c               add esp, 0xc
// 006e495c  3bcf                 cmp ecx, edi
// 006e495e  7406                 je 0x6e4966
// 006e4960  8b542408             mov edx, dword ptr [esp + 8]
// 006e4964  8917                 mov dword ptr [edi], edx
// 006e4966  8b7704               mov esi, dword ptr [edi + 4]
// 006e4969  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e496d  894704               mov dword ptr [edi + 4], eax
// 006e4970  85f6                 test esi, esi
// 006e4972  742a                 je 0x6e499e
// 006e4974  8d4e04               lea ecx, [esi + 4]
// 006e4977  83caff               or edx, 0xffffffff
// 006e497a  f00fc111             lock xadd dword ptr [ecx], edx
// 006e497e  751e                 jne 0x6e499e
// 006e4980  8b06                 mov eax, dword ptr [esi]
// 006e4982  8b5004               mov edx, dword ptr [eax + 4]
// 006e4985  8bce                 mov ecx, esi
// 006e4987  ffd2                 call edx
// 006e4989  8d4608               lea eax, [esi + 8]
// 006e498c  83c9ff               or ecx, 0xffffffff
// 006e498f  f00fc108             lock xadd dword ptr [eax], ecx
// 006e4993  7509                 jne 0x6e499e
// 006e4995  8b16                 mov edx, dword ptr [esi]
// 006e4997  8b4208               mov eax, dword ptr [edx + 8]
// 006e499a  8bce                 mov ecx, esi
// 006e499c  ffd0                 call eax
// 006e499e  5f                   pop edi
// 006e499f  5e                   pop esi
// 006e49a0  83c408               add esp, 8
// 006e49a3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

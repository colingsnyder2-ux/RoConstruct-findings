// roc 2011-06 00972cc0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972cc0
//
// 00972cc0  83ec08               sub esp, 8
// 00972cc3  56                   push esi
// 00972cc4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00972cc8  57                   push edi
// 00972cc9  8bf9                 mov edi, ecx
// 00972ccb  56                   push esi
// 00972ccc  8d4c2410             lea ecx, [esp + 0x10]
// 00972cd0  8974240c             mov dword ptr [esp + 0xc], esi
// 00972cd4  e8f7f5ffff           call 0x9722d0
// 00972cd9  56                   push esi
// 00972cda  8d442410             lea eax, [esp + 0x10]
// 00972cde  56                   push esi
// 00972cdf  50                   push eax
// 00972ce0  e85b89efff           call 0x86b640
// 00972ce5  8d4c2414             lea ecx, [esp + 0x14]
// 00972ce9  83c40c               add esp, 0xc
// 00972cec  3bcf                 cmp ecx, edi
// 00972cee  7406                 je 0x972cf6
// 00972cf0  8b542408             mov edx, dword ptr [esp + 8]
// 00972cf4  8917                 mov dword ptr [edi], edx
// 00972cf6  8b7704               mov esi, dword ptr [edi + 4]
// 00972cf9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00972cfd  894704               mov dword ptr [edi + 4], eax
// 00972d00  85f6                 test esi, esi
// 00972d02  742a                 je 0x972d2e
// 00972d04  8d4e04               lea ecx, [esi + 4]
// 00972d07  83caff               or edx, 0xffffffff
// 00972d0a  f00fc111             lock xadd dword ptr [ecx], edx
// 00972d0e  751e                 jne 0x972d2e
// 00972d10  8b06                 mov eax, dword ptr [esi]
// 00972d12  8b5004               mov edx, dword ptr [eax + 4]
// 00972d15  8bce                 mov ecx, esi
// 00972d17  ffd2                 call edx
// 00972d19  8d4608               lea eax, [esi + 8]
// 00972d1c  83c9ff               or ecx, 0xffffffff
// 00972d1f  f00fc108             lock xadd dword ptr [eax], ecx
// 00972d23  7509                 jne 0x972d2e
// 00972d25  8b16                 mov edx, dword ptr [esi]
// 00972d27  8b4208               mov eax, dword ptr [edx + 8]
// 00972d2a  8bce                 mov ecx, esi
// 00972d2c  ffd0                 call eax
// 00972d2e  5f                   pop edi
// 00972d2f  5e                   pop esi
// 00972d30  83c408               add esp, 8
// 00972d33  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

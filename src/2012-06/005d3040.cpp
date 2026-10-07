// roc 2012-06 005d3040  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005d3040
//
// 005d3040  83ec08               sub esp, 8
// 005d3043  56                   push esi
// 005d3044  8b742410             mov esi, dword ptr [esp + 0x10]
// 005d3048  57                   push edi
// 005d3049  8bf9                 mov edi, ecx
// 005d304b  56                   push esi
// 005d304c  8d4c2410             lea ecx, [esp + 0x10]
// 005d3050  8974240c             mov dword ptr [esp + 0xc], esi
// 005d3054  e887f4ffff           call 0x5d24e0
// 005d3059  56                   push esi
// 005d305a  8d442410             lea eax, [esp + 0x10]
// 005d305e  56                   push esi
// 005d305f  50                   push eax
// 005d3060  e82b77fcff           call 0x59a790
// 005d3065  8d4c2414             lea ecx, [esp + 0x14]
// 005d3069  83c40c               add esp, 0xc
// 005d306c  3bcf                 cmp ecx, edi
// 005d306e  7406                 je 0x5d3076
// 005d3070  8b542408             mov edx, dword ptr [esp + 8]
// 005d3074  8917                 mov dword ptr [edi], edx
// 005d3076  8b7704               mov esi, dword ptr [edi + 4]
// 005d3079  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d307d  894704               mov dword ptr [edi + 4], eax
// 005d3080  85f6                 test esi, esi
// 005d3082  742a                 je 0x5d30ae
// 005d3084  8d4e04               lea ecx, [esi + 4]
// 005d3087  83caff               or edx, 0xffffffff
// 005d308a  f00fc111             lock xadd dword ptr [ecx], edx
// 005d308e  751e                 jne 0x5d30ae
// 005d3090  8b06                 mov eax, dword ptr [esi]
// 005d3092  8b5004               mov edx, dword ptr [eax + 4]
// 005d3095  8bce                 mov ecx, esi
// 005d3097  ffd2                 call edx
// 005d3099  8d4608               lea eax, [esi + 8]
// 005d309c  83c9ff               or ecx, 0xffffffff
// 005d309f  f00fc108             lock xadd dword ptr [eax], ecx
// 005d30a3  7509                 jne 0x5d30ae
// 005d30a5  8b16                 mov edx, dword ptr [esi]
// 005d30a7  8b4208               mov eax, dword ptr [edx + 8]
// 005d30aa  8bce                 mov ecx, esi
// 005d30ac  ffd0                 call eax
// 005d30ae  5f                   pop edi
// 005d30af  5e                   pop esi
// 005d30b0  83c408               add esp, 8
// 005d30b3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

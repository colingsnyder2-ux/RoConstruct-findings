// roc 2009-12 00578350  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00578350
//
// 00578350  83ec08               sub esp, 8
// 00578353  56                   push esi
// 00578354  8b742410             mov esi, dword ptr [esp + 0x10]
// 00578358  57                   push edi
// 00578359  8bf9                 mov edi, ecx
// 0057835b  56                   push esi
// 0057835c  8d4c2410             lea ecx, [esp + 0x10]
// 00578360  8974240c             mov dword ptr [esp + 0xc], esi
// 00578364  e807f9ffff           call 0x577c70
// 00578369  56                   push esi
// 0057836a  8d442410             lea eax, [esp + 0x10]
// 0057836e  56                   push esi
// 0057836f  50                   push eax
// 00578370  e81bc72d00           call 0x854a90
// 00578375  8d4c2414             lea ecx, [esp + 0x14]
// 00578379  83c40c               add esp, 0xc
// 0057837c  3bcf                 cmp ecx, edi
// 0057837e  7406                 je 0x578386
// 00578380  8b542408             mov edx, dword ptr [esp + 8]
// 00578384  8917                 mov dword ptr [edi], edx
// 00578386  8b7704               mov esi, dword ptr [edi + 4]
// 00578389  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057838d  894704               mov dword ptr [edi + 4], eax
// 00578390  85f6                 test esi, esi
// 00578392  742a                 je 0x5783be
// 00578394  8d4e04               lea ecx, [esi + 4]
// 00578397  83caff               or edx, 0xffffffff
// 0057839a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057839e  751e                 jne 0x5783be
// 005783a0  8b06                 mov eax, dword ptr [esi]
// 005783a2  8b5004               mov edx, dword ptr [eax + 4]
// 005783a5  8bce                 mov ecx, esi
// 005783a7  ffd2                 call edx
// 005783a9  8d4608               lea eax, [esi + 8]
// 005783ac  83c9ff               or ecx, 0xffffffff
// 005783af  f00fc108             lock xadd dword ptr [eax], ecx
// 005783b3  7509                 jne 0x5783be
// 005783b5  8b16                 mov edx, dword ptr [esi]
// 005783b7  8b4208               mov eax, dword ptr [edx + 8]
// 005783ba  8bce                 mov ecx, esi
// 005783bc  ffd0                 call eax
// 005783be  5f                   pop edi
// 005783bf  5e                   pop esi
// 005783c0  83c408               add esp, 8
// 005783c3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

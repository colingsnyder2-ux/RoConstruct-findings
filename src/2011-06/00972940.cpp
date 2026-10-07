// roc 2011-06 00972940  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972940
//
// 00972940  83ec08               sub esp, 8
// 00972943  56                   push esi
// 00972944  8b742410             mov esi, dword ptr [esp + 0x10]
// 00972948  57                   push edi
// 00972949  8bf9                 mov edi, ecx
// 0097294b  56                   push esi
// 0097294c  8d4c2410             lea ecx, [esp + 0x10]
// 00972950  8974240c             mov dword ptr [esp + 0xc], esi
// 00972954  e817f6ffff           call 0x971f70
// 00972959  56                   push esi
// 0097295a  8d442410             lea eax, [esp + 0x10]
// 0097295e  56                   push esi
// 0097295f  50                   push eax
// 00972960  e8db8cefff           call 0x86b640
// 00972965  8d4c2414             lea ecx, [esp + 0x14]
// 00972969  83c40c               add esp, 0xc
// 0097296c  3bcf                 cmp ecx, edi
// 0097296e  7406                 je 0x972976
// 00972970  8b542408             mov edx, dword ptr [esp + 8]
// 00972974  8917                 mov dword ptr [edi], edx
// 00972976  8b7704               mov esi, dword ptr [edi + 4]
// 00972979  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0097297d  894704               mov dword ptr [edi + 4], eax
// 00972980  85f6                 test esi, esi
// 00972982  742a                 je 0x9729ae
// 00972984  8d4e04               lea ecx, [esi + 4]
// 00972987  83caff               or edx, 0xffffffff
// 0097298a  f00fc111             lock xadd dword ptr [ecx], edx
// 0097298e  751e                 jne 0x9729ae
// 00972990  8b06                 mov eax, dword ptr [esi]
// 00972992  8b5004               mov edx, dword ptr [eax + 4]
// 00972995  8bce                 mov ecx, esi
// 00972997  ffd2                 call edx
// 00972999  8d4608               lea eax, [esi + 8]
// 0097299c  83c9ff               or ecx, 0xffffffff
// 0097299f  f00fc108             lock xadd dword ptr [eax], ecx
// 009729a3  7509                 jne 0x9729ae
// 009729a5  8b16                 mov edx, dword ptr [esi]
// 009729a7  8b4208               mov eax, dword ptr [edx + 8]
// 009729aa  8bce                 mov ecx, esi
// 009729ac  ffd0                 call eax
// 009729ae  5f                   pop edi
// 009729af  5e                   pop esi
// 009729b0  83c408               add esp, 8
// 009729b3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

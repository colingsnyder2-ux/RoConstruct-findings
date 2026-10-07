// roc 2010-06 009369e0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009369e0
//
// 009369e0  83ec08               sub esp, 8
// 009369e3  56                   push esi
// 009369e4  8b742410             mov esi, dword ptr [esp + 0x10]
// 009369e8  57                   push edi
// 009369e9  8bf9                 mov edi, ecx
// 009369eb  56                   push esi
// 009369ec  8d4c2410             lea ecx, [esp + 0x10]
// 009369f0  8974240c             mov dword ptr [esp + 0xc], esi
// 009369f4  e897f6ffff           call 0x936090
// 009369f9  56                   push esi
// 009369fa  8d442410             lea eax, [esp + 0x10]
// 009369fe  56                   push esi
// 009369ff  50                   push eax
// 00936a00  e8abdbb1ff           call 0x4545b0
// 00936a05  8d4c2414             lea ecx, [esp + 0x14]
// 00936a09  83c40c               add esp, 0xc
// 00936a0c  3bcf                 cmp ecx, edi
// 00936a0e  7406                 je 0x936a16
// 00936a10  8b542408             mov edx, dword ptr [esp + 8]
// 00936a14  8917                 mov dword ptr [edi], edx
// 00936a16  8b7704               mov esi, dword ptr [edi + 4]
// 00936a19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00936a1d  894704               mov dword ptr [edi + 4], eax
// 00936a20  85f6                 test esi, esi
// 00936a22  742a                 je 0x936a4e
// 00936a24  8d4e04               lea ecx, [esi + 4]
// 00936a27  83caff               or edx, 0xffffffff
// 00936a2a  f00fc111             lock xadd dword ptr [ecx], edx
// 00936a2e  751e                 jne 0x936a4e
// 00936a30  8b06                 mov eax, dword ptr [esi]
// 00936a32  8b5004               mov edx, dword ptr [eax + 4]
// 00936a35  8bce                 mov ecx, esi
// 00936a37  ffd2                 call edx
// 00936a39  8d4608               lea eax, [esi + 8]
// 00936a3c  83c9ff               or ecx, 0xffffffff
// 00936a3f  f00fc108             lock xadd dword ptr [eax], ecx
// 00936a43  7509                 jne 0x936a4e
// 00936a45  8b16                 mov edx, dword ptr [esi]
// 00936a47  8b4208               mov eax, dword ptr [edx + 8]
// 00936a4a  8bce                 mov ecx, esi
// 00936a4c  ffd0                 call eax
// 00936a4e  5f                   pop edi
// 00936a4f  5e                   pop esi
// 00936a50  83c408               add esp, 8
// 00936a53  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

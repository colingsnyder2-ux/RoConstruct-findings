// roc 2010-06 00936be0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00936be0
//
// 00936be0  83ec08               sub esp, 8
// 00936be3  56                   push esi
// 00936be4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00936be8  57                   push edi
// 00936be9  8bf9                 mov edi, ecx
// 00936beb  56                   push esi
// 00936bec  8d4c2410             lea ecx, [esp + 0x10]
// 00936bf0  8974240c             mov dword ptr [esp + 0xc], esi
// 00936bf4  e847f6ffff           call 0x936240
// 00936bf9  56                   push esi
// 00936bfa  8d442410             lea eax, [esp + 0x10]
// 00936bfe  56                   push esi
// 00936bff  50                   push eax
// 00936c00  e8abd9b1ff           call 0x4545b0
// 00936c05  8d4c2414             lea ecx, [esp + 0x14]
// 00936c09  83c40c               add esp, 0xc
// 00936c0c  3bcf                 cmp ecx, edi
// 00936c0e  7406                 je 0x936c16
// 00936c10  8b542408             mov edx, dword ptr [esp + 8]
// 00936c14  8917                 mov dword ptr [edi], edx
// 00936c16  8b7704               mov esi, dword ptr [edi + 4]
// 00936c19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00936c1d  894704               mov dword ptr [edi + 4], eax
// 00936c20  85f6                 test esi, esi
// 00936c22  742a                 je 0x936c4e
// 00936c24  8d4e04               lea ecx, [esi + 4]
// 00936c27  83caff               or edx, 0xffffffff
// 00936c2a  f00fc111             lock xadd dword ptr [ecx], edx
// 00936c2e  751e                 jne 0x936c4e
// 00936c30  8b06                 mov eax, dword ptr [esi]
// 00936c32  8b5004               mov edx, dword ptr [eax + 4]
// 00936c35  8bce                 mov ecx, esi
// 00936c37  ffd2                 call edx
// 00936c39  8d4608               lea eax, [esi + 8]
// 00936c3c  83c9ff               or ecx, 0xffffffff
// 00936c3f  f00fc108             lock xadd dword ptr [eax], ecx
// 00936c43  7509                 jne 0x936c4e
// 00936c45  8b16                 mov edx, dword ptr [esi]
// 00936c47  8b4208               mov eax, dword ptr [edx + 8]
// 00936c4a  8bce                 mov ecx, esi
// 00936c4c  ffd0                 call eax
// 00936c4e  5f                   pop edi
// 00936c4f  5e                   pop esi
// 00936c50  83c408               add esp, 8
// 00936c53  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

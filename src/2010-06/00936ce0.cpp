// roc 2010-06 00936ce0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00936ce0
//
// 00936ce0  83ec08               sub esp, 8
// 00936ce3  56                   push esi
// 00936ce4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00936ce8  57                   push edi
// 00936ce9  8bf9                 mov edi, ecx
// 00936ceb  56                   push esi
// 00936cec  8d4c2410             lea ecx, [esp + 0x10]
// 00936cf0  8974240c             mov dword ptr [esp + 0xc], esi
// 00936cf4  e867f6ffff           call 0x936360
// 00936cf9  56                   push esi
// 00936cfa  8d442410             lea eax, [esp + 0x10]
// 00936cfe  56                   push esi
// 00936cff  50                   push eax
// 00936d00  e8abd8b1ff           call 0x4545b0
// 00936d05  8d4c2414             lea ecx, [esp + 0x14]
// 00936d09  83c40c               add esp, 0xc
// 00936d0c  3bcf                 cmp ecx, edi
// 00936d0e  7406                 je 0x936d16
// 00936d10  8b542408             mov edx, dword ptr [esp + 8]
// 00936d14  8917                 mov dword ptr [edi], edx
// 00936d16  8b7704               mov esi, dword ptr [edi + 4]
// 00936d19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00936d1d  894704               mov dword ptr [edi + 4], eax
// 00936d20  85f6                 test esi, esi
// 00936d22  742a                 je 0x936d4e
// 00936d24  8d4e04               lea ecx, [esi + 4]
// 00936d27  83caff               or edx, 0xffffffff
// 00936d2a  f00fc111             lock xadd dword ptr [ecx], edx
// 00936d2e  751e                 jne 0x936d4e
// 00936d30  8b06                 mov eax, dword ptr [esi]
// 00936d32  8b5004               mov edx, dword ptr [eax + 4]
// 00936d35  8bce                 mov ecx, esi
// 00936d37  ffd2                 call edx
// 00936d39  8d4608               lea eax, [esi + 8]
// 00936d3c  83c9ff               or ecx, 0xffffffff
// 00936d3f  f00fc108             lock xadd dword ptr [eax], ecx
// 00936d43  7509                 jne 0x936d4e
// 00936d45  8b16                 mov edx, dword ptr [esi]
// 00936d47  8b4208               mov eax, dword ptr [edx + 8]
// 00936d4a  8bce                 mov ecx, esi
// 00936d4c  ffd0                 call eax
// 00936d4e  5f                   pop edi
// 00936d4f  5e                   pop esi
// 00936d50  83c408               add esp, 8
// 00936d53  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

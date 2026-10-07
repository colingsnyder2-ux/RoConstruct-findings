// roc 2010-06 00936960  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00936960
//
// 00936960  83ec08               sub esp, 8
// 00936963  56                   push esi
// 00936964  8b742410             mov esi, dword ptr [esp + 0x10]
// 00936968  57                   push edi
// 00936969  8bf9                 mov edi, ecx
// 0093696b  56                   push esi
// 0093696c  8d4c2410             lea ecx, [esp + 0x10]
// 00936970  8974240c             mov dword ptr [esp + 0xc], esi
// 00936974  e887f6ffff           call 0x936000
// 00936979  56                   push esi
// 0093697a  8d442410             lea eax, [esp + 0x10]
// 0093697e  56                   push esi
// 0093697f  50                   push eax
// 00936980  e82bdcb1ff           call 0x4545b0
// 00936985  8d4c2414             lea ecx, [esp + 0x14]
// 00936989  83c40c               add esp, 0xc
// 0093698c  3bcf                 cmp ecx, edi
// 0093698e  7406                 je 0x936996
// 00936990  8b542408             mov edx, dword ptr [esp + 8]
// 00936994  8917                 mov dword ptr [edi], edx
// 00936996  8b7704               mov esi, dword ptr [edi + 4]
// 00936999  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093699d  894704               mov dword ptr [edi + 4], eax
// 009369a0  85f6                 test esi, esi
// 009369a2  742a                 je 0x9369ce
// 009369a4  8d4e04               lea ecx, [esi + 4]
// 009369a7  83caff               or edx, 0xffffffff
// 009369aa  f00fc111             lock xadd dword ptr [ecx], edx
// 009369ae  751e                 jne 0x9369ce
// 009369b0  8b06                 mov eax, dword ptr [esi]
// 009369b2  8b5004               mov edx, dword ptr [eax + 4]
// 009369b5  8bce                 mov ecx, esi
// 009369b7  ffd2                 call edx
// 009369b9  8d4608               lea eax, [esi + 8]
// 009369bc  83c9ff               or ecx, 0xffffffff
// 009369bf  f00fc108             lock xadd dword ptr [eax], ecx
// 009369c3  7509                 jne 0x9369ce
// 009369c5  8b16                 mov edx, dword ptr [esi]
// 009369c7  8b4208               mov eax, dword ptr [edx + 8]
// 009369ca  8bce                 mov ecx, esi
// 009369cc  ffd0                 call eax
// 009369ce  5f                   pop edi
// 009369cf  5e                   pop esi
// 009369d0  83c408               add esp, 8
// 009369d3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

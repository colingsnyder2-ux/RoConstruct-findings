// roc 2009-12 006bee30  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bee30
//
// 006bee30  83ec08               sub esp, 8
// 006bee33  56                   push esi
// 006bee34  8b742410             mov esi, dword ptr [esp + 0x10]
// 006bee38  57                   push edi
// 006bee39  8bf9                 mov edi, ecx
// 006bee3b  56                   push esi
// 006bee3c  8d4c2410             lea ecx, [esp + 0x10]
// 006bee40  8974240c             mov dword ptr [esp + 0xc], esi
// 006bee44  e887f1ffff           call 0x6bdfd0
// 006bee49  56                   push esi
// 006bee4a  8d442410             lea eax, [esp + 0x10]
// 006bee4e  56                   push esi
// 006bee4f  50                   push eax
// 006bee50  e83b5c1900           call 0x854a90
// 006bee55  8d4c2414             lea ecx, [esp + 0x14]
// 006bee59  83c40c               add esp, 0xc
// 006bee5c  3bcf                 cmp ecx, edi
// 006bee5e  7406                 je 0x6bee66
// 006bee60  8b542408             mov edx, dword ptr [esp + 8]
// 006bee64  8917                 mov dword ptr [edi], edx
// 006bee66  8b7704               mov esi, dword ptr [edi + 4]
// 006bee69  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006bee6d  894704               mov dword ptr [edi + 4], eax
// 006bee70  85f6                 test esi, esi
// 006bee72  742a                 je 0x6bee9e
// 006bee74  8d4e04               lea ecx, [esi + 4]
// 006bee77  83caff               or edx, 0xffffffff
// 006bee7a  f00fc111             lock xadd dword ptr [ecx], edx
// 006bee7e  751e                 jne 0x6bee9e
// 006bee80  8b06                 mov eax, dword ptr [esi]
// 006bee82  8b5004               mov edx, dword ptr [eax + 4]
// 006bee85  8bce                 mov ecx, esi
// 006bee87  ffd2                 call edx
// 006bee89  8d4608               lea eax, [esi + 8]
// 006bee8c  83c9ff               or ecx, 0xffffffff
// 006bee8f  f00fc108             lock xadd dword ptr [eax], ecx
// 006bee93  7509                 jne 0x6bee9e
// 006bee95  8b16                 mov edx, dword ptr [esi]
// 006bee97  8b4208               mov eax, dword ptr [edx + 8]
// 006bee9a  8bce                 mov ecx, esi
// 006bee9c  ffd0                 call eax
// 006bee9e  5f                   pop edi
// 006bee9f  5e                   pop esi
// 006beea0  83c408               add esp, 8
// 006beea3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

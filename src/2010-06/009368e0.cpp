// roc 2010-06 009368e0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009368e0
//
// 009368e0  83ec08               sub esp, 8
// 009368e3  56                   push esi
// 009368e4  8b742410             mov esi, dword ptr [esp + 0x10]
// 009368e8  57                   push edi
// 009368e9  8bf9                 mov edi, ecx
// 009368eb  56                   push esi
// 009368ec  8d4c2410             lea ecx, [esp + 0x10]
// 009368f0  8974240c             mov dword ptr [esp + 0xc], esi
// 009368f4  e877f6ffff           call 0x935f70
// 009368f9  56                   push esi
// 009368fa  8d442410             lea eax, [esp + 0x10]
// 009368fe  56                   push esi
// 009368ff  50                   push eax
// 00936900  e8abdcb1ff           call 0x4545b0
// 00936905  8d4c2414             lea ecx, [esp + 0x14]
// 00936909  83c40c               add esp, 0xc
// 0093690c  3bcf                 cmp ecx, edi
// 0093690e  7406                 je 0x936916
// 00936910  8b542408             mov edx, dword ptr [esp + 8]
// 00936914  8917                 mov dword ptr [edi], edx
// 00936916  8b7704               mov esi, dword ptr [edi + 4]
// 00936919  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093691d  894704               mov dword ptr [edi + 4], eax
// 00936920  85f6                 test esi, esi
// 00936922  742a                 je 0x93694e
// 00936924  8d4e04               lea ecx, [esi + 4]
// 00936927  83caff               or edx, 0xffffffff
// 0093692a  f00fc111             lock xadd dword ptr [ecx], edx
// 0093692e  751e                 jne 0x93694e
// 00936930  8b06                 mov eax, dword ptr [esi]
// 00936932  8b5004               mov edx, dword ptr [eax + 4]
// 00936935  8bce                 mov ecx, esi
// 00936937  ffd2                 call edx
// 00936939  8d4608               lea eax, [esi + 8]
// 0093693c  83c9ff               or ecx, 0xffffffff
// 0093693f  f00fc108             lock xadd dword ptr [eax], ecx
// 00936943  7509                 jne 0x93694e
// 00936945  8b16                 mov edx, dword ptr [esi]
// 00936947  8b4208               mov eax, dword ptr [edx + 8]
// 0093694a  8bce                 mov ecx, esi
// 0093694c  ffd0                 call eax
// 0093694e  5f                   pop edi
// 0093694f  5e                   pop esi
// 00936950  83c408               add esp, 8
// 00936953  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

// roc 2010-06 009367e0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009367e0
//
// 009367e0  83ec08               sub esp, 8
// 009367e3  56                   push esi
// 009367e4  8b742410             mov esi, dword ptr [esp + 0x10]
// 009367e8  57                   push edi
// 009367e9  8bf9                 mov edi, ecx
// 009367eb  56                   push esi
// 009367ec  8d4c2410             lea ecx, [esp + 0x10]
// 009367f0  8974240c             mov dword ptr [esp + 0xc], esi
// 009367f4  e857f6ffff           call 0x935e50
// 009367f9  56                   push esi
// 009367fa  8d442410             lea eax, [esp + 0x10]
// 009367fe  56                   push esi
// 009367ff  50                   push eax
// 00936800  e8abddb1ff           call 0x4545b0
// 00936805  8d4c2414             lea ecx, [esp + 0x14]
// 00936809  83c40c               add esp, 0xc
// 0093680c  3bcf                 cmp ecx, edi
// 0093680e  7406                 je 0x936816
// 00936810  8b542408             mov edx, dword ptr [esp + 8]
// 00936814  8917                 mov dword ptr [edi], edx
// 00936816  8b7704               mov esi, dword ptr [edi + 4]
// 00936819  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093681d  894704               mov dword ptr [edi + 4], eax
// 00936820  85f6                 test esi, esi
// 00936822  742a                 je 0x93684e
// 00936824  8d4e04               lea ecx, [esi + 4]
// 00936827  83caff               or edx, 0xffffffff
// 0093682a  f00fc111             lock xadd dword ptr [ecx], edx
// 0093682e  751e                 jne 0x93684e
// 00936830  8b06                 mov eax, dword ptr [esi]
// 00936832  8b5004               mov edx, dword ptr [eax + 4]
// 00936835  8bce                 mov ecx, esi
// 00936837  ffd2                 call edx
// 00936839  8d4608               lea eax, [esi + 8]
// 0093683c  83c9ff               or ecx, 0xffffffff
// 0093683f  f00fc108             lock xadd dword ptr [eax], ecx
// 00936843  7509                 jne 0x93684e
// 00936845  8b16                 mov edx, dword ptr [esi]
// 00936847  8b4208               mov eax, dword ptr [edx + 8]
// 0093684a  8bce                 mov ecx, esi
// 0093684c  ffd0                 call eax
// 0093684e  5f                   pop edi
// 0093684f  5e                   pop esi
// 00936850  83c408               add esp, 8
// 00936853  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

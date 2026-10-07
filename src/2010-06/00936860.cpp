// roc 2010-06 00936860  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00936860
//
// 00936860  83ec08               sub esp, 8
// 00936863  56                   push esi
// 00936864  8b742410             mov esi, dword ptr [esp + 0x10]
// 00936868  57                   push edi
// 00936869  8bf9                 mov edi, ecx
// 0093686b  56                   push esi
// 0093686c  8d4c2410             lea ecx, [esp + 0x10]
// 00936870  8974240c             mov dword ptr [esp + 0xc], esi
// 00936874  e867f6ffff           call 0x935ee0
// 00936879  56                   push esi
// 0093687a  8d442410             lea eax, [esp + 0x10]
// 0093687e  56                   push esi
// 0093687f  50                   push eax
// 00936880  e82bddb1ff           call 0x4545b0
// 00936885  8d4c2414             lea ecx, [esp + 0x14]
// 00936889  83c40c               add esp, 0xc
// 0093688c  3bcf                 cmp ecx, edi
// 0093688e  7406                 je 0x936896
// 00936890  8b542408             mov edx, dword ptr [esp + 8]
// 00936894  8917                 mov dword ptr [edi], edx
// 00936896  8b7704               mov esi, dword ptr [edi + 4]
// 00936899  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093689d  894704               mov dword ptr [edi + 4], eax
// 009368a0  85f6                 test esi, esi
// 009368a2  742a                 je 0x9368ce
// 009368a4  8d4e04               lea ecx, [esi + 4]
// 009368a7  83caff               or edx, 0xffffffff
// 009368aa  f00fc111             lock xadd dword ptr [ecx], edx
// 009368ae  751e                 jne 0x9368ce
// 009368b0  8b06                 mov eax, dword ptr [esi]
// 009368b2  8b5004               mov edx, dword ptr [eax + 4]
// 009368b5  8bce                 mov ecx, esi
// 009368b7  ffd2                 call edx
// 009368b9  8d4608               lea eax, [esi + 8]
// 009368bc  83c9ff               or ecx, 0xffffffff
// 009368bf  f00fc108             lock xadd dword ptr [eax], ecx
// 009368c3  7509                 jne 0x9368ce
// 009368c5  8b16                 mov edx, dword ptr [esi]
// 009368c7  8b4208               mov eax, dword ptr [edx + 8]
// 009368ca  8bce                 mov ecx, esi
// 009368cc  ffd0                 call eax
// 009368ce  5f                   pop edi
// 009368cf  5e                   pop esi
// 009368d0  83c408               add esp, 8
// 009368d3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

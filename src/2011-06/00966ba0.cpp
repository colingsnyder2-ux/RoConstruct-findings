// roc 2011-06 00966ba0  unit: Ogre::RbxCluster  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00966ba0
//
// 00966ba0  83ec08               sub esp, 8
// 00966ba3  56                   push esi
// 00966ba4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00966ba8  57                   push edi
// 00966ba9  8bf9                 mov edi, ecx
// 00966bab  56                   push esi
// 00966bac  8d4c2410             lea ecx, [esp + 0x10]
// 00966bb0  8974240c             mov dword ptr [esp + 0xc], esi
// 00966bb4  e827f9ffff           call 0x9664e0
// 00966bb9  56                   push esi
// 00966bba  8d442410             lea eax, [esp + 0x10]
// 00966bbe  56                   push esi
// 00966bbf  50                   push eax
// 00966bc0  e87b4af0ff           call 0x86b640
// 00966bc5  8d4c2414             lea ecx, [esp + 0x14]
// 00966bc9  83c40c               add esp, 0xc
// 00966bcc  3bcf                 cmp ecx, edi
// 00966bce  7406                 je 0x966bd6
// 00966bd0  8b542408             mov edx, dword ptr [esp + 8]
// 00966bd4  8917                 mov dword ptr [edi], edx
// 00966bd6  8b7704               mov esi, dword ptr [edi + 4]
// 00966bd9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00966bdd  894704               mov dword ptr [edi + 4], eax
// 00966be0  85f6                 test esi, esi
// 00966be2  742a                 je 0x966c0e
// 00966be4  8d4e04               lea ecx, [esi + 4]
// 00966be7  83caff               or edx, 0xffffffff
// 00966bea  f00fc111             lock xadd dword ptr [ecx], edx
// 00966bee  751e                 jne 0x966c0e
// 00966bf0  8b06                 mov eax, dword ptr [esi]
// 00966bf2  8b5004               mov edx, dword ptr [eax + 4]
// 00966bf5  8bce                 mov ecx, esi
// 00966bf7  ffd2                 call edx
// 00966bf9  8d4608               lea eax, [esi + 8]
// 00966bfc  83c9ff               or ecx, 0xffffffff
// 00966bff  f00fc108             lock xadd dword ptr [eax], ecx
// 00966c03  7509                 jne 0x966c0e
// 00966c05  8b16                 mov edx, dword ptr [esi]
// 00966c07  8b4208               mov eax, dword ptr [edx + 8]
// 00966c0a  8bce                 mov ecx, esi
// 00966c0c  ffd0                 call eax
// 00966c0e  5f                   pop edi
// 00966c0f  5e                   pop esi
// 00966c10  83c408               add esp, 8
// 00966c13  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

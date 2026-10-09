// roc 2009-12 00789a20  unit: RBX::UniversalTool  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00789a20
//
// 00789a20  83ec08               sub esp, 8
// 00789a23  56                   push esi
// 00789a24  8b742410             mov esi, dword ptr [esp + 0x10]
// 00789a28  57                   push edi
// 00789a29  8bf9                 mov edi, ecx
// 00789a2b  56                   push esi
// 00789a2c  8d4c2410             lea ecx, [esp + 0x10]
// 00789a30  8974240c             mov dword ptr [esp + 0xc], esi
// 00789a34  e857ffffff           call 0x789990
// 00789a39  56                   push esi
// 00789a3a  8d442410             lea eax, [esp + 0x10]
// 00789a3e  56                   push esi
// 00789a3f  50                   push eax
// 00789a40  e84bb00c00           call 0x854a90
// 00789a45  8d4c2414             lea ecx, [esp + 0x14]
// 00789a49  83c40c               add esp, 0xc
// 00789a4c  3bcf                 cmp ecx, edi
// 00789a4e  7406                 je 0x789a56
// 00789a50  8b542408             mov edx, dword ptr [esp + 8]
// 00789a54  8917                 mov dword ptr [edi], edx
// 00789a56  8b7704               mov esi, dword ptr [edi + 4]
// 00789a59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00789a5d  894704               mov dword ptr [edi + 4], eax
// 00789a60  85f6                 test esi, esi
// 00789a62  742a                 je 0x789a8e
// 00789a64  8d4e04               lea ecx, [esi + 4]
// 00789a67  83caff               or edx, 0xffffffff
// 00789a6a  f00fc111             lock xadd dword ptr [ecx], edx
// 00789a6e  751e                 jne 0x789a8e
// 00789a70  8b06                 mov eax, dword ptr [esi]
// 00789a72  8b5004               mov edx, dword ptr [eax + 4]
// 00789a75  8bce                 mov ecx, esi
// 00789a77  ffd2                 call edx
// 00789a79  8d4608               lea eax, [esi + 8]
// 00789a7c  83c9ff               or ecx, 0xffffffff
// 00789a7f  f00fc108             lock xadd dword ptr [eax], ecx
// 00789a83  7509                 jne 0x789a8e
// 00789a85  8b16                 mov edx, dword ptr [esi]
// 00789a87  8b4208               mov eax, dword ptr [edx + 8]
// 00789a8a  8bce                 mov ecx, esi
// 00789a8c  ffd0                 call eax
// 00789a8e  5f                   pop edi
// 00789a8f  5e                   pop esi
// 00789a90  83c408               add esp, 8
// 00789a93  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

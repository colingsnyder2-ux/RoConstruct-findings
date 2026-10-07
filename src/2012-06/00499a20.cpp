// roc 2012-06 00499a20  unit: RBX::VExtrudedPartInstance::?$FactoryProduct::Creator  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00499a20
//
// 00499a20  83ec08               sub esp, 8
// 00499a23  56                   push esi
// 00499a24  8b742410             mov esi, dword ptr [esp + 0x10]
// 00499a28  57                   push edi
// 00499a29  8bf9                 mov edi, ecx
// 00499a2b  56                   push esi
// 00499a2c  8d4c2410             lea ecx, [esp + 0x10]
// 00499a30  8974240c             mov dword ptr [esp + 0xc], esi
// 00499a34  e8b7e3ffff           call 0x497df0
// 00499a39  56                   push esi
// 00499a3a  8d442410             lea eax, [esp + 0x10]
// 00499a3e  56                   push esi
// 00499a3f  50                   push eax
// 00499a40  e84b0d1000           call 0x59a790
// 00499a45  8d4c2414             lea ecx, [esp + 0x14]
// 00499a49  83c40c               add esp, 0xc
// 00499a4c  3bcf                 cmp ecx, edi
// 00499a4e  7406                 je 0x499a56
// 00499a50  8b542408             mov edx, dword ptr [esp + 8]
// 00499a54  8917                 mov dword ptr [edi], edx
// 00499a56  8b7704               mov esi, dword ptr [edi + 4]
// 00499a59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00499a5d  894704               mov dword ptr [edi + 4], eax
// 00499a60  85f6                 test esi, esi
// 00499a62  742a                 je 0x499a8e
// 00499a64  8d4e04               lea ecx, [esi + 4]
// 00499a67  83caff               or edx, 0xffffffff
// 00499a6a  f00fc111             lock xadd dword ptr [ecx], edx
// 00499a6e  751e                 jne 0x499a8e
// 00499a70  8b06                 mov eax, dword ptr [esi]
// 00499a72  8b5004               mov edx, dword ptr [eax + 4]
// 00499a75  8bce                 mov ecx, esi
// 00499a77  ffd2                 call edx
// 00499a79  8d4608               lea eax, [esi + 8]
// 00499a7c  83c9ff               or ecx, 0xffffffff
// 00499a7f  f00fc108             lock xadd dword ptr [eax], ecx
// 00499a83  7509                 jne 0x499a8e
// 00499a85  8b16                 mov edx, dword ptr [esi]
// 00499a87  8b4208               mov eax, dword ptr [edx + 8]
// 00499a8a  8bce                 mov ecx, esi
// 00499a8c  ffd0                 call eax
// 00499a8e  5f                   pop edi
// 00499a8f  5e                   pop esi
// 00499a90  83c408               add esp, 8
// 00499a93  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

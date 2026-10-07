// roc 2012-06 0086cb20  unit: RBX::Soundscape::VCollisionSound::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086cb20
//
// 0086cb20  83ec08               sub esp, 8
// 0086cb23  56                   push esi
// 0086cb24  8b742410             mov esi, dword ptr [esp + 0x10]
// 0086cb28  57                   push edi
// 0086cb29  8bf9                 mov edi, ecx
// 0086cb2b  56                   push esi
// 0086cb2c  8d4c2410             lea ecx, [esp + 0x10]
// 0086cb30  8974240c             mov dword ptr [esp + 0xc], esi
// 0086cb34  e857fdffff           call 0x86c890
// 0086cb39  56                   push esi
// 0086cb3a  8d442410             lea eax, [esp + 0x10]
// 0086cb3e  56                   push esi
// 0086cb3f  50                   push eax
// 0086cb40  e84bdcd2ff           call 0x59a790
// 0086cb45  8d4c2414             lea ecx, [esp + 0x14]
// 0086cb49  83c40c               add esp, 0xc
// 0086cb4c  3bcf                 cmp ecx, edi
// 0086cb4e  7406                 je 0x86cb56
// 0086cb50  8b542408             mov edx, dword ptr [esp + 8]
// 0086cb54  8917                 mov dword ptr [edi], edx
// 0086cb56  8b7704               mov esi, dword ptr [edi + 4]
// 0086cb59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086cb5d  894704               mov dword ptr [edi + 4], eax
// 0086cb60  85f6                 test esi, esi
// 0086cb62  742a                 je 0x86cb8e
// 0086cb64  8d4e04               lea ecx, [esi + 4]
// 0086cb67  83caff               or edx, 0xffffffff
// 0086cb6a  f00fc111             lock xadd dword ptr [ecx], edx
// 0086cb6e  751e                 jne 0x86cb8e
// 0086cb70  8b06                 mov eax, dword ptr [esi]
// 0086cb72  8b5004               mov edx, dword ptr [eax + 4]
// 0086cb75  8bce                 mov ecx, esi
// 0086cb77  ffd2                 call edx
// 0086cb79  8d4608               lea eax, [esi + 8]
// 0086cb7c  83c9ff               or ecx, 0xffffffff
// 0086cb7f  f00fc108             lock xadd dword ptr [eax], ecx
// 0086cb83  7509                 jne 0x86cb8e
// 0086cb85  8b16                 mov edx, dword ptr [esi]
// 0086cb87  8b4208               mov eax, dword ptr [edx + 8]
// 0086cb8a  8bce                 mov ecx, esi
// 0086cb8c  ffd0                 call eax
// 0086cb8e  5f                   pop edi
// 0086cb8f  5e                   pop esi
// 0086cb90  83c408               add esp, 8
// 0086cb93  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

// roc 2012-06 007afdd0  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007afdd0
//
// 007afdd0  83ec08               sub esp, 8
// 007afdd3  56                   push esi
// 007afdd4  8b742410             mov esi, dword ptr [esp + 0x10]
// 007afdd8  57                   push edi
// 007afdd9  8bf9                 mov edi, ecx
// 007afddb  56                   push esi
// 007afddc  8d4c2410             lea ecx, [esp + 0x10]
// 007afde0  8974240c             mov dword ptr [esp + 0xc], esi
// 007afde4  e8b7dcffff           call 0x7adaa0
// 007afde9  56                   push esi
// 007afdea  8d442410             lea eax, [esp + 0x10]
// 007afdee  56                   push esi
// 007afdef  50                   push eax
// 007afdf0  e89ba9deff           call 0x59a790
// 007afdf5  8d4c2414             lea ecx, [esp + 0x14]
// 007afdf9  83c40c               add esp, 0xc
// 007afdfc  3bcf                 cmp ecx, edi
// 007afdfe  7406                 je 0x7afe06
// 007afe00  8b542408             mov edx, dword ptr [esp + 8]
// 007afe04  8917                 mov dword ptr [edi], edx
// 007afe06  8b7704               mov esi, dword ptr [edi + 4]
// 007afe09  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007afe0d  894704               mov dword ptr [edi + 4], eax
// 007afe10  85f6                 test esi, esi
// 007afe12  742a                 je 0x7afe3e
// 007afe14  8d4e04               lea ecx, [esi + 4]
// 007afe17  83caff               or edx, 0xffffffff
// 007afe1a  f00fc111             lock xadd dword ptr [ecx], edx
// 007afe1e  751e                 jne 0x7afe3e
// 007afe20  8b06                 mov eax, dword ptr [esi]
// 007afe22  8b5004               mov edx, dword ptr [eax + 4]
// 007afe25  8bce                 mov ecx, esi
// 007afe27  ffd2                 call edx
// 007afe29  8d4608               lea eax, [esi + 8]
// 007afe2c  83c9ff               or ecx, 0xffffffff
// 007afe2f  f00fc108             lock xadd dword ptr [eax], ecx
// 007afe33  7509                 jne 0x7afe3e
// 007afe35  8b16                 mov edx, dword ptr [esi]
// 007afe37  8b4208               mov eax, dword ptr [edx + 8]
// 007afe3a  8bce                 mov ecx, esi
// 007afe3c  ffd0                 call eax
// 007afe3e  5f                   pop edi
// 007afe3f  5e                   pop esi
// 007afe40  83c408               add esp, 8
// 007afe43  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

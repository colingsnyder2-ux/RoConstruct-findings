// roc 2010-06 006ba610  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ba610
//
// 006ba610  83ec08               sub esp, 8
// 006ba613  56                   push esi
// 006ba614  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ba618  57                   push edi
// 006ba619  8bf9                 mov edi, ecx
// 006ba61b  56                   push esi
// 006ba61c  8d4c2410             lea ecx, [esp + 0x10]
// 006ba620  8974240c             mov dword ptr [esp + 0xc], esi
// 006ba624  e84749f5ff           call 0x60ef70
// 006ba629  56                   push esi
// 006ba62a  8d442410             lea eax, [esp + 0x10]
// 006ba62e  56                   push esi
// 006ba62f  50                   push eax
// 006ba630  e87b9fd9ff           call 0x4545b0
// 006ba635  8d4c2414             lea ecx, [esp + 0x14]
// 006ba639  83c40c               add esp, 0xc
// 006ba63c  3bcf                 cmp ecx, edi
// 006ba63e  7406                 je 0x6ba646
// 006ba640  8b542408             mov edx, dword ptr [esp + 8]
// 006ba644  8917                 mov dword ptr [edi], edx
// 006ba646  8b7704               mov esi, dword ptr [edi + 4]
// 006ba649  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ba64d  894704               mov dword ptr [edi + 4], eax
// 006ba650  85f6                 test esi, esi
// 006ba652  742a                 je 0x6ba67e
// 006ba654  8d4e04               lea ecx, [esi + 4]
// 006ba657  83caff               or edx, 0xffffffff
// 006ba65a  f00fc111             lock xadd dword ptr [ecx], edx
// 006ba65e  751e                 jne 0x6ba67e
// 006ba660  8b06                 mov eax, dword ptr [esi]
// 006ba662  8b5004               mov edx, dword ptr [eax + 4]
// 006ba665  8bce                 mov ecx, esi
// 006ba667  ffd2                 call edx
// 006ba669  8d4608               lea eax, [esi + 8]
// 006ba66c  83c9ff               or ecx, 0xffffffff
// 006ba66f  f00fc108             lock xadd dword ptr [eax], ecx
// 006ba673  7509                 jne 0x6ba67e
// 006ba675  8b16                 mov edx, dword ptr [esi]
// 006ba677  8b4208               mov eax, dword ptr [edx + 8]
// 006ba67a  8bce                 mov ecx, esi
// 006ba67c  ffd0                 call eax
// 006ba67e  5f                   pop edi
// 006ba67f  5e                   pop esi
// 006ba680  83c408               add esp, 8
// 006ba683  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

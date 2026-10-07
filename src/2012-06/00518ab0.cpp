// roc 2012-06 00518ab0  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00518ab0
//
// 00518ab0  83ec08               sub esp, 8
// 00518ab3  56                   push esi
// 00518ab4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00518ab8  57                   push edi
// 00518ab9  8bf9                 mov edi, ecx
// 00518abb  56                   push esi
// 00518abc  8d4c2410             lea ecx, [esp + 0x10]
// 00518ac0  8974240c             mov dword ptr [esp + 0xc], esi
// 00518ac4  e8a7f7ffff           call 0x518270
// 00518ac9  56                   push esi
// 00518aca  8d442410             lea eax, [esp + 0x10]
// 00518ace  56                   push esi
// 00518acf  50                   push eax
// 00518ad0  e8bb1c0800           call 0x59a790
// 00518ad5  8d4c2414             lea ecx, [esp + 0x14]
// 00518ad9  83c40c               add esp, 0xc
// 00518adc  3bcf                 cmp ecx, edi
// 00518ade  7406                 je 0x518ae6
// 00518ae0  8b542408             mov edx, dword ptr [esp + 8]
// 00518ae4  8917                 mov dword ptr [edi], edx
// 00518ae6  8b7704               mov esi, dword ptr [edi + 4]
// 00518ae9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00518aed  894704               mov dword ptr [edi + 4], eax
// 00518af0  85f6                 test esi, esi
// 00518af2  742a                 je 0x518b1e
// 00518af4  8d4e04               lea ecx, [esi + 4]
// 00518af7  83caff               or edx, 0xffffffff
// 00518afa  f00fc111             lock xadd dword ptr [ecx], edx
// 00518afe  751e                 jne 0x518b1e
// 00518b00  8b06                 mov eax, dword ptr [esi]
// 00518b02  8b5004               mov edx, dword ptr [eax + 4]
// 00518b05  8bce                 mov ecx, esi
// 00518b07  ffd2                 call edx
// 00518b09  8d4608               lea eax, [esi + 8]
// 00518b0c  83c9ff               or ecx, 0xffffffff
// 00518b0f  f00fc108             lock xadd dword ptr [eax], ecx
// 00518b13  7509                 jne 0x518b1e
// 00518b15  8b16                 mov edx, dword ptr [esi]
// 00518b17  8b4208               mov eax, dword ptr [edx + 8]
// 00518b1a  8bce                 mov ecx, esi
// 00518b1c  ffd0                 call eax
// 00518b1e  5f                   pop edi
// 00518b1f  5e                   pop esi
// 00518b20  83c408               add esp, 8
// 00518b23  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

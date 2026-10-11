// roc 2009-12 004aeed0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004aeed0
//
// 004aeed0  83ec10               sub esp, 0x10
// 004aeed3  53                   push ebx
// 004aeed4  55                   push ebp
// 004aeed5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004aeed9  56                   push esi
// 004aeeda  55                   push ebp
// 004aeedb  8bf1                 mov esi, ecx
// 004aeedd  e82ef5ffff           call 0x4ae410
// 004aeee2  8bd8                 mov ebx, eax
// 004aeee4  895c2410             mov dword ptr [esp + 0x10], ebx
// 004aeee8  85f6                 test esi, esi
// 004aeeea  7506                 jne 0x4aeef2
// 004aeeec  ff1560b79800         call dword ptr [0x98b760]
// 004aeef2  8b06                 mov eax, dword ptr [esi]
// 004aeef4  57                   push edi
// 004aeef5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004aeef8  89442410             mov dword ptr [esp + 0x10], eax
// 004aeefc  85c0                 test eax, eax
// 004aeefe  7404                 je 0x4aef04
// 004aef00  3bc0                 cmp eax, eax
// 004aef02  7406                 je 0x4aef0a
// 004aef04  ff1560b79800         call dword ptr [0x98b760]
// 004aef0a  3bdf                 cmp ebx, edi
// 004aef0c  5f                   pop edi
// 004aef0d  7418                 je 0x4aef27
// 004aef0f  83c30c               add ebx, 0xc
// 004aef12  53                   push ebx
// 004aef13  55                   push ebp
// 004aef14  ff15d8b59800         call dword ptr [0x98b5d8]
// 004aef1a  83c408               add esp, 8
// 004aef1d  84c0                 test al, al
// 004aef1f  7506                 jne 0x4aef27
// 004aef21  8d4c240c             lea ecx, [esp + 0xc]
// 004aef25  eb11                 jmp 0x4aef38
// 004aef27  8b0e                 mov ecx, dword ptr [esi]
// 004aef29  8b4618               mov eax, dword ptr [esi + 0x18]
// 004aef2c  894c2414             mov dword ptr [esp + 0x14], ecx
// 004aef30  89442418             mov dword ptr [esp + 0x18], eax
// 004aef34  8d4c2414             lea ecx, [esp + 0x14]
// 004aef38  8b11                 mov edx, dword ptr [ecx]
// 004aef3a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004aef3e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004aef41  5e                   pop esi
// 004aef42  5d                   pop ebp
// 004aef43  8910                 mov dword ptr [eax], edx
// 004aef45  894804               mov dword ptr [eax + 4], ecx
// 004aef48  5b                   pop ebx
// 004aef49  83c410               add esp, 0x10
// 004aef4c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp

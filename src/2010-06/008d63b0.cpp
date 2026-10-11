// roc 2010-06 008d63b0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d63b0
//
// 008d63b0  83ec10               sub esp, 0x10
// 008d63b3  53                   push ebx
// 008d63b4  55                   push ebp
// 008d63b5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008d63b9  56                   push esi
// 008d63ba  55                   push ebp
// 008d63bb  8bf1                 mov esi, ecx
// 008d63bd  e87ef1ffff           call 0x8d5540
// 008d63c2  8bd8                 mov ebx, eax
// 008d63c4  895c2410             mov dword ptr [esp + 0x10], ebx
// 008d63c8  85f6                 test esi, esi
// 008d63ca  7506                 jne 0x8d63d2
// 008d63cc  ff150ca99e00         call dword ptr [0x9ea90c]
// 008d63d2  8b06                 mov eax, dword ptr [esi]
// 008d63d4  57                   push edi
// 008d63d5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 008d63d8  89442410             mov dword ptr [esp + 0x10], eax
// 008d63dc  85c0                 test eax, eax
// 008d63de  7404                 je 0x8d63e4
// 008d63e0  3bc0                 cmp eax, eax
// 008d63e2  7406                 je 0x8d63ea
// 008d63e4  ff150ca99e00         call dword ptr [0x9ea90c]
// 008d63ea  3bdf                 cmp ebx, edi
// 008d63ec  5f                   pop edi
// 008d63ed  7418                 je 0x8d6407
// 008d63ef  83c30c               add ebx, 0xc
// 008d63f2  53                   push ebx
// 008d63f3  55                   push ebp
// 008d63f4  ff151ca59e00         call dword ptr [0x9ea51c]
// 008d63fa  83c408               add esp, 8
// 008d63fd  84c0                 test al, al
// 008d63ff  7506                 jne 0x8d6407
// 008d6401  8d4c240c             lea ecx, [esp + 0xc]
// 008d6405  eb11                 jmp 0x8d6418
// 008d6407  8b0e                 mov ecx, dword ptr [esi]
// 008d6409  8b4618               mov eax, dword ptr [esi + 0x18]
// 008d640c  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d6410  89442418             mov dword ptr [esp + 0x18], eax
// 008d6414  8d4c2414             lea ecx, [esp + 0x14]
// 008d6418  8b11                 mov edx, dword ptr [ecx]
// 008d641a  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d641e  8b4904               mov ecx, dword ptr [ecx + 4]
// 008d6421  5e                   pop esi
// 008d6422  5d                   pop ebp
// 008d6423  8910                 mov dword ptr [eax], edx
// 008d6425  894804               mov dword ptr [eax + 4], ecx
// 008d6428  5b                   pop ebx
// 008d6429  83c410               add esp, 0x10
// 008d642c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp

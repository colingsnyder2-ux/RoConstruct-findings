// roc 2009-06 0048c830  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048c830
//
// 0048c830  83ec10               sub esp, 0x10
// 0048c833  53                   push ebx
// 0048c834  55                   push ebp
// 0048c835  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0048c839  56                   push esi
// 0048c83a  55                   push ebp
// 0048c83b  8bf1                 mov esi, ecx
// 0048c83d  e8cef3ffff           call 0x48bc10
// 0048c842  8bd8                 mov ebx, eax
// 0048c844  895c2410             mov dword ptr [esp + 0x10], ebx
// 0048c848  85f6                 test esi, esi
// 0048c84a  7506                 jne 0x48c852
// 0048c84c  ff15ace98900         call dword ptr [0x89e9ac]
// 0048c852  8b06                 mov eax, dword ptr [esi]
// 0048c854  57                   push edi
// 0048c855  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0048c858  89442410             mov dword ptr [esp + 0x10], eax
// 0048c85c  85c0                 test eax, eax
// 0048c85e  7404                 je 0x48c864
// 0048c860  3bc0                 cmp eax, eax
// 0048c862  7406                 je 0x48c86a
// 0048c864  ff15ace98900         call dword ptr [0x89e9ac]
// 0048c86a  3bdf                 cmp ebx, edi
// 0048c86c  5f                   pop edi
// 0048c86d  7418                 je 0x48c887
// 0048c86f  83c30c               add ebx, 0xc
// 0048c872  53                   push ebx
// 0048c873  55                   push ebp
// 0048c874  ff15e0e48900         call dword ptr [0x89e4e0]
// 0048c87a  83c408               add esp, 8
// 0048c87d  84c0                 test al, al
// 0048c87f  7506                 jne 0x48c887
// 0048c881  8d4c240c             lea ecx, [esp + 0xc]
// 0048c885  eb11                 jmp 0x48c898
// 0048c887  8b0e                 mov ecx, dword ptr [esi]
// 0048c889  8b4618               mov eax, dword ptr [esi + 0x18]
// 0048c88c  894c2414             mov dword ptr [esp + 0x14], ecx
// 0048c890  89442418             mov dword ptr [esp + 0x18], eax
// 0048c894  8d4c2414             lea ecx, [esp + 0x14]
// 0048c898  8b11                 mov edx, dword ptr [ecx]
// 0048c89a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048c89e  8b4904               mov ecx, dword ptr [ecx + 4]
// 0048c8a1  5e                   pop esi
// 0048c8a2  5d                   pop ebp
// 0048c8a3  8910                 mov dword ptr [eax], edx
// 0048c8a5  894804               mov dword ptr [eax + 4], ecx
// 0048c8a8  5b                   pop ebx
// 0048c8a9  83c410               add esp, 0x10
// 0048c8ac  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
